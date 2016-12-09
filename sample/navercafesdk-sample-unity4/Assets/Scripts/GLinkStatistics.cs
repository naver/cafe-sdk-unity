using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public class GLinkStatistics
{
	private static IGLinkStatistics glinkStatistics = null;

	public const string kCurrencyNone = "NONE";
	public const string kCurrencyWon = "WON";
	public const string kCurrencyDollar = "DOLLAR";
	
	public const string kMarketNone = "NONE";
	public const string kMarketOne = "ONE";
	public const string kMarketGoogle = "GOOGLE";
	public const string kMarketApple = "APPLE";
	
	public static IGLinkStatistics sharedInstance() {
		if (glinkStatistics == null) {
			#if UNITY_IOS
			glinkStatistics = new GLinkStatisticsiOS();
			#elif UNITY_ANDROID
			glinkStatistics = new GLinkStatisticsAndroid();
			#endif
		}
		
		return glinkStatistics;
	}
}


// Interface
public interface IGLinkStatistics {
	void sendNewUser(string gameUserId, string market);
	void sendPayUser(string gameUserId, double pay, string productCode, string currency, string market);
}

// implementation
public class GLinkStatisticsiOS : IGLinkStatistics {

	#if UNITY_IPHONE
	[DllImport("__Internal")]
	public static extern void _SendNewUser(string gameUserId, string market);

	[DllImport("__Internal")]
	public static extern void _SendPayUser (string gameUserId, double pay, string productCode, string currency, string market);
	#endif

	public void sendNewUser(string gameUserId, string market) {
		#if UNITY_IPHONE 
		_SendNewUser(gameUserId, market);
		#endif
	}

	public void sendPayUser(string gameUserId, double pay, string productCode, string currency, string market) {
		#if UNITY_IPHONE 
		_SendPayUser (gameUserId, pay, productCode, currency, market);
		#endif
	}

}

public class GLinkStatisticsAndroid : IGLinkStatistics {
	
	public void sendNewUser(string gameUserId, string market) {
		#if UNITY_ANDROID
		AndroidJavaClass statisticsClass = new AndroidJavaClass ("com.naver.glink.android.sdk.Statistics");
		statisticsClass.CallStatic ("sendNewUser", gameUserId, market);
		#endif
	}
	
	public void sendPayUser(string gameUserId, double pay, string productCode, string currency, string market) {
		#if UNITY_ANDROID
		AndroidJavaClass statisticsClass = new AndroidJavaClass ("com.naver.glink.android.sdk.Statistics");
		statisticsClass.CallStatic ("sendPayUser", gameUserId, pay, productCode, currency, market);
		#endif
	}
}

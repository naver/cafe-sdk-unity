using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using AOT;

public class GLinkNaverId
{
	private static IGLinkNaverId glinkNaverId = null;

	public static IGLinkNaverId sharedInstance() 
	{
		if (glinkNaverId == null) {
			#if UNITY_IOS
			glinkNaverId = new GLinkNaverIdiOS();
			#elif UNITY_ANDROID
			glinkNaverId = new GLinkNaverIdAndroid();
			#endif
		}

		return glinkNaverId;
	}
}
// 네이버 아이디 로그인 인터페이스
public interface IGLinkNaverId
{
	void init(string clientId, string clientSecret);

	void login();

	void logout();

	bool isLogin();

	void getProfile();
}

// 구현
public class GLinkNaverIdiOS : IGLinkNaverId {
	#if UNITY_IPHONE
	[DllImport("__Internal")]
	private static extern void _InitNaverLogin(string clientId, string clientSecret);

	[DllImport("__Internal")]
	private static extern void _Login();

	[DllImport("__Internal")]
	private static extern void _Logout();

	[DllImport("__Internal")]
	private static extern bool _IsLogin();
	
	[DllImport("__Internal")]
	private static extern bool _GetProfile();

	[DllImport("__Internal")]
	private static extern void _SetNaverIdLoginCallback(NaverIdLoginDelelgate callback);

	[DllImport("__Internal")]
	private static extern void _SetNaverIdGetProfileDelegate(NaverIdGetProfileDelegate callback);
	#endif

	delegate void NaverIdLoginDelelgate();
	[MonoPInvokeCallback(typeof(NaverIdLoginDelelgate))]
	public static void _NaverIdLoginCallback () {
		Debug.Log("Naver Login Success");
	}

	delegate void NaverIdGetProfileDelegate(string result);
	[MonoPInvokeCallback(typeof(NaverIdGetProfileDelegate))]
	public static void _NaverIdGetProfileCallback (string result) {
		Debug.Log(" result : " + result);
	}

	public GLinkNaverIdiOS() {
		#if UNITY_IPHONE
			_SetNaverIdLoginCallback(_NaverIdLoginCallback);
			_SetNaverIdGetProfileDelegate(_NaverIdGetProfileCallback);
		#endif
	}

	public void init(string clientId, string clientSecret) {
		#if UNITY_IPHONE
			_InitNaverLogin(clientId, clientSecret);
		#endif
	}

	public void login() {
		#if UNITY_IPHONE
			_Login();
		#endif
	}

	public void logout() {
		#if UNITY_IPHONE
			_Logout();
		#endif
	}

	public bool isLogin() {
		bool isLogin = false;
		#if UNITY_IPHONE
			isLogin = _IsLogin();
		#endif
		return isLogin;
	}

	public void getProfile() {
		#if UNITY_IPHONE
			_GetProfile();
		#endif
	}
}


public class GLinkNaverIdAndroid : IGLinkNaverId {

	#if UNITY_ANDROID
	AndroidJavaClass delegateClass = null;
	AndroidJavaObject currentActivity = null;

	class OnLoggedInListener : AndroidJavaProxy {
		public OnLoggedInListener () : base("com.naver.glink.android.sdk.Glink$OnLoggedInListener") { /* empty. */ }

		void onLoggedIn (bool success) {
			// TODO: login callback.
		}
	}

	class OnGetProfileListener : AndroidJavaProxy {
		public OnGetProfileListener () : base("com.naver.glink.android.sdk.NaverIdLogin$OnGetProfileListener") { /* empty. */ }

		void onResult(string jsonString) {
			// TODO: get profile callback.
		}
	}
	#endif

	public GLinkNaverIdAndroid () {
		#if UNITY_ANDROID
		delegateClass = new AndroidJavaClass ("com.naver.glink.android.sdk.NaverIdLogin");
		currentActivity = new AndroidJavaClass ("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject> ("currentActivity");
		#endif
	}

	public void init(string clientId, string clientSecret) {
		#if UNITY_ANDROID
		AndroidJavaClass glinkClass = new AndroidJavaClass ("com.naver.glink.android.sdk.Glink");
		glinkClass.CallStatic ("init", currentActivity, clientId, clientSecret, -1);
		#endif
	}

	public void login() {
		#if UNITY_ANDROID
		delegateClass.CallStatic ("login", currentActivity, new OnLoggedInListener());
		#endif
	}

	public void logout() {
		#if UNITY_ANDROID
		delegateClass.CallStatic ("logout", currentActivity);
		#endif
	}

	public bool isLogin() {
		#if UNITY_ANDROID 
		return delegateClass.CallStatic<bool> ("isLogin", currentActivity);
		#endif

		return false;
	}

	public void getProfile() {
		#if UNITY_ANDROID
		delegateClass.CallStatic ("getProfile", currentActivity, new OnGetProfileListener());
		#endif
	}
}
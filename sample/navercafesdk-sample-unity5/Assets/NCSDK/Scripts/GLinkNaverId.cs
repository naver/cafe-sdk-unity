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
		Debug.Log(">>>>>>>>>>>>>>> login callback");
	}

	delegate void NaverIdGetProfileDelegate(string result);
	[MonoPInvokeCallback(typeof(NaverIdGetProfileDelegate))]
	public static void _NaverIdGetProfileCallback (string result) {
		Debug.Log(">>>>>>>>>>>>>>> profile callback");
		Debug.Log(" result : " + result);
	}

	public GLinkNaverIdiOS() {
		#if UNITY_IPHONE
			_SetNaverIdLoginCallback(_NaverIdLoginCallback);
			_SetNaverIdGetProfileDelegate(_NaverIdGetProfileCallback);
		#endif
	}

	public void init(string clientId, string clientSecret) {
		_InitNaverLogin(clientId, clientSecret);
	}

	public void login() {
		_Login();
	}

	public void logout() {
		_Logout();
	}

	public bool isLogin() {
		bool isLogin = false;
		#if UNITY_IPHONE
			isLogin = _IsLogin();
		#endif
		return isLogin;
	}

	public void getProfile() {
		_GetProfile();
	}
}


public class GLinkNaverIdAndroid : IGLinkNaverId {
	public void init(string clientId, string clientSecret) {

	}

	public void login() {

	}

	public void logout() {
		
	}

	public bool isLogin() {
		return true;
	}

	public void getProfile() {
		
	}
}
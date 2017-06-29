using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using AOT;

public class GLinkRecord {

	private static IGLinkRecord glinkRecord = null;

	public static IGLinkRecord sharedInstance() 
	{
		if (glinkRecord == null) {
			#if UNITY_IOS
			glinkRecord = new GLinkRecordiOS();
			#elif UNITY_ANDROID
			glinkRecord = new GLinkRecordAndroid();
			#endif
		}

		return glinkRecord;
	}	
}

public interface IGLinkRecord
{
	void startRecord();

	void stopRecord();
}

public class GLinkRecordiOS : IGLinkRecord {
	#if UNITY_IPHONE
	[DllImport("__Internal")]
	private static extern void _StartRecord();

	[DllImport("__Internal")]
	private static extern void _StopRecord();

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordStartDelegate(RecordStartDelegate callback);

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordErrorDelegate(RecordErrorDelegate callback);

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordFinishDelegate(RecordFinishDelegate callback);

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordFinishWithPreviewDelegate(RecordFinishWithPreviewDelegate callback);
	#endif

	delegate void RecordStartDelegate();
	[MonoPInvokeCallback(typeof(RecordStartDelegate))]
	public static void _RecordStartCallback () {
		Debug.Log("Record Started.");
	}

	delegate void RecordErrorDelegate(string result);
	[MonoPInvokeCallback(typeof(RecordErrorDelegate))]
	public static void _RecordErrorCallback (string result) {
		Debug.Log("Record Error : " + result);
	}

	delegate void RecordFinishDelegate();
	[MonoPInvokeCallback(typeof(RecordFinishDelegate))]
	public static void _RecordFinishCallback () {
		Debug.Log("Record Finish.");
	}

	delegate void RecordFinishWithPreviewDelegate();
	[MonoPInvokeCallback(typeof(RecordFinishWithPreviewDelegate))]
	public static void _RecordFinishWithPreviewCallback () {
		Debug.Log("Record Finish With Preview.");
	}

	public GLinkRecordiOS() {
		#if UNITY_IPHONE
			_SetSDKRecordStartDelegate(_RecordStartCallback);
			_SetSDKRecordErrorDelegate(_RecordErrorCallback);
			_SetSDKRecordFinishDelegate(_RecordFinishCallback);
			_SetSDKRecordFinishWithPreviewDelegate(_RecordFinishWithPreviewCallback);
		#endif
	}

	public void startRecord() {
		#if UNITY_IPHONE
			_StartRecord();
		#endif
	}

	public void stopRecord() {
		#if UNITY_IPHONE
			_StopRecord();
		#endif
	}
}

public class GLinkRecordAndroid : IGLinkRecord {

	#if UNITY_ANDROID
	AndroidJavaClass delegateClass = null;
	AndroidJavaObject currentActivity = null;

	class OnRecordManagerListener : AndroidJavaProxy {
		public OnRecordManagerListener () : base("com.naver.glink.android.sdk.PlugRecordManager$OnRecordManagerListener") { /* empty. */ }

		void onStartRecord() {
			// TODO: startRecord callback.
			showToast ("start record");
		}

		void onErrorRecord() {
			 //TODO: record error callback.+
			showToast ("record error");
		}

		void onFinishRecord(string uri) {
			//TODO: record finish callback.+
			// GLinkAndroid glink = (GLinkAndroid) GLink.sharedInstance ();
			// glink.executeArticlePostWithVideo (uri);
		}
	}
		
	static void showToast(string message) {
				var activity = new AndroidJavaClass ("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject> ("currentActivity");
				activity.Call ("runOnUiThread", new AndroidJavaRunnable (() => {
					AndroidJavaObject toast = new AndroidJavaClass ("android.widget.Toast").CallStatic<AndroidJavaObject>("makeText", activity, message, 1);
					toast.Call ("show");
				}));
	}
	#endif

	public GLinkRecordAndroid () {
		#if UNITY_ANDROID
		delegateClass = new AndroidJavaClass ("com.naver.glink.android.sdk.PlugRecordManager");
		currentActivity = new AndroidJavaClass ("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject> ("currentActivity");

		delegateClass.CallStatic ("setOnRecordManagerListener", new OnRecordManagerListener());
		#endif
	}


	public void startRecord() {
		#if UNITY_ANDROID 
		GLink.sharedInstance();
		delegateClass.CallStatic ("startRecord", currentActivity);
		#endif
	}

	public void stopRecord() {
		#if UNITY_ANDROID
		delegateClass.CallStatic ("stopRecord");
		#endif
	}
}

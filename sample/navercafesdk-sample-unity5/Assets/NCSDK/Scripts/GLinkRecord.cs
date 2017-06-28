using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using AOT;

public class GLinkRecord {

	private static IGLinkRecord glinkRecord = null;

	public static IGLinkNaverId sharedInstance() 
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
	private static extern void startRecord();

	[DllImport("__Internal")]
	private static extern void stopRecord();

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordStartDelegate(RecordStartDelegate callback);

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordErrorDelegate(NaverIdGetProfileDelegate callback);

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordFinishDelegate(NaverIdGetProfileDelegate callback);

	[DllImport("__Internal")]
	private static extern void _SetSDKRecordFinishWithPreviewDelegate(NaverIdGetProfileDelegate callback);
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
}

public class GLinkNaverIdAndroid : IGLinkNaverId {

	public void startRecord() {
		#if UNITY_ANDROID 
		
		#endif
	}

	public void stopRecord() {
		#if UNITY_ANDROID
		
		#endif
	}
}

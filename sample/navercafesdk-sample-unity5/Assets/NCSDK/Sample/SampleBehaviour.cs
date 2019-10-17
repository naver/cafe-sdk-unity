using UnityEngine;
using System;
using System.Collections;
using System.Text.RegularExpressions;
using System.IO;

public class SampleBehaviour : MonoBehaviour {



	[Header("NAVER CAFE ID")]
	public int CafeId = 28290504;

	[Header("NAVER CAFE ClientId")]
	public string NaverLoginClientId = "197CymaStozo7X5r2qR5";

	[Header("NAVER CAFE ClientSecret")]
	public string NaverLoginClientSecret = "evCgKH1kJL";

	public string NeoIdConsumerKey = "IHCd_HmSiMcXOMC37xZ8";
	public int CommunityId = 1013329;
	public string Language = "";

	public void OnClickGlinkButton () {

		GLink.sharedInstance().setWidgetStartPosition(false, 60);
		GLink.sharedInstance().executeHome ();
	}

	public void OnClickGlinkInitial () {

				AndroidJavaClass glinkClass = null;
				AndroidJavaObject currentActivity = null;
		
				currentActivity = new AndroidJavaClass ("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject> ("currentActivity");
				glinkClass = new AndroidJavaClass ("com.naver.glink.android.sdk.Glink");
		
				string name = "CafeSdkController";
				GameObject obj = GameObject.Find (name);
				if (obj == null) {
					obj = new GameObject ("CafeSdkController");
					obj.AddComponent<SampleBehaviour> ();
				}
		
				SampleBehaviour behaviour = obj.GetComponent<SampleBehaviour> ();

				glinkClass.CallStatic ("init", currentActivity, NaverLoginClientId, NaverLoginClientSecret, CafeId);
	}


	public void OnClickScreenShotButton () {
		StartCoroutine (SaveScreenShot ());
	}

	// http://wiki.unity3d.com/index.php/ScreenCapture
	private IEnumerator SaveScreenShot () {
		yield return new WaitForEndOfFrame();

		string filePath = Application.persistentDataPath + "/GLShareImage.png";

		//Create a texture to pass to encoding
		Texture2D texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);

		//Put buffer into texture
		texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);

		//Split the process up--ReadPixels() and the GetPixels() call inside of the encoder are both pretty heavy
		yield return 0;

		byte[] bytes = texture.EncodeToPNG();

		//Save our test image (could also upload to WWW)
		File.WriteAllBytes(filePath, bytes);

		//Tell unity to delete the texture, by default it seems to keep hold of it and memory crashes will occur after too many screenshots.
		DestroyObject(texture);

		GLink.sharedInstance().executeArticlePostWithImage(filePath);
	}
}



using UnityEngine;
using System;
using System.Collections;
using System.Text.RegularExpressions;
using System.IO;

public class SampleBehaviour : MonoBehaviour {
	public void OnClickGlinkButton () {
		GLinkUnity.executeMain ();
	}
	
	public void OnClickScreenShotButton () {
		StartCoroutine (this.CoFunction ());
		
		Texture2D image = new Texture2D (Screen.width, Screen.height, TextureFormat.RGB24, false);
		image.ReadPixels (new Rect (0, 0, Screen.width, Screen.height), 0, 0, true);
		image.Apply ();
		Debug.Log (image);
		
		byte[] bytes = image.EncodeToPNG();
		string path = Application.persistentDataPath + "/GLShareImage.png";
		File.WriteAllBytes(path, bytes);		

		GLinkUnity.executeArticlePostWithImage(10, "스크린샷!!", "제 점수는요~", path);
	}

	IEnumerator CoFunction () {
		yield return new WaitForEndOfFrame();
	}
}



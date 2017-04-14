using UnityEngine;
using System;
using System.Collections;
using System.Text.RegularExpressions;
using System.IO;

public class SampleBehaviour : MonoBehaviour {
	
	public void OnClickGlinkButton () {
		GLink.sharedInstance().setWidgetStartPosition(false, 60);
		GLink.sharedInstance().executeHome ();
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



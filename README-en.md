# PLUG SDK

The PLUG SDK is a dedicated in-app community library for mobile games, which lets mobile gamers use community features without leaving games while they are playing. It is easy to apply the PLUG SDK to your project.

As a proven SDK, which has been used in many mobile games, this lets you simply and quickly add community features in your game.
 
![PLUG SDK](http://static.naver.net/m/cafe/glink/promotion/cafe_sdk_open/img_intro1_20151111.png)

## How To Get Started 

### Become a Partner

You should apply to our partner program to apply the PLUG SDK to your app. Please fill out the form after downloads and send it via email.

- [Downloads of partnership registration form](https://github.com/naver/cafe-sdk-android/raw/master/guide/alliance/%EB%84%A4%EC%9D%B4%EB%B2%84%EC%B9%B4%ED%8E%98SDK_%EC%A0%9C%ED%9C%B4%EC%96%91%EC%8B%9D_%EA%B2%8C%EC%9E%84%EC%82%AC%EB%AA%85_%EA%B2%8C%EC%9E%84%EB%AA%85_ver.2.0.0.xlsx)
- Email address of a partnership contact: <a href="mailto:dl_naverplugpartner@navercorp.com">dl_naverplugpartner@navercorp.com</a>

You can manage the PLUG SDK content on the Settings page from your computer after the partnership process is completed. 

### Documentation

- [PLUG documents](https://github.com/naver/cafe-sdk-unity/wiki)
- [Downloads of latest library and sample project files](https://github.com/naver/cafe-sdk-unity/archive/master.zip)

## Communication 
If you have any questions regarding working this SDK, please [visit our issue page for unity](https://github.com/naver/cafe-sdk-unity/issues).

## Usages 

### 1. Configure a Project

To use the PLUG SDK, you must set up a development environment in Unity as follows:

1. Go to **Asset** and click **Import package** to import the PLUG SDK package to your Unity game project. The following SDKs are included in the Unity Package 2.3.1.  
    - NaverCafeSDK For Android 2.3.1
    - NaverCafeSDK For iOS 2.3.0
2. Create the PLUG SDK execute button by dragging **NCSDK.Prefabs** located under the **NCSDK > Sample** folder to your desired scene.

You can create your own execute button of PLUG SDK even though it is provided with the PLUG SDK for your convenience. The sample code is written in the **SampleBehaviour.cs** file. 

> For more information about PLUG SDK for each operating system, visit the GitHub repository.
> - [GitHub repository for Android PLUG SDK](https://github.com/naver/cafe-sdk-android)
> - [GitHub repository for iOS PLUG SDK](https://github.com/naver/cafe-sdk-ios)

### 2. Initialize the PLUG SDK

Initializing the PLUG SDK will vary depending on the supported language.

#### 2.1 Support for Korean only (NAVER Cafe)

Configure the initialization information and comment out the code associated with languages support other than Korean in the script file in order to initialize the PLUG SDK that supports Korean only.

Configure the initialization information below in the **GLinkConfig.cs** file located under the **NCSDK > Scripts** folder.

- NaverLoginClientId: Client ID you received after registering your application in [NAVER Login Developers](https://developers.naver.com/apps/#/register?api=nvlogin)
- NaverLoginClientSecret: Client secret you received after registering your application in [NAVER Login Developers](https://developers.naver.com/apps/#/register?api=nvlogin)
- CafeId: Cafe ID you received after creating your Cafe in [NAVER Cafe](http://section.cafe.naver.com/)

Comment out the code associated with languages support other than Korean in the script file for each operating system, which is located under the **NCSDK > Script** folder.

Comment out the code below in the **GlinkAndroid.cs** file, a script file for Android.

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

Comment out the code below in the **GlinkiOS.cs** file, a script file for iOS.

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```
#### 2.2 Support for languages other than Korean

Configure the initialization information and uncomment the code associated with languages support other than Korean in the script file in order to initialize the PLUG SDK that supports languages other Korean.

Configure the initialization information below in the **GLinkConfig.cs** file located under the **NCSDK > Scripts** folder.

- NeoIdConsumerKey: Consumer key you received after creating your community
- CommunityId: Community ID you received after creating your community

Uncomment the code associated with languages support other than Korean in the script file for each operating system, which is located under the **NCSDK > Script** folder.

Uncomment the code below in the **GlinkAndroid.cs** file, a script file for Android.

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

Uncomment the code below in the **GlinkiOS.cs** file, a script file for iOS.

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

> **How to check your community ID and consumer key**  
> Visit http://g.cafe.naver.com/plugsample/manage/consumer and log in to your community using the account with manager privileges.
> You can find the information in **Settings > Communities > In-App Community Settings** as shown in the image below.  
> ![In-App Community Settings](https://plug.gitbooks.io/plug-sdk-android/content/assets/wiki-plug-setting.png)

### 3. Start the PLUG SDK

Start the PLUG SDK after initialization is completed.

> **GLink.cs file**  
> The GLink.cs file is a script file that includes the PLUG SDK control method. For more information about methods for Unity PLUG SDK, see [PLUG SDK documentation](https://github.com/naver/cafe-sdk-unity/wiki).

#### 3.1 executeHome() method

The executeHome() method starts PLUG SDK.

```objective-c
GLink.sharedInstance().executeHome();
```

#### 3.2 executeArticlePost() method

The executeArticlePost() method opens a post compose. The forum ID is passed as a parameter.

```objective-c
GLink.sharedInstance().executeArticlePost("Content");
```

### 4. Add Additional Configurations for iOS

To develop game apps for iOS, you must add additional configurations as follows:

#### 4.1 Portrait mode

To develop game apps that require executions in portrait mode, set the NCSDKManager.setOrientationIsLandscape property to "NO" in the **NCSDKUnityManager.mm** file located under the **NCSDK/Plugins/iOS** folder.

```objective-c
- (void)setGLRootViewController {
    _mainViewcontroller = UnityGetGLViewController();
    
    [[NCSDKManager getSharedInstance] setParentViewController:_mainViewcontroller];
    [[NCSDKManager getSharedInstance] setNcSDKDelegate:self];
    [[NCSDKManager getSharedInstance] setOrientationIsLandscape:NO];
}

```

#### 4.2 .bundle file link

For Unity 5.4.0f3 or later, the .bundle file is not linked by default when building applications for iOS.
To make **NaverAuth.bundle** and **NaverCafeSDK.bundle** linked, you should select **iOS** in **Select for plugin** as shown the image below.
 
![Configuration to link the NaverAuth.bundle file](http://cafeptthumb3.phinf.naver.net/MjAxNjA5MjFfMTcw/MDAxNDc0NDM1ODY2NjMy.f6PEBXPB6yrmhY0HFRf0ans0jLaE4-kO9RqLmPCd1bcg.4LyBxzBvuulvTM8GZgDJH1-Mc9N9uR7Vzaf6CLaDlokg.PNG.cafesdksupport/12.png?type=w740)
![Configuration to link the NaverCafeSDK.bundle file](http://cafeptthumb2.phinf.naver.net/MjAxNjA5MjFfNjgg/MDAxNDc0NDM1ODY2ODA1.9ks28hm-J0Vws9UxNyw0VuNJXRj6LtlHjcpQQC7FIBEg.58cYn1IJ7HlreiT-9dczAnWNhyJAQemYF_H5HojizBEg.PNG.cafesdksupport/13.png?type=w740)

#### 4.3 Xcode configuration

You must set up a development environment in Xcode as follows:

1. Go to **Build Settings > Other Linker Flags** and add the **-ObjC** option. 
2. Go to **Build Phases > Link Binary With Libraries** and add the following libraries. Set **Status** of each library to **Required**.
    - MobileCoreServices.framework
    - SystemConfiguration.framework
    - MediaPlayer.framework
    - AVFoundation.framework
    - CoreMedia.framework
    - AssetsLibrary.framework
    - Security.framework
    - ImageIO.framework
    - QuartzCore.framework
    - ReplayKit.framework (set **Status** to **Optional**)

## Files and Folders 
|Name	|Description|
|---|---|
|guide/	|Folder for PLUG SDK documentation|
|lib/	|Folder for Unity PLUG SDK library|
|sample/	|Folder for sample project|
|LICENSE	|License file| 
|README.md	|Readme file|

## Dependent Libraries 

You should add the following libraries to your project and build together with the PLUG SDK in order to use the PLUG SDK. The libraries are included in the sample project.

### For Android

- Android Support Library v4
- [NAVER Login](https://nid.naver.com/devcenter/docs.nhn?menu=Android)
- [NAVER Volleyer](http://mvnrepository.com/artifact/com.navercorp.volleyextensions/volleyer) (version 2.0.1)
- [Volley](http://mvnrepository.com/artifact/com.mcxiaoke.volley/library/) (version 1.0.2)
- [Google Gson](http://mvnrepository.com/artifact/com.google.code.gson/gson) (version 2.3.1)
- [Glide](http://mvnrepository.com/artifact/com.github.bumptech.glide/glide) (version 3.6.1)
- [Otto](http://mvnrepository.com/artifact/com.squareup/otto) (version 1.3.8)
- hmac (version 2.3.1)

### For iOS

- [NAVER Login](https://nid.naver.com/devcenter/docs.nhn?menu=IOS) (version 4.0.7)
- [AFNetworking](https://github.com/AFNetworking/AFNetworking) (version 3.1.0)

> Both 2.x and 3.x versions are available. The PLUG SDK is tested on AFNetworking 3.1.0.

- [SDWebImage](https://github.com/rs/SDWebImage) (version 3.8.2)
- [FLAnimatedImage](https://github.com/Flipboard/FLAnimatedImage) (version 1.0.12)
- ApiGateway-1.5.0 

## License 

The intellectual property right of the PLUG SDK is owned by NAVER Corporation.

```
NAVER Cafe SDK for Unity

Copyright 2015 NAVER Corp.
All rights reserved.

Unauthorized use, modification and redistribution of this software are strongly prohibited.
```

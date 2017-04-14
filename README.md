# PLUG SDK

![http://static.naver.net/m/cafe/glink/promotion/cafe_sdk_open/img_intro1_20151111.png](http://static.naver.net/m/cafe/glink/promotion/cafe_sdk_open/img_intro1_20151111.png)

PLUG SDK는 모바일 게임에서 이탈하지 않고 커뮤니케이션이 가능한 IN-GAME COMMUNITY 라이브러리 입니다. 간단한 조작으로 프로젝트에 PLUG SDK를 추가 할 수 있습니다.

이미 많은 게임에 적용되어 검증되어 있는 PLUG SDK는 손쉽게 커뮤니케이션 기능을 게임 안에 넣을 수 있습니다.

# How To Get Started
- 최신 버전을 [다운로드](https://github.com/naver/cafe-sdk-unity/archive/master.zip)하면 샘플 프로젝트를 실행할 수 있다.
- 한국 채널인 네이버 카페를 사용하기 위해 [제휴 신청](https://github.com/naver/cafe-sdk-ios/wiki/%5B%ED%95%9C%5D-%EC%84%A0%ED%96%89-%EC%9E%91%EC%97%85)이 필요하다.
- 글로벌 채널을 사용하기 위해 [제휴 신청](https://github.com/naver/cafe-sdk-ios/wiki/%5B%ED%95%9C%5D%20%EA%B8%80%EB%A1%9C%EB%B2%8C%20%EB%84%A4%EC%9D%B4%EB%B2%84%20%EC%B9%B4%ED%8E%98%20%EC%82%AC%EC%9A%A9)이 필요하다.
- 프로젝트에 적용하기 위한 [위키 가이드](https://github.com/naver/cafe-sdk-unity/wiki)가 작성 되어 있다.

# Communication
- [개발 문의 사항](http://cafe.naver.com/ArticleList.nhn?search.clubid=28285034&search.menuid=13&search.boardtype=L)에 있는 질문과 답변이 적용하는데 도움이 될 수 있다.
- 문의 사항이 있는 경우 [카페](http://cafe.naver.com/navercafesdk) 혹은 [e-mail](dl_navercafesdk@navercorp.com)을 사용한다.


# Usages
- [iOS GitHub](https://github.com/naver/cafe-sdk-ios)
- [Android GitHub](https://github.com/naver/cafe-sdk-android)


## 1. 프로젝트 설정
 적용하려는 유니티 게임프로젝트에 Unity Package 를 Import 한다.

### PLUG 실행버튼 생성
 NCSDK / Sample / NCSDK.Prefabs 을 원하는 Scene 에 Drag & Drop 한다.
 PLUG 실행버튼이 생성되며 SampleBehaviour.cs 에 샘플코드가 작성되어 있다.
 ( 개발 편의를 위한 버튼으로 직접생성해도 무방하다.)


## 2. Initialize

### 2-1. 한국 채널(네이버 카페) - 글로벌 채널만 사용하는 경우 세팅하지 않는다.

[네이버 아이디로 로그인 애플리케이션 등록](https://developers.naver.com/apps/#/register?api=nvlogin)에서 받은 ClientId, ClientSecret 값을 세팅한다.

[네이버 카페를 개설](http://section.cafe.naver.com/)하고 얻은 카페 ID를 세팅한다.

[네이버 아이디로 로그인 어플리케이션](https://developers.naver.com/apps/#/myapps) 설정에 등록한 URL Scheme을 세팅한다.

NCSDK / Scripts / GLinkConfig.cs 에서 발급받은 정보들을 세팅한다.

국내카페만 이용할 경우 

- NaverLoginClientId
- NaverLoginClientSecret
- CafeId

3개의 정보만 필요하다.

#### Android
 NCSDK / Script / GlinkAndroid.cs 에서

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

 항목이 있으면 주석처리한다.


#### iOS
 NCSDK / Script / GlinkiOS.cs 에서

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

 항목이 있으면 주석처리한다.




### 2-2. 글로벌 채널 - 한국 채널만 사용하는 경우 세팅하지 않는다.
개설된 커뮤니티에 매니저 권한으로 접속한 후, [setting > Communities > In-App Community Setting](http://g.cafe.naver.com/plugsample/manage/consumer)으로 진입하여 '커뮤니티 ID 및 Consumer Key, Consumer Secret'를 발급받는다.

![](https://plug.gitbooks.io/plug-sdk-android/content/assets/wiki-plug-setting.png)

NCSDK / Scripts / GLinkConfig.cs 에서 발급받은 정보들을 세팅한다.

글로벌 채널을 이용할 경우  

- NeoIdConsumerKey
- CommunityId


2개의 정보에 대해 입력한다.


#### Android
NCSDK / Script / GlinkAndroid.cs 에서

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

항목을 주석해체한다.


#### iOS
NCSDK / Script / GlinkiOS.cs 에서

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

항목을 주석해체한다.



### 3. GLink.cs
[상세 가이드](https://github.com/naver/cafe-sdk-unity/wiki)에서 자세한 내용을 확인 할 수 있다.

#### executeHome()

PLUG를 실행한다.

```objective-c
GLink.sharedInstance().executeHome();

```

#### executeArticlePost

PLUG 글쓰기 화면을 실행한다.
게시판 ID 를 파라메터로 넘긴다.

```objective-c
GLink.sharedInstance().executeArticlePost("Content");

```



### 4. iOS 추가설정
#### 4-1. 세로모드
 NCSDK / Plugins / iOS / NCSDKUnityManager.mm 에서 
 NCSDKManager.setOrientationIsLandscape()을 NO 로 설정한다.
 
```objective-c
- (void)setGLRootViewController {
    _mainViewcontroller = UnityGetGLViewController();
    
    [[NCSDKManager getSharedInstance] setParentViewController:_mainViewcontroller];
    [[NCSDKManager getSharedInstance] setNcSDKDelegate:self];
    [[NCSDKManager getSharedInstance] setOrientationIsLandscape:NO];
}

```

#### 4-2. bundle Import
Unity 5.4.0f3 이상 버전에는 iOS Build 시 bundle 파일이 링크가 걸리지 않는 것으로 설정되어 있습니다.
NaverCafeSDK.bundle, NaverAuth.bundle 을 아래와 같이 Select for plugin 에서 iOS 부분을 체크하셔야 합니다.

![](http://cafeptthumb3.phinf.naver.net/MjAxNjA5MjFfMTcw/MDAxNDc0NDM1ODY2NjMy.f6PEBXPB6yrmhY0HFRf0ans0jLaE4-kO9RqLmPCd1bcg.4LyBxzBvuulvTM8GZgDJH1-Mc9N9uR7Vzaf6CLaDlokg.PNG.cafesdksupport/12.png?type=w740)
![](http://cafeptthumb2.phinf.naver.net/MjAxNjA5MjFfNjgg/MDAxNDc0NDM1ODY2ODA1.9ks28hm-J0Vws9UxNyw0VuNJXRj6LtlHjcpQQC7FIBEg.58cYn1IJ7HlreiT-9dczAnWNhyJAQemYF_H5HojizBEg.PNG.cafesdksupport/13.png?type=w740)



#### 4-3. (XCode) Build Settings > Other Linker Flags에 -ObjC 옵션을 추가한다.
 
#### 4-2. (XCode) Build Phases > Link Binary With Libraries에 다음 라이브러리를 추가한다.
- MobileCoreServices.framework (Required)
- SystemConfiguration.framework (Required)
- MediaPlayer.framework (Required)
- AVFoundation.framework (Required)
- CoreMedia.framework (Required)
- AssetsLibrary.framework (Required)
- Security.framework (Required)
- ImageIO.framework (Required)
- QuartzCore.framework (Required)
- ReplayKit.framework (Optional)


v.2.3.2
-------------
- Unity Package 2.3.1 에는 다음과 같은 NaverCafeSDK 를 포함하고 있습니다.

NaverCafeSDK For Android 2.3.2

NaverCafeSDK For iOS 2.3.1


폴더 구조
-------------

file      | 설명 		
---			| ---		
guide/			| 가이드 문서 및 CafeSDK 설명
lib/		 	| NaverCafeSDK 유니티용 패키지
LICENSE     | 라이선스 파일
README.md   | readme 파일


의존 라이브러리 - 샘플 프로젝트에 포함되어 있다.
-------------
[Android]

- [네이버 아이디 로그인](https://nid.naver.com/devcenter/docs.nhn?menu=Android)
- Android Support Library v4
- Android Support Custom Tabs
- [naver volleyer](http://mvnrepository.com/artifact/com.navercorp.volleyextensions/volleyer)   (2.0.1 사용 중)
- [volley](http://mvnrepository.com/artifact/com.mcxiaoke.volley/library/) (1.0.2사용 중)
- [google gson](http://mvnrepository.com/artifact/com.google.code.gson/gson)  (2.3.1 사용 중)
- [glide](http://mvnrepository.com/artifact/com.github.bumptech.glide/glide)  (3.6.1 사용 중)
- [otto](http://mvnrepository.com/artifact/com.squareup/otto)  (1.3.8 사용 중)
- hmac (2.3.1 사용중)


[iOS]

- [네이버 아이디 로그인-4.0.7](https://nid.naver.com/devcenter/docs.nhn?menu=IOS)
- [AFNetworking](https://github.com/AFNetworking/AFNetworking)
<br>2.x, 3.x 사용 가능하며 3.1.0에서 테스트 진행했습니다.
- [SDWebImage-3.8.2](https://github.com/rs/SDWebImage)
- [FLAnimatedImage-1.0.12](https://github.com/Flipboard/FLAnimatedImage)
- ApiGateway-1.5.0

라이선스
-------------
NAVER Cafe SDK for Unity

Copyright 2015 NAVER Corp. All rights reserved.

Unauthorized use, modification and redistribution of this software are strongly prohibited.

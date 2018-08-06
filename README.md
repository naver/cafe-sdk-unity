# PLUG SDK

* UnityPackage 3.3.2 은 LFS 로 업로드 되어있어서 zip download 를 지원하지 않습니다.
(https://github.com/naver/cafe-sdk-unity/blob/master/lib/PLUGSDK-3.3.2.unitypackage)
이 경로로 직접 다운로드 하여주세요.


PLUG SDK는 모바일 게임 사용자가 게임 도중 게임을 벗어나지 않고 게임의 커뮤니티와 소통할 수 있도록 제공되는 인앱 커뮤니티 라이브러리입니다. 간단한 조작으로 프로젝트에 PLUG SDK를 추가할 수 있습니다.

이미 많은 게임에 적용돼 검증된 PLUG SDK를 사용하면 손쉽게 커뮤니케이션 기능을 게임 안에 넣을 수 있습니다.
 
![PLUG SDK](http://static.naver.net/m/cafe/glink/promotion/cafe_sdk_open/img_intro1_20151111.png)

## How To Get Started 

### 제휴 신청

PLUG SDK를 앱에 적용하려면 PLUG SDK 제휴를 신청해야 합니다. 제휴 양식을 작성해 PLUG 제휴 담당자에게 메일로 제휴를 신청합니다.

- [제휴 양식 다운로드](https://github.com/naver/cafe-sdk-android/raw/master/guide/alliance/%EB%84%A4%EC%9D%B4%EB%B2%84%EC%B9%B4%ED%8E%98SDK_%EC%A0%9C%ED%9C%B4%EC%96%91%EC%8B%9D_%EA%B2%8C%EC%9E%84%EC%82%AC%EB%AA%85_%EA%B2%8C%EC%9E%84%EB%AA%85_ver.2.0.0.xlsx)
- PLUG 제휴 담당자 메일 주소: <a href="mailto:dl_naverplugpartner@navercorp.com">dl_naverplugpartner@navercorp.com</a>

제휴 신청이 완료되면 PC의 카페 관리 페이지에서 네이버 PLUG SDK 콘텐츠를 관리할 수 있습니다. 

### 적용 가이드

- [PLUG 적용 가이드](https://github.com/naver/cafe-sdk-unity/wiki)
- [최신 버전 및 샘플 프로젝트 다운로드](https://github.com/naver/cafe-sdk-unity/archive/master.zip)

## Communication 
개발과 관련된 문의 사항은 PLUG 공식 카페를 사용합니다.

- [PLUG 공식 카페](http://cafe.naver.com/navercafesdk)
- [PLUG 공식 카페의 개발 문의 게시판](http://cafe.naver.com/ArticleList.nhn?search.clubid=28285034&search.menuid=13&search.boardtype=L)

## Usages 

### 1. 프로젝트 설정

PLUG SDK를 사용하려면 Unity에서 다음과 같이 개발 환경을 설정합니다.

1. Unity의 **Asset > Import package** 메뉴를 클릭해 적용하려는 Unity 게임 프로젝트에 PLUG SDK 패키지를 불러옵니다.
2. **NCSDK** 폴더의 **Sample** 폴더에 있는 **NCSDK.Prefabs**를 원하는 신으로 끌어다 놓아 PLUG SDK 실행 버튼을 생성합니다.

PLUG SDK 실행 버튼은 개발 편의를 위해 PLUG SDK가 기본으로 제공하는 버튼으로 직접 생성해도 됩니다. **SampleBehaviour.cs** 파일에 샘플 코드가 작성되어 있습니다. 

> 운영체제별 PLUG SDK에 관한 자세한 내용은 GitHub 저장소를 참고합니다.
> - [Android용 PLUG SDK의 GitHub 저장소](https://github.com/naver/cafe-sdk-android)
> - [iOS용 PLUG SDK의 GitHub 저장소](https://github.com/naver/cafe-sdk-ios)

### 2. 초기화

PLUG SDK가 지원하는 언어에 따라 다음과 같이 PLUG SDK를 초기화합니다.

#### 2.1 PLUG SDK 초기화(한국어만 지원 - 네이버 카페)

한국어만 지원하는 PLUG SDK를 초기화할 때는 초기화 정보를 설정하고, 스크립트 파일에서 외국어 지원과 관련된 항목을 주석으로 처리합니다.

**NCSDK** 폴더의 **Scripts** 폴더에 있는 **GLinkConfig.cs** 파일에 다음과 초기화 정보를 설정합니다.

- NaverLoginClientId: [네이버 아이디로 로그인 개발자 센터](https://developers.naver.com/apps/#/register?api=nvlogin)에서 애플리케이션을 등록하고 받은 클라이언트 아이디
- NaverLoginClientSecret: [네이버 아이디로 로그인 개발자 센터](https://developers.naver.com/apps/#/register?api=nvlogin)에서 애플리케이션을 등록하고 받은 클라이언트 시크릿
- CafeId: [네이버 카페](http://section.cafe.naver.com/)에서 카페를 개설하고 받은 카페 ID

**NCSDK** 폴더의 **Script** 폴더에 있는 운영체제별 스크립트 파일에서 외국어 지원과 관련된 항목을 주석으로 처리합니다.

Android용 스크립트 파일인 **GlinkAndroid.cs** 파일에서 다음 항목을 주석으로 처리합니다.

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

iOS용 스크립트 파일인 **GlinkiOS.cs** 파일에서 다음 항목을 주석으로 처리합니다.

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```
#### 2.2 PLUG SDK 초기화(외국어만 지원)

외국어만 지원하는 PLUG SDK를 초기화할 때는 초기화 정보를 설정하고, 스크립트 파일에서 주석으로 처리된 외국어 지원 관련된 항목의 주석을 해제합니다.

**NCSDK** 폴더의 **Scripts** 폴더에 있는 **GLinkConfig.cs** 파일에 다음과 같은 초기화 정보를 설정합니다.

- NeoIdConsumerKey: 커뮤니티를 개설하고 받은 컨슈머 키(Consumer Key)
- CommunityId: 커뮤니티를 개설하고 받은 커뮤니티 ID(Community ID)

**NCSDK** 폴더의 **Script** 폴더에 있는 운영체제별 스크립트 파일에서 주석으로 처리된 외국어 지원 항목의 주석을 해제합니다.

Android용 스크립트 파일인 **GlinkAndroid.cs** 파일에서 다음 항목의 주석을 해제합니다.

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

iOS용 스크립트 파일인 **GlinkiOS.cs** 파일에서 다음 항목의 주석을 해제합니다.

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId);
```

> **커뮤니티 ID와 컨슈머 키 확인**  
> 커뮤니티를 개설하고 받은 커뮤니티 ID와 컨슈머 키를 확인하려면 [커뮤니티 관리 페이지](http://g.cafe.naver.com/plugsample/manage/consumer)에 매니저 권한으로 접근하십시오.  
> 커뮤니티 관리 페이지에서 **Settings > Communities > In-App Community Settings** 메뉴를 선택하면 커뮤니티 ID와 컨슈머 키를 확인할 수 있습니다.  
> ![In-App Community Settings](https://plug.gitbooks.io/plug-sdk-android/content/assets/wiki-plug-setting.png)

### 3. PLUG SDK 시작

초기화가 완료되면 PLUG SDK를 실행합니다. 

> **GLink.cs 파일**  
> GLink.cs 파일은 PLUG SDK를 제어하는 메서드가 있는 스크립트 파일입니다. Unity용 PLUG SDK에서 사용할 수 있는 메서드에 관한 자세한 내용은 [PLUG SDK 상세 가이드](https://github.com/naver/cafe-sdk-unity/wiki)를 참고하십시오.

#### 3.1 executeHome() 메서드

executeHome() 메서드 PLUG를 시작하는 메서드입니다.

```objective-c
GLink.sharedInstance().executeHome();
```

#### 3.2 executeArticlePost() 메서드

executeArticlePost() 메서드는 게시판 글쓰기 화면을 연는 메서드입니다. 게시판 ID를 파라메터로 전달합니다.

```objective-c
GLink.sharedInstance().executeArticlePost("Content");
```

### 4. iOS 추가설정

iOS용 게임을 개발할 때에는 다음과 같은 사항을 추가로 설정해야 합니다.
#### 4.1 세로 모드 설정

세로 모드로 진행하는 게임을 개발할 때는 **NCSDK/Plugins/iOS** 폴더에 있는 **NCSDKUnityManager.mm** 파일에서 NCSDKManager.setOrientationIsLandscape 속성을 `NO`로 설정합니다.

```objective-c
- (void)setGLRootViewController {
    _mainViewcontroller = UnityGetGLViewController();
    
    [[NCSDKManager getSharedInstance] setParentViewController:_mainViewcontroller];
    [[NCSDKManager getSharedInstance] setNcSDKDelegate:self];
    [[NCSDKManager getSharedInstance] setOrientationIsLandscape:NO];
}

```

#### 4.2 .bundle 파일 링크

Unity 5.4.0f3 버전 이상에서는 iOS용 애플리케이션을 빌드할 때 .bundle 파일이 링크되지 않도록 설정돼 있습니다.
**NaverAuth.bundle** 파일과 **NaverCafeSDK.bundle** 파일을 링크하도록 다음과 같이 **Select for plugin**에서 **iOS**를 선택해야 합니다.
 
![NaverAuth.bundle 파일을 위한 설정](http://cafeptthumb3.phinf.naver.net/MjAxNjA5MjFfMTcw/MDAxNDc0NDM1ODY2NjMy.f6PEBXPB6yrmhY0HFRf0ans0jLaE4-kO9RqLmPCd1bcg.4LyBxzBvuulvTM8GZgDJH1-Mc9N9uR7Vzaf6CLaDlokg.PNG.cafesdksupport/12.png?type=w740)
![NaverCafeSDK.bundle 파일을 위한 설정](http://cafeptthumb2.phinf.naver.net/MjAxNjA5MjFfNjgg/MDAxNDc0NDM1ODY2ODA1.9ks28hm-J0Vws9UxNyw0VuNJXRj6LtlHjcpQQC7FIBEg.58cYn1IJ7HlreiT-9dczAnWNhyJAQemYF_H5HojizBEg.PNG.cafesdksupport/13.png?type=w740)

#### 4.3 Xcode 설정

XCode에서 다음과 같이 개발 환경을 설정합니다.

1. **Build Settings**의 **Other Linker Flags**에 **-ObjC** 옵션을 추가합니다.
2. **Build Phases**의 **Link Binary With Libraries**에 다음 라이브러리를 추가합니다. 추가한 라이브러리의 **Status**는 **Required**로 설정합니다.
    - MobileCoreServices.framework
    - SystemConfiguration.framework
    - MediaPlayer.framework
    - AVFoundation.framework
    - CoreMedia.framework
    - AssetsLibrary.framework
    - Security.framework
    - ImageIO.framework
    - QuartzCore.framework
    - ReplayKit.framework(라이브러리의 **Status**를 **Optional**로 설정합니다)
    - Webkit.framework

### 5. LIVE

PLUG SDK는 사용자가 게임 화면을 실시간 스트리밍 할 수 있는 기능을 제공합니다.

[라이브 상세 가이드(Android)](https://plug.gitbooks.io/plug-sdk-android/content/ko/[%ED%95%9C]-%ED%94%8C%EB%9F%AC%EA%B7%B8-%EB%9D%BC%EC%9D%B4%EB%B8%8C.html)

[라이브 상세 가이드(iOS)](https://plug.gitbooks.io/plug-sdk-ios/content/ko/[%ED%95%9C]-%ED%94%8C%EB%9F%AC%EA%B7%B8-%EB%9D%BC%EC%9D%B4%EB%B8%8C.html)

![LIVE](https://cafeptthumb-phinf.pstatic.net/MjAxNzExMTRfMTE3/MDAxNTEwNjQ2MTk3MjM1.7ss4wFV1nGd0Q_Lk8jpQ_HV2pJv_MR_w7FbHg74NSHog.Tc4f5bQ7IWR8Wbnc5xGVVeTPK1lZ7NyyWcMdA4li1qUg.PNG.cafesdksupport/02.PNG?type=w740)


## Files and Folders

|폴더 및 파일 이름	|설명|
|---|---|
|guide/	|PLUG SDK 적용 가이드가 있는 폴더|
|lib/	|Unity용 PLUG SDK 라이브러리 파일이 있는 폴더|
|sample/	|샘플 프로젝트가 있는 폴더|
|LICENSE	|라이선스 파일| 
|README.md	|리드미 파일|

## Dependent Libraries

PLUG SDK를 사용하려면 다음 라이브러리를 프로젝트에 추가해 함께 빌드해야 합니다. 라이브러리는 샘플 프로젝트에 포함돼 있습니다.

### Android용 라이브러리

- Android Support Library v4
- [네이버 아이디 로그인](https://nid.naver.com/devcenter/docs.nhn?menu=Android)
- [NAVER Volleyer](http://mvnrepository.com/artifact/com.navercorp.volleyextensions/volleyer)(2.0.1 버전 사용 중)
- [Volley](http://mvnrepository.com/artifact/com.mcxiaoke.volley/library/)(1.0.2 버전 사용 중)
- [Google Gson](http://mvnrepository.com/artifact/com.google.code.gson/gson)(2.3.1 버전 사용 중)
- [Glide](http://mvnrepository.com/artifact/com.github.bumptech.glide/glide)(3.6.1 버전 사용 중)
- [Otto](http://mvnrepository.com/artifact/com.squareup/otto)(1.3.8 버전 사용 중)
- hmac(2.3.1 버전 사용중)

### iOS용 라이브러리

- [네이버 아이디 로그인](https://nid.naver.com/devcenter/docs.nhn?menu=IOS)(4.0.7 버전)
- [AFNetworking](https://github.com/AFNetworking/AFNetworking)(3.1.0 버전 )

> AFNetworking 2.x 버전과 3.x 버전 모두 사용할 수 있습니다. PLUG SDK 테스트는 AFNetworking 3.1.0 버전으로 진행했습니다.

- [SDWebImage](https://github.com/rs/SDWebImage)(3.8.2 버전)
- [FLAnimatedImage](https://github.com/Flipboard/FLAnimatedImage)(1.0.12 버전)
- ApiGateway-1.5.0 
- KaleidoCore.framework

## License 

PLUG SDK의 저작권은 네이버(주)에 있습니다.

```
=======
- Android Support Library v4
- Android Support Custom Tabs
- Android Support RecyclerView
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

Copyright 2015 NAVER Corp.
All rights reserved.

Unauthorized use, modification and redistribution of this software are strongly prohibited.
```

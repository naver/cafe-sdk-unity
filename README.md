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


## 프로젝트 설정
 적용하려는 유니티 게임프로젝트에 Unity Package 를 Import 한다.

### PLUG 실행버튼 생성
 NCSDK / Sample / NCSDK.Prefabs 을 원하는 Scene 에 Drag & Drop 한다.
 PLUG 실행버튼이 생성되며 SampleBehaviour.cs 에 샘플코드가 작성되어 있다.
 ( 개발 편의를 위한 버튼으로 직접생성해도 무방하다.)


## Initialize

### 한국 채널(네이버 카페)

[네이버 아이디로 로그인](https://developers.naver.com/products/login/api)에 애플리케이션을 등록하고 받은 ClientId, ClientSecret 값을 세팅한다.

[네이버 카페를 개설](http://section.cafe.naver.com/)하고 얻은 카페 ID를 세팅한다.

[네이버 아이디로 로그인](https://developers.naver.com/products/login/api)에 애플리케이션 설정에 등록한 iOS URL Scheme을 세팅한다.

NCSDK / Scripts / GLinkConfig.cs 에서 발급받은 정보들을 세팅한다.

국내카페만 이용할 경우 

 NaverLoginClientId
 NaverLoginClientSecret
 CafeId

3개의 정보만 필요하다.
 
#### Android
 NCSDK / Script / GlinkAndroid.cs 에서

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId, GLinkLanguage.ENGLISH);
```

 항목이 있으면 주석처리한다.


#### iOS
 NCSDK / Script / GlinkiOS.cs 에서

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId, GLinkConfig.Language);
```

 항목이 있으면 주석처리한다.




### 글로벌 채널 
[제휴 신청](https://github.com/naver/cafe-sdk-ios/wiki/%5B%ED%95%9C%5D%20%EA%B8%80%EB%A1%9C%EB%B2%8C%20%EB%84%A4%EC%9D%B4%EB%B2%84%20%EC%B9%B4%ED%8E%98%20%EC%82%AC%EC%9A%A9)을 통해 받은 ConsumerKey, communityId 값을 세팅한다.

NCSDK / Scripts / GLinkConfig.cs 에서 발급받은 정보들을 세팅한다.

글로벌 채널을 이용할 경우  

NeoIdConsumerKey
CommunityId
Language

3개의 정보에 대해 입력한다.


#### Android
NCSDK / Script / GlinkAndroid.cs 에서

```objective-c
glinkClass.CallStatic ("initGlobal", currentActivity, GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId, GLinkLanguage.ENGLISH);
```

항목을 주석해체한다.


#### iOS
NCSDK / Script / GlinkiOS.cs 에서

```objective-c
_InitGLinkForGlobal(GLinkConfig.NeoIdConsumerKey, GLinkConfig.CommunityId, GLinkConfig.Language);
```

항목을 주석해체한다.



### GLink.cs
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
GLink.sharedInstance().executeArticlePost(1, "Subject", "Content");

```

#### executeArticlePostWithImage

이미지를 첨부한 상태로 PLUG 글쓰기 화면을 실행한다.
첨부될 이미지의 path를 파라메터로 넘긴다.

```objective-c
GLink.sharedInstance().executeArticlePostWithImage(1, "Subject", "Content", filePath);

```


#### setUseWidgetVideoRecord

PLUG 위젯에 녹화 버튼 노출 여부를 설정한다. (iOS 9.0 이상)


```objective-c
GLink.sharedInstance().setUseWidgetVideoRecord(true);

```

v.2.2.0
-------------
- Unity Package 2.3.0 에는 다음과 같은 NaverCafeSDK 를 포함하고 있습니다.

NaverCafeSDK For Android 2.3.0

NaverCafeSDK For iOS 2.3.0


폴더 구조
-------------

file      | 설명 		
---			| ---		
guide/			| 가이드 문서 및 CafeSDK 설명
lib/		 	| NaverCafeSDK 유니티용 패키지
LICENSE     | 라이선스 파일
README.md   | readme 파일


의존 라이브러리
-------------
[Android]

- [네이버 아이디 로그인](https://nid.naver.com/devcenter/docs.nhn?menu=Android)
- android support library v4
- [naver volleyer](http://mvnrepository.com/artifact/com.navercorp.volleyextensions/volleyer)   (2.0.1 사용 중)
- [volley](http://mvnrepository.com/artifact/com.mcxiaoke.volley/library/) (1.0.2사용 중)
- [google gson](http://mvnrepository.com/artifact/com.google.code.gson/gson)  (2.3.1 사용 중)
- [glide](http://mvnrepository.com/artifact/com.github.bumptech.glide/glide)  (3.6.1 사용 중)
- [otto](http://mvnrepository.com/artifact/com.squareup/otto)  (1.3.8 사용 중)
- hmac (2.3.1 사용중)


[iOS]

- [네이버 아이디 로그인-4.0.7](https://nid.naver.com/devcenter/docs.nhn?menu=IOS)
- [AFNetworking](https://github.com/AFNetworking/AFNetworking)
<br>2.x 사용 가능하며 2.6.3에서 테스트 진행했습니다.
- [SDWebImage-3.8.2](https://github.com/rs/SDWebImage)
- [FLAnimatedImage-1.0.12](https://github.com/Flipboard/FLAnimatedImage)
- ApiGateway-1.5.0

라이선스
-------------
NAVER Cafe SDK for Unity

Copyright 2015 NAVER Corp. All rights reserved.

Unauthorized use, modification and redistribution of this software are strongly prohibited.

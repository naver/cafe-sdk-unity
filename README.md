# NaverCafeSDK Unity Package

> 본 저장소는 Cafe SDK를 사용하기위한 library 및 관련 파일들을 포함하고 있습니다.

Cafe SDK에 대하여 자세히 알고싶으시면 [네이버 CafeSDK 공식카페](http://cafe.naver.com/navercafesdk)를 참조해 주세요.




v.1.0.0
-------------
 NaverCafeSDK For Android 1.0.0
 
 NaverCafeSDK For iOS 1.0.0


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

1. [네이버 아이디 로그인](https://nid.naver.com/devcenter/docs.nhn?menu=Android)
2. android support library v13
3. [naver volleyer](http://mvnrepository.com/artifact/com.navercorp.volleyextensions/volleyer)   (2.0.1 사용 중)
4. [volley](http://mvnrepository.com/artifact/com.mcxiaoke.volley/library/) (1.0.2사용 중)
5. [google gson](http://mvnrepository.com/artifact/com.google.code.gson/gson)  (2.3.1 사용 중)
6. [glide](http://mvnrepository.com/artifact/com.github.bumptech.glide/glide)  (3.6.1 사용 중)
7. [otto](http://mvnrepository.com/artifact/com.squareup/otto)  (1.3.8 사용 중)
8. [VierwPagerIndicator](http://mvnrepository.com/artifact/com.viewpagerindicator/library) (2.4.1 사용 중) 
<br>**ViewPagerIndicator의 경우 jar가 아닌 라이브러리 형태로 배포되고 있습니다. aar or apklib or zip으로 받아 개발툴에 맞는 라이브러리를 사용하시면 됩니다.
<br>**aar (https://bintray.com/populov/maven/com.viewpagerindicator:library)

[iOS]

1. [네이버 아이디 로그인-4.1.4](https://nid.naver.com/devcenter/docs.nhn?menu=IOS)
2. [AFNetworking](https://github.com/AFNetworking/AFNetworking)(UIImageView+AFNetworking)
<br>1.x ~ 2.x 모두 사용 가능하며 2.6.1에서 테스트 진행했습니다.

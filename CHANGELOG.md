v.3.1.1
-------------
### fixed
1. 라이브/VOD 시청 콜백 오류 수정
2. 네이버 프로필 API 오류 수정 (NCNaverLoginManager.getNaverIdProfile) (iOS)


v.3.1.0
-------------
### updated
1. 라이브 기능 추가 (NaverCafeSDKLive.framework)
2. 디자인 변경
3. 인기글 적용
4. 글로벌 커뮤니티 지역별 관리 기능 추가 (http://cafe.naver.com/navercafesdk/1550)
5. 필독공지 노출 개수 증가 (3개)
6. minSDK 16에서 17로 변경 (안드로이드)
7. @3x 이미지 적용 (iOS)

### fixed
1. Eclpise 지원 중단 (구글의 ANT빌드 지원 중단) (안드로이드)
2. Android Oreo 대응 (안드로이드)
3. Android 5.0 기기에서 EditText 글자 삭제 시 2개씩 지워지는 이슈 수정 (안드로이드)
4. 기타 알려진 이슈 수정 (안드로이드)
5. 위젯 위치 수정 (iPhone X Notch 회피) (iOS)
6. 안드로이드 ANT 빌드 지원 중단으로 unity4 빌드 지원 중단. (안드로이드)
    - unity4의 경우 android studio로 export 후에 native로 적용하여 빌드 부탁드립니다.


v.2.5.4
-------------
### fixed
1. XCode 9 & iPhone X 대응


v.2.5.4
-------------
### fixed
1. Android 2.5.2 업데이트
2. Android 7.1 이상일 때 접기 버그 수정
3. Android customtab 구글 호환성 수정
4. Android 닫기 텍스트 번역 누락 반영 

v.2.5.2
-------------
### updated
1. iOS 11 대응

v.2.5.0
-------------
### updated
1. 본분/댓글 번역기능 추가
2. 지원 언어 추가 (브라질, 포르투갈, 이탈리아, 멕시코, 터키, 베트남)
3. 녹화 인터페이스 제공
4. 네이버 로그인 라이브러리 사용시 최초 세팅한 URLScheme, delegate 갱신하도록 변경 (iOS)

v.2.4.5
-------------
### updated
1. 중국어 번체/간체 오류 수정

v.2.4.3
-------------
### updated
1. 러이아어 추가
2. 동영상 업로드 시 크기에 따른 압축 품질 변경 로직 추가 (iOS)

v.2.4.2
-------------
### fixed
1. Comment 창이 두번째에는 올라오지 않는 이슈 수정 (안드로이드)

v.2.4.1
-------------
### fixed
1. plug 종료 시에 softkey가 내려가지 않는 이슈 수정 (안드로이드)

v.2.4.0
-------------
### updated
1. Pinned 공지사항 기능 추가
2. 댓글 미리보기 추가
3. WKWebView 적용 (iOS)
4. GLReachability 클래스명 변경 (iOS)
5. 구글 로그인 WebView에서 크롬으로 처리 (안드로이드)
* 관련 이슈: https://developers.googleblog.com/2016/08/modernizing-oauth-interactions-in-native-apps.html?m=1
6. '스마트폰 앱 접근권한에 대한 정보통신망법 시행령'에 따른 권한 획득시 사용처 고지 (안드로이드)
7. 위젯 스크린샷 버튼 on/off 추가
8. 5. SDK 홈 배너 클릭시 발생하는 이벤트를 delegate로도 처리되도록 추가 (ncSDKAppSchemeBanner:) (iOS)
* 기존에는 AppDelegate openURL을 호출

v.2.3.2
-------------
### fixed
1. 위젯 사라지는 현상 수정
2. 댓글 델리게이트 호출 안되는 현상 수정

v.2.3.1
-------------
### fixed
1. 알려진 버그 수정


v.2.3.0
-------------
### updated
1. 동영상/이미지 모아보기 기능 추가
2. 접기/닫기 기능 개선
3. 위젯 기능 개편
4. 비공개 카페 테스트 가능하도록 변경
5. 스페인어/프랑스어/독일어/인도네시아어 추가
6. 네이버 로그인 관련 API 추가
7. API 변경
    1) 글쓰기 관련 파람 변경
8. API 추가
    1) 위젯 위치 관련 API

### fixed
1. 알려진 이슈 수정
v.2.2.0
-------------
####updated####
1. PLUG에 테마 color 적용 가능
2. PLUG 접기 기능 추가
3. 프로필 사진 업데이트 기능 추가
4. default channel이 device 지정 언어에 따라가도록 변경

v.2.1.0
-------------
####updated
1. 세로모드 지원

v.2.0.1
-------------
####fixed iOS####
- 채널 정보 조회하는 api 추가. 
  (NSString *)currentCountry; 
- 한국어로 실행했을때 채널 변경 버튼이 노출되지 않는 이슈 수정 

####fixed Android####
- 채널 정보 설정하는 api 추가. 
  Glink#setCafeLangCode(String cafeLangCode);
- 채널 정보 조회하는 api 추가.
  Glink#getCafeLangCode();
- 국내 카페만 설정할 경우 크래쉬 발생하는 이슈 가드 처리.


v.2.0.0
-------------
####updated
1. 영어, 중국어, 일본어, 태국어 채널 지원.

####fixed####
1. iOS 10 관련 이슈 수정.

####issue####
1. 세로모드 2.0.1에서 지원 예정.
2. 언어 설정 중국어인 경우 위젯 동영상 녹화 기능 안되는 이슈.


v.1.7.0
-------------
####updated
1. 위젯을 통하여 동영상 녹확 기능을 제공합니다.
2. 콜백 API 개선 (투표 완료 콜백을 제공합니다)


v.1.6.0
-------------
####updated
1. 카페 위젯을 지원하여 게임내 어디서든 카페를 이용 할 수 있습니다.


####fixed
1. 게시글 간 이동이 자연스럽게 보이도록 수정


v.1.5.0
-------------
####updated
1. 타인의 프로필을 열람할 수 있습니다.

####fixed
1. 알려진 버그 수정


v.1.4.0
-------------
####updated
1. 프로필 화면에서 작성한 글, 댓글단 글, 좋아요 한 글을 볼 수 있습니다.
2. 카페 SDK 로고를 터치하면 카페 SDK 버전을 확인 할 수 있습니다
3. 글쓰기, 댓글쓰기, 카페가입 리스너를 등록하여 이벤트를 받아 사용할 수 있습니다.

####fixed
1. 알려진 버그 수정


v.1.3.0
-------------
####updated
1. 이미지를 클릭하여 크게 보기를 지원합니다.
2. 특정 게시판으로 바로 이동 할 수 있는 기능을 지원합니다.
3. 투명도 조절바를 on/off 할 수가 있습니다.

####fixed
1. 알려진 버그 수정


v.1.2.0
-------------
####updated
1. 투명도 조절 지원
2. 최신글 목록 보기 지원
3. 게시글 바로가기 기능 지원


####fixed
1. 알려진 버그 수정


v.1.1.0
-------------
###updated
1. 세로형 app 지원. (세로형 UI가 새로 적용되었습니다)
2. 전체 게시판 검색 지원.
3. 카페SDK 시작 및 종료 리스너 추가 
    (setOnSdkStartedListener() 와 setOnSdkStoppedListener() 를 통하여 제공)


v.1.0.0
-------------
 NaverCafeSDK 오픈

//
//  GLContainer.h
//  glink_sdk
//
//  Created by Gyeonghwan on 2015. 10. 5..
//  Copyright (c) 2015년 Naver. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, GLArticlePostType) {
    kGLArticlePostTypeImage = 1,
    kGLArticlePostTypeVideo = 2,
};
typedef NS_ENUM(NSUInteger, GLTabType) {
    kGLTabTypeHome = 0,
    kGLTabTypeNotice = 1,
    kGLTabTypeEvent = 2,
    kGLTabTypeMenuList = 3,
    kGLTabTypeProfile = 4,
};

@protocol NCSDKManagerDelegate;

@interface NCSDKManager : NSObject

/*
 네이버 카페 NCSDKManagerDelegate
 */
@property (nonatomic, weak) id<NCSDKManagerDelegate> ncSDKDelegate;
/*
 네이버 카페를 띄울 ViewController
 */
@property (nonatomic, weak) id parentViewController;

/*
 NCSDKManager 싱글톤 객체
 */
+ (NCSDKManager *)getSharedInstance;

/*
 NCSDKManager 객체 삭제
 */
+ (void)resetSharedInstance;

- (void)setOrientationIsLandscape:(BOOL)orientationIsLandscape;

/*
 네이버 카페 Root ViewController
 */
- (id)navercafeRootViewController;

/*
 네이버 카페 실행전 
 생성된 네아로 ClientId, ClientSecret, 카페 ID 세팅
 */
- (void)setNaverLoginClientId:(NSString *)naverLoginClientId
       naverLoginClientSecret:(NSString *)naverLoginClientSecret
                       cafeId:(NSInteger)cafeId;

/*
 네이버ID와 게임사용자ID 연동을 위해 사용자 게임사용자ID 세팅
 */
- (void)syncGameUserId:(NSString *)gameUserId;
/*
 투명도 조절 기능 제거
 */
- (void)disableTransparentSlider:(BOOL)disable;

#pragma mark - present
/*
 네이버 카페 Root ViewController에 다른 ViewController를 실행
 */
- (void)presentViewController:(id)viewController;

/*
 네이버 카페 메인 실행
 */
- (void)presentMainViewController;

/*
 네이버 카페 메인 종료
 */
- (void)dismissMainViewController;

/*
 네이버 카페 메인 TabIndex로 실행
 */
- (void)presentMainViewControllerWithTabIndex:(NSUInteger)tabIndex;

/*
 네이버 카페 게시글로 이동, 게시글 ID
 */
- (void)presentMainViewControllerWithArticleId:(NSUInteger)articleId;

/*
 네이버 카페 글쓰기 화면 실행
 */
- (void)presentArticlePostViewControllerWithMenuId:(NSInteger)menuId
                                           subject:(NSString *)subject
                                           content:(NSString *)content;
/*
 네이버 카페 글쓰기 화면 실행
 */
- (void)presentArticlePostViewControllerWithType:(GLArticlePostType)type
                                          menuId:(NSInteger)menuId
                                         subject:(NSString *)subject
                                         content:(NSString *)content
                                        filePath:(NSString *)filePath;

/*
 네이버 카페 게시글 리스트 실행
 */
- (void)presentArticleListViewControllerWithMenuId:(NSInteger)menuId;

#pragma mark - dismiss
/*
 네이버 카페 ViewController에 실행된 다른 ViewController 제거
 */
- (void)dismissViewController:(id)viewController;

/*
 네이버 카페 ViewController에 제일 상단 ViewController 제거
 */
- (void)dismissTopViewController;

/*
 위젯실행
 */
- (void)startWidget;
- (void)stopWidget;

@property (nonatomic, assign) BOOL showWidgetWhenUnloadSDK;
@property (nonatomic, assign) BOOL useWidgetVideoRecord;

/*
 테스트용
 */
- (void)showToast:(NSString *)str;
- (void)presentEtc;
@end

@protocol NCSDKManagerDelegate <NSObject>
@optional
/*
 네이버 카페 실행 콜백
 */
- (void)ncSDKViewDidLoad;
/*
 네이버 카페 종료 콜백
 */
- (void)ncSDKViewDidUnLoad;

- (void)ncSDKJoinedCafeMember;
- (void)ncSDKPostedArticleAtMenu:(NSInteger)menuId
                attachImageCount:(NSInteger)imageCount
                attachVideoCount:(NSInteger)videoCount;
- (void)ncSDKPostedCommentAtArticle:(NSInteger)articleId;
- (void)ncSDKRequestScreenShot;
- (void)ncSDKDidVoteAtArticle:(NSInteger)articleId;

- (void)ncSDKWidgetPostArticleWithImage;
- (void)ncSDKWidgetSuccessVideoRecord;

@end

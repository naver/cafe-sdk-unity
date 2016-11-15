//
//  GLContainer.h
//  glink_sdk
//
//  Created by Gyeonghwan on 2015. 10. 5..
//  Copyright (c) 2015년 Naver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NCSDKLanguage.h"

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

#pragma mark - SDK property
@property (nonatomic, weak) id<NCSDKManagerDelegate> ncSDKDelegate;
@property (nonatomic, weak) id parentViewController;
@property (nonatomic, assign) BOOL orientationIsLandscape;

#pragma mark - Widget property
@property (nonatomic, assign) BOOL showWidgetWhenUnloadSDK;
@property (nonatomic, assign) BOOL useWidgetVideoRecord;

#pragma mark - class
+ (NCSDKManager *)getSharedInstance;
+ (void)clearSharedInstance;

#pragma mark - setting
/*
 (국내) 네이버 카페 실행정보 설정
 1. 네아로 ClientId
 2. 네아로 ClientSecret
 3. 카페 ID 세팅
 */
- (void)setNaverLoginClientId:(NSString *)naverLoginClientId
       naverLoginClientSecret:(NSString *)naverLoginClientSecret
                       cafeId:(NSInteger)cafeId;

/*
 (해외) PLUG 실행전
  1. neoId ConsumerKey 
  2. 카페 ID
 */
- (void)setNeoIdConsumerKey:(NSString *)neoIdConsumerKey
                 globalCafeId:(NSInteger)cafeId;

/*
    국가 설정
 */
- (void)setCountry:(NSString *)aCountry;
- (NSString *)currentCountry;
- (void)syncGameUserId:(NSString *)gameUserId;

- (void)disableTransparentSlider:(BOOL)disable;

#pragma mark - Start SDK function
/*
 Start SDK
 */
- (void)presentMainViewController;

/*
 Dismiss SDK
 */
- (void)dismissMainViewController;

/*
 Start With Tab Index
 */
- (void)presentMainViewControllerWithTabIndex:(NSUInteger)tabIndex;

/*
 Start With Article
 */
- (void)presentMainViewControllerWithArticleId:(NSUInteger)articleId;

/*
 Start With Article Post
 */
- (void)presentArticlePostViewControllerWithMenuId:(NSInteger)menuId
                                           subject:(NSString *)subject
                                           content:(NSString *)content;
/*
 Start With Article Post
 */
- (void)presentArticlePostViewControllerWithType:(GLArticlePostType)type
                                          menuId:(NSInteger)menuId
                                         subject:(NSString *)subject
                                         content:(NSString *)content
                                        filePath:(NSString *)filePath;

/*
 Start With Article List
 */
- (void)presentArticleListViewControllerWithMenuId:(NSInteger)menuId;

#pragma mark - Widget function
/*
 Start Widget
 */
- (void)startWidget;
/*
 End Widget
 */
- (void)stopWidget;



#pragma mark - private function
- (id)navercafeRootViewController;
- (void)dismissViewController:(id)viewController;
- (void)dismissTopViewController;
- (void)presentViewController:(id)viewController;
- (void)showToast:(NSString *)str;
- (void)presentEtc;
@end

@protocol NCSDKManagerDelegate <NSObject>
@optional
/*
 Started SDK
 */
- (void)ncSDKViewDidLoad;
/*
 Ended SDK
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

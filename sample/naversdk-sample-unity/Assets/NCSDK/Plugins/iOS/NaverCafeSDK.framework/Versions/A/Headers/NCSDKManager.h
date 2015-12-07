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
@interface NCSDKManager : NSObject

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
 네이버ID와 게임사용자ID 연동을 위해 사용자 게임사용자ID 세팅, fieldName 기본값:게임ID
 */
- (void)setGameUserId:(NSString *)gameUserId fieldName:(NSString *)fieldName;

/*
 네이버 카페 Root ViewController에 다른 ViewController를 실행
 */
- (void)presentViewController:(id)viewController;

/*
 네이버 카페 메인 실행
 */
- (void)presentMainViewController;

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
 네이버 카페 ViewController에 실행된 다른 ViewController 제거
 */
- (void)dismissViewController:(id)viewController;

/*
 네이버 카페 ViewController에 제일 상단 ViewController 제거
 */
- (void)dismissTopViewController;
@end

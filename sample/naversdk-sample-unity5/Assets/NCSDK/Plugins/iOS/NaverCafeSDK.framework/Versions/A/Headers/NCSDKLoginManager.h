//
//  GLLoginViewController.h
//  glink_sdk
//
//  Created by Gyeonghwan on 2015. 9. 3..
//  Copyright (c) 2015년 Naver. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NCSDKLoginManager : NSObject
/*
 로그인 웹뷰를 띄울 ViewController
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/*
 NCSDKLoginManager 싱글톤 객체
 */
+ (NCSDKLoginManager *)getSharedInstance;
+ (void)resetSharedInstance;

/*
 AppDelegate URL Scheme 처리
 */
- (BOOL)finishNaverLoginWithURL:(NSURL *)url;

/*
 네아로 로그인 요청 및 콜백
 */
- (void)loginWithFinish:(void (^)(BOOL successACToken))finish;
- (void)loginWithFinish:(void (^)(BOOL successACToken))finish
                failure:(void (^)(NSError *error))failure;


/*
 네아로 로그아웃 요청
 */
- (void)logout;//delete local accesstoken

/*
 네아로 로그인 확인 및 토큰 만료시 갱신 및 콜백
 */
- (void)isLoginWithFinish:(void (^)(BOOL successACToken))finish;

/*
 네아로 토큰 갱신 및 콜백
 */
- (void)refreshAccessTokenWithFinish:(void (^)(BOOL successACToken))finish;

/*
 네아로 토큰 갱신
 */
- (void)refreshAccessToken;

/*
 네아로 인증 서버로 부터 삭제
 */
- (void)requestDeleteToken;//delete server authorization

/*
 네아로 토큰 확인
 */
- (BOOL)isValidAccessTokenExpireTimeNow;

/*
 네아로 토큰
 */
- (NSString *)accessToken;

/*
 네아로 토큰 만료 시간
 */
- (NSString *)accessTokenExpireTime;

/*
 네아로 로그인 인앱 사용 여부
 */
- (void)setIsInAppOauthEnable:(BOOL)enable;

/*
 네아로 로그인 네이버앱 사용 여부
 */
- (void)setIsNaverAppOauthEnable:(BOOL)enable;
@end

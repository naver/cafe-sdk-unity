//
//  GLLoginViewController.h
//  glink_sdk
//
//  Created by Gyeonghwan on 2015. 9. 3..
//  Copyright (c) 2015년 Naver. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NCSDKLoginManagerDelegate;

@interface NCSDKLoginManager : NSObject
/*
 로그인 웹뷰를 띄울 ViewController
 */
@property (nonatomic, weak) UIViewController *rootViewController;

+ (NCSDKLoginManager *)getSharedInstance;
- (void)initLoginManager;

#pragma mark -
#pragma mark Login
#pragma mark -

/*
 Request Login
 */
- (void)loginWithFinish:(void (^)(void))finish;
- (void)loginWithFinish:(void (^)(void))finish
                failure:(void (^)(NSError *error))failure;


/*
 Request Logout
 */
- (void)logout;//delete local accesstoken

/*
 Check Login With Refresh Token
 */
- (void)isLoginWithFinish:(void (^)(BOOL successACToken))finish
                  failure:(void (^)(NSError *error))failure;



#pragma mark -
#pragma mark Naver Login
#pragma mark -

/*
 AppDelegate URL Scheme
 */
- (BOOL)finishNaverLoginWithURL:(NSURL *)url;

/*
 Refresh Token in Naver Login with Call back
 */
- (void)refreshAccessTokenWithFinish:(void (^)(void))finish
                             failure:(void (^)(NSError *error))failure;

/*
 Refresh Token in Naver Login
 */
- (void)refreshAccessToken;

/*
 Delete Token in Naver Login
 */
- (void)requestDeleteToken;//delete server authorization

/*
 Check Naver Login Token
 */
- (BOOL)isValidAccessTokenExpireTimeNow;

/*
 Naver Login Token
 */
- (NSString *)accessToken;

- (NSString *)accessTokenExpireTime;

/*
 Use Inapp Login(Naver Login)
 */
- (void)setIsInAppOauthEnable:(BOOL)enable;

/*
 Use Naver App Login(Naver Login)
 */
- (void)setIsNaverAppOauthEnable:(BOOL)enable;

/*
 URLScheme
 */
- (void)setNaverLoginURLScheme:(NSString *)urlScheme;

@end

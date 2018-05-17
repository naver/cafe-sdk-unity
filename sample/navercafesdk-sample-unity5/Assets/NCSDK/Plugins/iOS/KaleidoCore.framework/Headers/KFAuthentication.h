//
//  KFAuthentication.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 3..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFAuthenticationType.h"

/**
 * Authentication is an interface which provides { @link KFClientManager } with authentication information.
 */
EXPORT
@interface KFAuthentication : NSObject

/**
 * Supports Authentication type of Kaleido.
 */
@property(atomic, strong) KFAuthenticationType * _Nonnull type;

/**
 * Creates NeoId authentication instance
 *
 * @param aServiceId    Service ID is required by NeoId authentication
 * @param aServiceKey   Service Key is required by NeoId authentication
 * @param aConsumerKey  Consumer Key is required by NeoId authentication
 * @param aAccessToken  Access Token is required by NeoId authentication
 * @param onFailure     A callback to notify user about authentication failure or access token expiration
 *
 * @returns KFAuthenticationResult that results for authentication.
 */
+ (nullable instancetype)authenticationWithNeoId:(nullable NSString *)aServiceId serviceKey:(nullable NSString *)aServiceKey consumerKey:(nullable NSString *)aConsumerKey accessToken:(nullable NSString *)aAccessToken failure:(nullable void (^)(KFAuthenticationResult))onFailure;

/**
 * Creates NaverOAuth authentication instance
 *
 * @param aAccessToken  Access Token obtained from NaverOAuth authentication process
 * @param onFailure     A callback to notify user about authentication failure
 *
 * @returns KFAuthenticationResult that results for authentication.
 */
+ (nullable instancetype)authenticationWithNaverOAuth:(nullable NSString *)aAccessToken failure:(nullable void (^)(KFAuthenticationResult))onFailure;

/**
 * Creates NaverCookie authentication instance
 *
 * @param aCookieAuth     NID_AUT obtained from result of Naver login
 * @param aCookieSession  NID_SES obtained from result of Naver login
 * @param onFailure       A callback to notify user about authentication failure
 *
 * @returns KFAuthenticationResult that results for authentication.
 */
+ (nullable instancetype)authenticationWithNaverCookie:(nullable NSString *)aCookieAuth cookieSession:(nullable NSString *)aCookieSession failure:(nullable void (^)(KFAuthenticationResult))onFailure;

/**
 * Creates anonymously working NeoId authentication instance
 */
+ (nonnull instancetype)authenticationWithNeoIdForAnonymous;

/**
 * Creates anonymously working NaverCookie authentication instance
 */
+ (nullable instancetype)authenticationWithNaverCookieForAnonymous;

/**
 * Creates anonymously working NaverOAuth authentication instance
 */
+ (nullable instancetype)authenticationWithNaverOAuthForAnonymous;

@end

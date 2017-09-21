//
//  KFNaverCookie.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 3..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFAuthenticationType.h"

EXPORT
@interface KFNaverCookie : KFAuthenticationType

/**
 * Properties for NAVER Cookie.
 */
@property(nonatomic, strong) NSString *cookieAuth;
@property(nonatomic, strong) NSString *cookieSession;

/**
 * Creates NaverCookie authentication type instance
 *
 * @param aCookieAuth     NID_AUT obtained from result of Naver login
 * @param aCookieSession  NID_SES obtained from result of Naver login
 * @param aOnFailure       A callback to notify user about authentication failure
 *
 * @returns KFNaverCookie that represents NaverCookie authentication type
 */
- (instancetype)initWithAuthProperties: (NSString*)aCookieAuth cookieSession:(NSString*)aCookieSession failure:(onFailureBlock)aOnFailure;

@end

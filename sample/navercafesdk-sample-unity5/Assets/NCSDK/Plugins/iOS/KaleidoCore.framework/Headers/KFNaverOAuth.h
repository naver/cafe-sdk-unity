//
//  KFNaverOAuth.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 3..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFAuthenticationType.h"

EXPORT
@interface KFNaverOAuth : KFAuthenticationType

/**
 * Properties for NAVER OAuth.
 */
@property(nonatomic, strong) NSString *oAuthAccessToken;

/**
 * Creates NaverOAuth authentication type instance
 *
 * @param aOAuthAccessToken   Access Token obtained from NaverOAuth authentication process
 * @param aOnFailure      A callback to notify user about authentication failure
 *
 * @returns KFNaverOAuth that represents NaverOAuth authentication type
 */
- (instancetype)initWithAuthProperties: (NSString*)aOAuthAccessToken failure:(onFailureBlock)aOnFailure;

@end

//
//  KFNeoID.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 3..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFAuthenticationType.h"

EXPORT
@interface KFNeoID : KFAuthenticationType

/**
 * Properties for NEOID.
 */
@property(nonatomic, strong) NSString *serviceId;
@property(nonatomic, strong) NSString *serviceKey;
@property(nonatomic, strong) NSString *consumerKey;
@property(nonatomic, strong) NSString *accessToken;

/**
 * Creates NeoId authentication type instance
 *
 * @param aServiceId    Service ID is required by NeoId authentication
 * @param aServiceKey   Service Key is required by NeoId authentication
 * @param aConsumerKey  Consumer Key is required by NeoId authentication
 * @param aAccessToken  Access Token is required by NeoId authentication
 * @param aOnFailure     A callback to notify user about authentication failure or access token expiration
 *
 * @returns KFNeoID    that represents NeoId authentication type
 */
- (instancetype)initWithAuthProperties: (NSString*)aServiceId serviceKey:(NSString*)aServiceKey consumerKey:(NSString*)aConsumerKey accessToken:(NSString*)aAccessToken failure:(onFailureBlock)aOnFailure;

@end

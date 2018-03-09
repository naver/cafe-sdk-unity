//
//  NCNaverLoginManager.h
//  glink_sdk
//
//  Created by Naver on 2017. 2. 13..
//  Copyright © 2017년 Naver. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NCNaverLoginManagerDelegate;


@interface NCNaverLoginManager : NSObject

@property (nonatomic, weak) id<NCNaverLoginManagerDelegate> ncNaverLoginManagerDelegate;

+ (NCNaverLoginManager *)getSharedInstance;
+ (void)resetSharedInstance;

- (void)naverIdInitWithClientId:(NSString *)clientId andSecretId:(NSString *)secrectId;
- (void)naverIdLogin;
- (void)naverIdLogout;
- (BOOL)isNaverIdLogin;
- (void)getNaverIdProfile;
@end


@protocol NCNaverLoginManagerDelegate <NSObject>
@optional
- (void)ncSDKLoginCallback;
- (void)ncSDKGetProfile:(NSString *)result;
@end


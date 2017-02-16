//
//  NCSDKStatistics.h
//  glink_sdk
//
//  Created by Naver on 2016. 10. 29..
//  Copyright © 2016년 Naver. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NCSDKStatistics : NSObject

+ (void)sendNewUser:(NSString *)gameUserId andMarket:(NSString *)market;
+ (void)sendPayUser:(NSString *)gameUserId andPay:(double)pay andProductCode:(NSString *)productCode andCurrency:(NSString *)currency andMarket:(NSString *)market;
+ (void)sendPageVisit:(NSString *)gameUserId;

@end

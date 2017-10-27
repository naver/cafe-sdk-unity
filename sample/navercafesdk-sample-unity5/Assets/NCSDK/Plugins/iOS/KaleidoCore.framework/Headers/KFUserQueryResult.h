//
//  KFUserQueryResult.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 30..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFUser.h"

typedef NS_ENUM(NSUInteger, KFUserQueryCode) {
    KFUserQueryOK = 1,
    KFUserQueryTimeOut = 2,
    KFUserQueryUnauthorized = 3,
    KFUserQueryUserNotFound = 4,
    KFUserQueryUnknownError = 100
};

EXPORT
@interface KFUserQueryResult: NSObject

/**
 * ErrorCode that indicates whether querying user succeeded or not
 */
@property(nonatomic) KFUserQueryCode code;

/**
 * KFUser if error code is OK, nullptr otherwise
 */
@property(nonatomic) KFUser* _Nullable user;

@end

//
//  KFAuthenticationType.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 3..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"

typedef NS_ENUM(NSUInteger, KFAuthenticationResult) {
    INVALID_ACCESS_TOKEN,
    INVALID_SERVICE_ID_OR_KEY,
    UNKNOWN_ERROR
};

typedef void (^onFailureBlock)(KFAuthenticationResult);

EXPORT
@interface KFAuthenticationType : NSObject

/**
 * Authentication failure block.
 */
@property(atomic, weak) onFailureBlock onFailure;
@property(nonatomic) BOOL isAnonymous;

@end

//
//  KFUpdateParam.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 10. 24..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFValue.h"

@class KFData;

EXPORT
@interface KFUpdateParam : NSObject
- (nonnull KFData *)getData;
@end

typedef NS_ENUM(NSInteger, KFMapEntryTransition) {
    ADDED = 0,
    UPDATED = 1,
    REMOVED = 2
    
};

EXPORT
@interface KFMapUpdateParam : KFUpdateParam
- (nonnull NSDictionary<KFValue *, NSNumber *> *)getChanges;
- (nonnull NSDictionary<KFValue *, NSNumber *> *)getExistences;
- (void)put:(nonnull KFValue *)aKey transition:(KFMapEntryTransition)aTransition;
- (void)put:(nonnull KFValue *)aKey existed:(bool)aExisted;
- (void)clear;
@end

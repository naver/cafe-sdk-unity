//
//  KFOption.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 11. 3..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"


typedef NS_ENUM(NSUInteger, KFSyncResult) {
    KFSyncResultOK = 1,
    KFSyncResultTimeout = 2,
    KFSyncResultSyncFailed = 3,
    KFSyncResultUnauthorized = 4,
    KFSyncResultApplyFailed = 5
};

/**
 * KFBeforeSyncParam is a parameter supplied when user registered the beforeSync gets invoked
 * Currently, KFBeforeSyncParam carries nothing
 */
EXPORT
@interface KFBeforeSyncParam : NSObject
@end

/**
 * KFAfterSyncParam is a parameter supplied when user registered the afterSync gets invoked
 */
@interface KFAfterSyncParam : NSObject

- (KFSyncResult)getResult;

@end

/**
 * KFPushParam is a parameter supplied when user registered the onPush gets invoked
 * Currently, carries nothing
 */
@interface KFPushParam : NSObject

- (NSArray<KFData *> *)getUpdatedData;

@end

@protocol KFAutoSyncDelegate <NSObject>

/**
 * beforeSync gets called when KFAutoSync is about to perform synchronization
 * @param aParam A parameter contains result for sync.
 */
- (void)beforeSync:(KFBeforeSyncParam *)aParam;

/**
 * afterSync gets called after KFAutoSync finishes synchronization
 * @param aParam A parameter contains result for sync.
 */
- (void)afterSync:(KFAfterSyncParam *)aParam;

@end

@protocol KFPushDelegate <NSObject>

/**
 * onPush gets called when KFClient gets notified for changes from other clients
 * @param aParam A parameter contains data updated.
 */
- (void)onPush:(KFPushParam *)aParam;

@end

/**
 * KFAutoSyncOption is a set of Configurations for KFAutoSync
 */
@interface KFAutoSyncOption : NSObject

/**
 * If AutoSync is disabled all other parameters will be ignored
 * @param aEnable determines whether to enable KFAutoSync or not
 */
+ (instancetype)autoSyncOptionWithEnable:(bool)aEnable;

- (bool)isEnabled;

/**
 * Returns accumulation delay
 * Accumulation delay is the time waiting for further updates on KFData after KFAutoSync gets first update notification from KFData
 * Default accumulation delay is 20ms
 *
 * @returns accumulation delay in milliseconds
 */
- (int)getAccumulationDelay;

/**
 * Sets accumulation delay
 *
 * @param aMillis accumulation delay in milliseconds
 */
- (void)setAccumulationDelayInMillis:(int)aMillis;

- (void)setDelegate:(id<KFAutoSyncDelegate>)aDelegate;

@end

/**
 * KFPushOption is a set of Configurations for the Kaleido push
 */
@interface KFPushOption : NSObject

/**
 * If the Kaleido push is disabled all other parameters will be ignored
 *
 * @param aEnable determines whether to enable the Kaleido push or not
 */
+ (instancetype)pushOptionWithEnable:(bool)aEnable;

- (bool)isEnabled;

- (void)setDelegate:(id<KFPushDelegate>)aDelegate;

@end

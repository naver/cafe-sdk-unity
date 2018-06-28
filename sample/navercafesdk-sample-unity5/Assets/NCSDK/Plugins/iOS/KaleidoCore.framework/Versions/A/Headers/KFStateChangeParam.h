//
//  KFStateChangeParam.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 14..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"

/**
 * KFStateChangeParam is used as a parameter for KFData onStateChanged
 */
EXPORT
@interface KFStateChangeParam : NSObject

/**
 * @returns state of Datatype after synchronization performed
 *
 * @see KFDataState
 */
- (KFDataState)getState;

/**
 * @returns state of Datatype after synchronization performed in string form
 *
 * @see KFDataState
 */
- (NSString *)getStateAsString;

/**
 * @returns result that represnets if operations affecting the state of Datatype has succeeded or not
 *
 * @see KFDataResult
 */
- (KFDataResult)getResult;

/**
 * @returns result that represnets if operations affecting the state of Datatype has succeeded or not in string form
 *
 * @see KFDataResult
 */
- (NSString *)getResultAsString;

/**
 * @returns true if operations affecting the state of Datatype has suceeded, false otherwise
 */
- (bool)isSuccessful;

/**
 * @returns data
 *
 * @see KFData
 */
- (KFData *)getData;

@end

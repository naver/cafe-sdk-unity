//
//  KFReplayer.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 5..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"
#import "KFValue.h"

@class KFIntCounter;
@class KFList;

/**
 * KFReplayer provides replaying changes of KFType.
 */
EXPORT
@interface KFReplayer<KFType> : NSObject

@property void *_impl;

/**
 * Returns 'true' if Replayer has more operations to replay
 */
- (bool)hasNext;

/**
 * Appying operation to datatype and returns the snapshot of that datatype
 *
 * @throws std::out_of_range if there is no more operation to apply
 */
- (KFType)next;

@end

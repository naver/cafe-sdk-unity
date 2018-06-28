//
//  KFRealCounter.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 8. 1..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"

@class KFClient;
@class KFReplayer<KFDataType>;
@class KFStateChangeParam;

/**
 * RealCounter is a Kaleido datatype effectively count real number.
 */
EXPORT
@interface KFRealCounter : KFData

/**
 * Get a RealCounter instance.
 * If Datatype exists in Memory or on Disk, that datatype will be returned.
 * If datatype whose key is neither found in memory or on disk,
 * Newly created instance of RealCounter will be returned.
 *
 * @param aClient client that RealCounter instance exists or will be created.
 *        'client' can't be null.
 * @param aKey the key of this datatype; Keys must be unique within a workspace.
 *        the key must not be an empty string.
 * @return the RealCounter which works normally, but is not yet authorized by the server.
 * @throws IllegalStateException when client is null or key is an empty string.
 * @throws TypeMismatchException if Datatype with the key already exists in local storage but not a RealCounter type.
 */
+ (nonnull instancetype)realCounter:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey;

/**
 * Gets KFReplayer
 *
 * @param aClient client that contains KFData
 * @param aKey key of KFData
 * @returns KFReplayer<KFRealCounter>
 * @throws IllegalStateException if KFData with that key does not exists
 */
+ (nonnull KFReplayer<KFRealCounter *> *)replayer:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey;

/**
 * Increases the current value by amount.
 *
 * @param aAmount the amount to increase.
 * @return the current value after this increment is applied.
 */
- (double)increase:(double)aAmount;

/**
 * Decreases the current value by amount.
 *
 * @param aAmount the amount to decrease.
 * @return the current value after this decrement is applied.
 */
- (double)decrease:(double)aAmount;

/**
 * Multiplies the current value by the amount.
 *
 * @param aAmount the amount to multiply.
 * @return the current value after this multiplifcation is applied.
 */
- (double)multiply:(double)aAmount;

/**
 * Divides the current value by amount.
 *
 * @param aAmount the amount to divide.
 * @return the current value after executing this division.
 * @throws std::runtime_error if amount is 0
 */
- (double)divide:(double)aAmount;

/**
 * Gets the current double value.
 *
 * @return the current value of RealCounter
 */
- (double)value;

@end

//
//  KFIntCounter.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 14..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"

@class KFClient;
@class KFReplayer<KFDataType>;
@class KFIntCounter;
@class KFStateChangeParam;

/**
 * IntCounter is a datatype supporting the four fundamental arithmetic operations of integers.
 * It is worth noting how multiplications and divisions are applied across different sessions.
 * When either a multiplication or a division is called, it is applied to the current local value.
 * To apply those operations in other sessions, they are transformed in the form of inc() or dec().
 */
EXPORT
@interface KFIntCounter : KFData

/**
 * Gets an IntCounter instance.
 * If Datatype exists in Memory or on Disk, that datatype will be returned.
 * If datatype whose key is neither found in memory or on disk,
 * Newly created instance of IntCounter will be returned.
 *
 * @param aClient client that IntCounter instance exists or will be created.
 *        'client' can't be null.
 * @param aKey the key of this datatype; Keys must be unique within a workspace.
 *        the key must not be an empty string.
 * @return the IntCounter which works normally, but is not yet authorized by the server.
 */
+ (nonnull instancetype)intCounter:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey;

/**
 * Gets KFReplayer
 *
 * @param aClient client that contains KFData
 * @param aKey key of KFData
 * @returns KFReplayer<KFIntCounter>
 */
+ (nonnull KFReplayer<KFIntCounter *> *)replayer:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey;

/**
 * Increases the current value by amount.
 *
 * @param aAmount the amount to increase.
 * @return the current value after this increment is applied.
 */
- (int)increase:(int)aAmount;

/**
 * Decreases the current value by amount.
 *
 * @param aAmount the amount to decrease.
 * @return the current value after this decrement is applied.
 */
- (int)decrease:(int)aAmount;

/**
 * Multiplies the current value by the amount.
 *
 * @param aAmount the amount to multiply.
 * @return the current value after this multiplifcation is applied.
 */
- (int)multiply:(int)aAmount;

/**
 * Divides the current value by amount.
 *
 * @param aAmount the amount to divide.
 * @return the current value after executing this division.
 */
- (int)divide:(int)aAmount;

/**
 * Gets the current int value.
 *
 * @return the current value of IntCounter
 */
- (int)value;

@end

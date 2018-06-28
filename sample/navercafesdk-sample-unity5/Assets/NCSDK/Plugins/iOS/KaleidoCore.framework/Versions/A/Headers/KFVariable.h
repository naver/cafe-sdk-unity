//
//  KFVariable.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 8. 1..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"
#import "KFValue.h"

@class KFClient;
@class KFReplayer<KFDataType>;
@class KFStateChangeParam;

EXPORT
@interface KFVariable : KFData
/**
 * Get a Variable instance.
 * If Datatype exists in Memory or on Disk, that datatype will be returned.
 * If datatype whose key is neither found in memory or on disk,
 * Newly created instance of Variable will be returned.
 *
 * @param aClient client that Variable instance exists or will be created.
 *        'client' can't be null.
 * @param aKey the key of this datatype; Keys must be unique within a workspace.
 *        the key must not be an empty string.
 * @param aValueType A datatype of value of variable. KFValueType
 * @return the Variable which works normally, but is not yet authorized by the server.
 * @throws IllegalStateException when client is null or key is an empty string.
 * @throws TypeMismatchException if Datatype with the key already exists in local storage but not a Variable type or not the same parameterized type.
 */
+ (nonnull instancetype)variable:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey valueType:(KFValueType)aValueType;

/**
 * Gets KFReplayer
 *
 * @param aClient client that contains KFData
 * @param aKey key of KFData
 * @param aValueType A datatype of value of variable. KFValueType
 * @returns KFReplayer<KFVariable>
 * @throws IllegalStateException if KFData with that key does not exists
 */
+ (nonnull KFReplayer<KFVariable *> *)replayer:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey valueType:(KFValueType)aValueType;

/**
 * Sets new value
 * @param aValue value to assign
 */
- (void)setValue:(nonnull KFValue *)aValue;

/**
 * Returns current value of this Variable
 */
- (nonnull KFValue *)value;

@end

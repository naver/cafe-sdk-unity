//
//  KFMap.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 27..
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
@interface KFMap : KFData
/**
 * Get a Map instance.
 * If Datatype exists in Memory or on Disk, that datatype will be returned.
 * If datatype whose key is neither found in memory or on disk,
 * Newly created instance of Map will be returned.
 *
 * @param aClient client that Map instance exists or will be created.
 *        'client' can't be null.
 * @param aKey the key of this datatype; Keys must be unique within a workspace.
 *        the key must not be an empty string.
 * @param aKeyType the key datatype of HashMap KFValue
 * @param aValueType the value datatype of HashMap KFValue
 * @return an instance of Map if all parameters and type information are correct, nullptr if at least one of the requirements is not satisfied.
 */
+ (nonnull instancetype)map:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey keyType:(KFValueType)aKeyType valueType:(KFValueType)aValueType;

/**
 * Gets KFReplayer
 *
 * @param aClient client that contains KFData
 * @param aKey key of KFData
 * @param aKeyType the key datatype of HashMap KFValue
 * @param aValueType the value datatype of HashMap KFValue
 * @returns KFReplayer<KFMap>
 * @throws IllegalStateException if KFData with that key does not exists
 */
+ (nonnull KFReplayer<KFMap *> *)replayer:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey keyType:(KFValueType)aKeyType valueType:(KFValueType)aValueType;

/**
 * Returns 'true' if this Map has no elements
 */
- (bool)isEmpty;

/**
 * Returns true if mapped value for a given key exists
 *
 * @param aKey a key expected in HashMap.
 */
- (bool)isContainsKey:(nonnull KFValue *)aKey;

/**
 * Returns true if value is mapped to some key
 *
 * @param aValue a value expected in HashMap.
 */
- (bool)isContainsValue:(nonnull KFValue *)aValue;

/**
 * Returns size of this Map
 */
- (size_t)getSize;

/**
 * Returns value for the key
 *
 * @param aKey key mapped to the value
 * @returns the pointer of value associated with key, nullptr if key does not exist in this Map
 */
- (nonnull KFValue *)getValueByKey:(nonnull KFValue *)aKey;

/**
 * Inserts key and associated value to this Map
 *
 * If Map already has key, associated value will be replaced
 * Be aware that if the sum of size of all elements gets larger than 2MB with argument 'value',
 * that request will be rejected with error code 'MapResult::OBJECT_IS_TOO_BIG'
 *
 * @param aValue associated value to the key
 * @param aKey key to be inserted
 */
- (void)putValue:(nonnull KFValue *)aValue forKey:(nonnull KFValue *)aKey;

/**
 * Removes key and associated value If exists
 *
 * @param aKey key of element to be removed
 */
- (void)removeByKey:(nonnull KFValue *)aKey;

/**
 * Removes all elements in this Map
 */
- (void)clear;

/**
 * Iterates all elements in Map and executes user supplied callback function by passing key and value as parameter
 * This method locks a Map instance, therefore, executing task which takes long time should be avoided
 *
 * @param aBlock an unit of behavior.
 *
 * - *param1* aKey key of element.
 * - *param2* aValue value of element.
 */
- (void)forEach:(void (^_Nonnull)(KFValue * _Nonnull aKey, KFValue * _Nonnull aValue))aBlock;

@end

//
//  KFList.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 16..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"
#import "KFValue.h"

@class KFClient;
@class KFReplayer<KFDataType>;
@class KFStateChangeParam;
@class KFValue;
@class KFList;
/**
 * List is a Kaleido datatype works like std::list
 */
EXPORT
@interface KFList : KFData

@property KFValueType mValueType;
/**
 * Get a List instance.
 * If Datatype exists in Memory or on Disk, that datatype will be returned.
 * If datatype whose key is neither found in memory or on disk,
 * Newly created instance of List will be returned.
 *
 * @param aClient client that List instance exists or will be created.
 * @param aKey the key of this datatype; Keys must be unique within a workspace.
 * @param aValueType constant of value type.
 * @return the List which works normally, but is not yet authorized by the server.
 * @throws TypeMismatchException if Datatype with the key already exists in local storage but not aList type or not the same parameterized type.
 */
+ (nonnull instancetype)list:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey valueType:(KFValueType)aValueType;

/**
 * Gets KFReplayer
 *
 * @param aClient client that contains KFData
 * @param aKey key of KFData
 * @param aValueType constant of KFData
 * @returns KFReplayer<KFList>
 * @throws IllegalStateException if KFData with that key does not exists
 */
+ (nonnull KFReplayer<KFList *> *)replayer:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey valueType:(KFValueType)aValueType;

/**
 * Returns 'true' if this List has no elements
 */
- (bool)isEmpty;

/**
 * Returns the size of List
 */
- (size_t)size;

/**
 * Returns first element in List
 *
 * @throws OutOfRangeException if List is empty
 */
- (nonnull KFValue *)valueAtFront;

/**
 * Returns last element in List
 *
 * @throws OutOfRangeException if List is empty
 */
- (nonnull KFValue *)valueAtBack;

/**
 * Returns element at index in List
 *
 * @param aIndex an index of elements
 */
- (nonnull KFValue *)valueAtIndex:(unsigned int)aIndex;

/**
 * Inserts element at specified position
 *
 * If index is larger than size, value will be inserted at the end of List
 *
 * @param aValue value to be inserted
 * @param aIndex position where value is inserted
 */
- (void)insertValue:(nonnull KFValue *)aValue atIndex:(unsigned int)aIndex;

/**
 * Inserts element at the beginning of this List
 *
 * @param aValue element to insert
 */
- (void)addValueAtFront:(nonnull KFValue *)aValue;

/**
 * Inserts element at the end of this List
 *
 * @param aValue element to insert
 */
- (void)addValueAtBack:(nonnull KFValue *)aValue;

/**
 * Removes element at the beginning of this List
 * If List is empty, nothing will be happened
 *
 * @returns an element at front position or nil if the list was empty.
 */
- (nullable KFValue *)popFront;

/**
 * Removes element at the end of this List
 * If List is empty, nothing will be happened
 *
 * @returns an element at last position or nil if the list was empty.
 */
- (nullable KFValue *)popBack;

/**
 * Remove all elements in this List
 */
- (void)clear;

/**
 * Iterates all elements in List and executes user supplied callback function by passing element as parameter
 * This method locks a List instance, therefore, executing task which takes long time should be avoided
 *
 * @param aBlock an unit of behavior.
 */
- (void)forEach:(void (^_Nonnull)(KFValue *_Nonnull))aBlock;

@end

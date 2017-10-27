//
//  KFArray.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 31..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"
#import "KFValue.h"

@class KFClient;
@class KFReplayer<KFDataType>;
@class KFStateChangeParam;

/*!
 * An Array is fixed-size array
 *
 * Be aware that once Array instance is created, size of it cannot be adjusted
 */
EXPORT
@interface KFArray : KFData

/*!
 * Get an Array instance.
 * If Datatype exists in Memory or on Disk, that datatype will be returned.
 * If datatype whose key is neither found in memory or on disk,
 * Newly created instance of Array will be returned.
 *
 * @param   aClient      client that Array instance exists or will be created.<p>Raises an NSInternalInconsistencyException if client is nil.
 * @param   aKey        the key of this datatype; Keys must be unique within a workspace.<p>Raises an NSInternalInconsistencyException if key is nil.<p>Raises an KFTypeMismatchException if key exists already.
 * @param   aValueType   the stored type in an array.<p>Raises an KFTypeMismatchException if valueType is not same for exsisting KFData.
 * @param   aSize        the length of array.<p>Raises an NSInvalidArgumentException if size is larger than 1024 or less than or equal to 0.
 * @returns the Array which works normally, but is not yet authorized by the server.
 */
+ (nonnull instancetype)array:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey valueType:(KFValueType)aValueType size:(size_t)aSize;

/**
 * Gets KFReplayer
 *
 * @param   aClient      the client that contains KFData
 * @param   aKey         the key of KFData
 * @param   aValueType   the stored type in an array.
 * @param   aSize        the size of KFArray
 * @returns KFReplayer<KFArray *>
 * @throws  NSInternalInconsistencyException   if KFData with that key does not exists
 */
+ (nonnull KFReplayer<KFArray *> *)replayer:(nonnull KFClient *)aClient key:(nonnull NSString *)aKey valueType:(KFValueType)aValueType size:(size_t)aSize;

/**
 * Returns the size of Array
 *
 * The size of Array is determined when creating or attaching Array
 *
 * @return the size of Array
 */
- (size_t)size;

/**
 * Sets new value to given position
 *
 * @param   aValue   value to set at specified position
 * @param   aIndex   position where value is going to be set
 * @throws  NSRangeException    if index is not valid
 */
- (void)setValue:(nonnull KFValue *)aValue atIndex:(unsigned int)aIndex;

/**
 * Returns item at specified position
 *
 * @param   aIndex position of element
 * @returns Element at specified position
 * @throws  NSRangeException    if index is not valid
 */
- (nonnull KFValue *)valueAtIndex:(unsigned int)aIndex;

/**
 * Iterates all elements in Array and executes user supplied callback function by passing it as parameter.
 * This method locks an Array instance, therefore, executing task which takes long time should be avoided.
 *
 * @param aBlock     an execution function for each element
 */
- (void)forEach:(void (^_Nonnull)(KFValue * _Nonnull value))aBlock;

@end

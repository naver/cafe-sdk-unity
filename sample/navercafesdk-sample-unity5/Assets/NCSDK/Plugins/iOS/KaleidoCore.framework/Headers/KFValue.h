//
//  KFValue.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 18..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"

typedef NS_ENUM(NSUInteger, KFValueType) {
    KFValueTypeNull = 0,
    KFValueTypeBool = 1,
    KFValueTypeInt = 2,
    KFValueTypeInt64 = 3,
    KFValueTypeDouble = 4,
    KFValueTypeString = 5,
    KFValueTypeByteArray = 6,
    KFValueTypeTime = 7,
    KFValueTypeJSON = 8,
    KFValueTypeObject = 9
};

/**
 * KFValue is a heterogeneous container
 *
 * Downcast and Upcast are not supported. If you try to do that, it will throw an exception.
 */
EXPORT
@interface KFValue : NSObject <NSCopying>

/**
 * Returns retrieve reference for null type.
 */
+ (nonnull instancetype)valueWithNull;

/**
 * Returns retrieve reference for boolean type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithBool:(bool)aValue;

/**
 * Returns retrieve reference for integer type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithInt:(int)aValue;

/**
 * Returns retrieve reference for integer 64 bits type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithInt64:(long long)aValue;

/**
 * Returns retrieve reference for double type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithDouble:(double)aValue;

/**
 * Returns retrieve reference for string type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithString:(nonnull NSString *)aValue;

/**
 * Returns retrieve reference for data type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithData:(nonnull NSData *)aValue;

/**
 * Returns retrieve reference for date type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithDate:(nonnull NSDate *)aValue;

/**
 * Returns retrieve reference for JSON Object type.
 *
 * @param aValue intended to set.
 */
+ (nonnull instancetype)valueWithJSON:(nonnull NSData *)aValue;

/**
 * Returns retrieve reference for JSON Object type.
 *
 * @param aValue intended to set in dictionary.
 */
+ (nonnull instancetype)valueWithJSONInDictionary:(nonnull NSDictionary *)aValue;

/**
 * Returns retrieve reference for Object type.
 *
 * @param aObject intended to user-defined object.
 */
+ (nonnull instancetype)valueWithObject: (nonnull NSObject *)aObject;

/**
 * Returns value type.
 */
- (KFValueType)type;

/**
 * Returns value for boolean type.
 */
- (bool)boolValue;

/**
 * Returns value for integer type.
 */
- (int)intValue;

/**
 * Returns value for integer 64 bits type.
 */
- (long long)int64Value;

/**
 * Returns value for double type.
 */
- (double)doubleValue;

/**
 * Returns value for string type.
 */
- (nonnull NSString *)stringValue;

/**
 * Returns value for data type.
 */
- (nonnull NSData *)dataValue;

/**
 * Returns value for date type.
 */
- (nonnull NSDate *)dateValue;

/**
 * Returns value for JSON Object type.
 */
- (nonnull NSData *)JSONValue;

/**
 * Returns value for JSON Object type in dictionary.
 */
- (nonnull NSDictionary *)JSONValueInDictionary;

/**
 * Returns value for Object type.
 *
 * @param aClass for user-defined object.
 */
- (nonnull id)objectValueForClass:(nonnull Class)aClass;

@end

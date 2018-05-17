//
//  KFDatatypeOptions.h
//  KaleidoCore
//
//  Created by Seungha on 2018. 1. 15..
//  Copyright © 2018년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFUserAcl.h"
#import "KFPublicPermission.h"

/**
 * DatatypeOptions is used to create data type.
 */
EXPORT
@interface KFDatatypeOptions: NSObject

/**
 * Creates an options in default.
 */
+(instancetype)defaultOptions;

/**
 * Returns user acl.
 *
 * @return {@link UserAcl}
 */
-(KFUserAcl*)getUserAcl;

/**
 * Returns public permission.
 *
 * @return {@link PublicPermission}
 */
-(KFPublicPermission)getPublicPermission;

/**
 * Returns maximum number of operations pulled from server.
 *
 * @return maximum number of operations pulled from server
 */
-(size_t)getMaxPullOperationCount;

/**
 * Sets user acl of kaleido data type.
 *
 * @param userAcl sets access permission for this datatype per user
 */
-(void)setUserAcl:(KFUserAcl*)userAcl;

/**
 * Sets acl of kaleido data type with public permission.
 *
 * @param publicPermission determines whether to expose this Datatype publicly or not. Do not expose this Datatype to other users by default
 */
-(void)setPublicPermission:(KFPublicPermission)publicPermission;

/**
 * Sets maximum number of operations pulled from server.
 *
 * @param size An option to limit maximum size of operations.
 */
-(void)setMaxPullOperationSize:(size_t)size;

@end

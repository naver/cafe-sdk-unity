//
//  KFUserAcl.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 9. 1..
//  Copyright © 2017년 NAVER. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "KFUser.h"
#import "KFDataProperty.h"

typedef id KFPermissionAsObject;

EXPORT
@interface KFUserAcl: NSObject

/**
 * Creates UserAcl instance to assign each user permission.
 *
 * @returns KFUserAcl that be used for managing user permission of datatype.
 */
+(instancetype)userAcl;

/**
 * Adds the specified permission to the given user.
 *
 * @param aUser   This contain user identifier.
 * @param aPermission   A permission of user.
 */
-(void)addUserAcl:(KFUser*)aUser withPermission:(KFPermission)aPermission;

/**
 * Returns user permissions for each user.
 *
 * @returns NSArray contains KFPermssions for each user.
 */
-(NSArray<KFPermissionAsObject>*)getUsersPermission;

/**
 * Removes the permission to the specified user.
 *
 * @param aUser This contain user identifier.
 */
-(void)removeUserAcl:(KFUser*)aUser;

@end

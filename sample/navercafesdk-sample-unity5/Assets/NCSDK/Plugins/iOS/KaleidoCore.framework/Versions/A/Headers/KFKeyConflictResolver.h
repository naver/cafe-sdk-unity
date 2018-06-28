//
//  KFKeyConflictResolver.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 15..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
/**
 * KeyConflictResolver deals with key confliction
 *
 * Unlike other conflicts, create/create conflict cannot be resolved by CRDT property of {@link Datatype}.
 * There are two options to resolve conflict.
 * One is to discard the KFData you locally created, and the other is to rename it.
 * @see KFDataState KEY_CONFLICT
 */
EXPORT
@interface KFKeyConflictResolver : NSObject

/**
 * Retry creating {@link Datatype} by renaming it
 *
 * @param aNewName a new key of {@link Datatype}. can't be an emptry string
 * @return true if Datatype is eligible for deletion, false otherwise
 */
- (bool)rename:(NSString *)aNewName;

/**
 * Discard this Datatype
 *
 * Eliminating Datatype can fail for the following reasons
 * 1. Datatype in Key Conflict state is already processed or being processed.
 * 2. Failed to log change of Datatype to the local database.
 *
 * @return true if Datatype is removable, false otherwise
 */
- (bool)discard;

@end

//
//  KFUser.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 30..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"

/**
* A KaleidoUser is a representation of a user signed-in by Naver login or NeoID combined with UUID used in Kaleido.
* This object is used to set Permission of Datatype
*/
EXPORT
@interface KFUser: NSObject <NSCopying>

@property(nonatomic) NSString *userId;
@property(nonatomic) NSUUID *uuid;

/**
 * Creates KFUser contains user identifiers.
 *
 * @param aUserId   a User identifier who logged in Naver Login or NeoID.
 * @param aUuid   a Unique identifier used in Kaleido.
 *
 * @returns KFUser that contains user identifiers.
 */
+(instancetype)userWithID:(NSString*)aUserId uuid:(NSUUID*)aUuid;

@end

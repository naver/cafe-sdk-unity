//
//  KFMapper.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 4. 5..
//  Copyright © 2017년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface KFMapper : NSObject

+ (NSDictionary*)mapJsonFromObject:(NSObject *)aObject;
+ (NSObject*)mapObjectFromJson:(NSDictionary *)aDictionary forClass:(Class)aClass;

@end

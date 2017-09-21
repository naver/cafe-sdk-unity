//
//  KFPublicPermission.h
//  KaleidoCore
//
//  Created by Seungha on 2017. 8. 30..
//  Copyright © 2017년 NAVER. All rights reserved.
//

typedef NS_ENUM(NSUInteger, KFPublicPermission) {
    // Fields below are used to set permission for logged-in users, which means non-anonymous users are not considered
    ALL_NONE_LOGIN_NONE = 0x00,
    ALL_NONE_LOGIN_READ = 0x01,
    ALL_NONE_LOGIN_READ_WRITE = 0x03,
    
    // Fields below are used to set permission for all users including anonymous users
    ALL_READ_LOGIN_READ = 0x05,
    ALL_READ_LOGIN_READ_WRITE = 0x07,
    ALL_READ_WRITE_LOGIN_READ_WRITE = 0x0f
};

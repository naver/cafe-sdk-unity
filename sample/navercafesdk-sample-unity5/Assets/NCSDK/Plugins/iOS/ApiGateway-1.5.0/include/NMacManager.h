//
//  NMacManager.h
//  ApiGateway-MAC
//
//  Created by KJ KIM on 10. 03. 24.
//  Copyright 2010 NHN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NMacCommonManager.h"


@interface NMacManager : NMacCommonManager {
}

+ (void)setServiceKey:(NSString *)key;

// encrypt an url by HMAC-SHA1 algorithm with key provided by NHNAPIGatewayKey.properties file.
+ (NSString *) encryptUrl:(NSString *)url;
+ (NSString *) encryptUrl:(NSString *)url key:(NSString *)key;

// async 방식, thread-safe
// target : class of cllback method
// selector : cllaback method, void callback:(Boolean)
+ (void) adjustLocalTimeToServerTime:(id)target selector:(SEL)selector;

// sync 방식
+ (Boolean) adjustLocalTimeToServerTime;
@end

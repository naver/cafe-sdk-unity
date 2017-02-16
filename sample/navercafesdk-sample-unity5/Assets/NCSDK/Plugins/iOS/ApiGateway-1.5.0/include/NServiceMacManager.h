//
//  NServiceMacManager.h
//  ApiGateway-MAC
//
//  Created by KJ KIM on 10. 03. 29.
//  Copyright 2010 NHN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NMacCommonManager.h"


@interface NServiceMacManager : NMacCommonManager {
}

+ (void)setServiceId:(NSString *)serviceId;
+ (void)setServiceKey:(NSString *)key;

// encrypt an url by HMAC-SHA1 algorithm with key provided by NHNAPIGatewayKey.properties file.
+ (NSString *) encryptUrl:(NSString *)url;
@end

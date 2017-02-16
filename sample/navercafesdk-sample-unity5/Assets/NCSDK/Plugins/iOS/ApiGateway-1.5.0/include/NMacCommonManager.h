//
//  NMacCommonManager.h
//  ApiGateway-MAC
//
//  Created by Hyeonil Kim on 2016. 4. 21..
//
//

#import <Foundation/Foundation.h>

@interface NMacCommonManager : NSObject

+ (void) setBundleClass:(Class)bundleClass;
+ (Class) getBundleClass;

@end

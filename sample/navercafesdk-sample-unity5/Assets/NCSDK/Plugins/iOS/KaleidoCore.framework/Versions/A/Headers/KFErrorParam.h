//
//  KFErrorParam.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 11. 9..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"

EXPORT
@interface KFErrorParam : NSObject

- (KFDataError)getError;

- (KFData *)getData;

@end

//
//  NCSDKRecordManager.h
//  glink_sdk
//
//  Created by Naver on 2017. 4. 24..
//  Copyright © 2017년 Naver. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NCSDKRecordManagerDelegate;

@interface NCSDKRecordManager : NSObject

@property (nonatomic, weak) id<NCSDKRecordManagerDelegate> ncSDKRecordDelegate;
@property (nonatomic, weak) id baseViewController;
@property (nonatomic, assign) BOOL isRecording;

+ (NCSDKRecordManager *)getSharedInstance;
- (void)startRecord;
- (void)stopRecord;

@end


@protocol NCSDKRecordManagerDelegate <NSObject>

- (void)ncSDKRecordStart;
- (void)ncSDKRecordError:(NSString *)errorMsg;
- (void)ncSDKRecordFinish;
- (void)ncSDKRecordFinishWithPreview;

@end

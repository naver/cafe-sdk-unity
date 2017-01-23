//
//  WidgetViewController.h
//  Unity-iPhone
//
//  Created by Naver on 2016. 3. 29..
//
//

#import <UIKit/UIKit.h>
#import "NCSDKManager.h"

@protocol NCWidgetDelegate;

@interface NCWidget : UIViewController

@property (nonatomic, weak) id<NCWidgetDelegate> ncWidgetDelegate;
@property (nonatomic, weak) id baseViewController;
@property (nonatomic, strong) UIView *mainView;
@property (nonatomic, assign) BOOL useVideoRecord;
@property (nonatomic, weak) id<NCSDKManagerDelegate> ncSDKManagerDelegate;

+ (NCWidget *)getSharedInstance;
+ (void)resetSharedInstance;

- (void)startWidget;
- (void)hiddenWidget;

@end

@protocol NCWidgetDelegate <NSObject>
@optional
- (void)ncWidgetPostArticleWithImage;
- (void)ncWidgetSuccessVideoRecord;
@end


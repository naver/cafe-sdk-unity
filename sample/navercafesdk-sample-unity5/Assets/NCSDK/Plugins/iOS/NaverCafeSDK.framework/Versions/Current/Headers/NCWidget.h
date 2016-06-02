//
//  WidgetViewController.h
//  Unity-iPhone
//
//  Created by Naver on 2016. 3. 29..
//
//

#import <UIKit/UIKit.h>

@protocol NCWidgetDelegate;

@interface NCWidget : UIViewController

@property (nonatomic, weak) id<NCWidgetDelegate> ncWidgetDelegate;
@property (nonatomic, weak) id baseViewController;
@property (nonatomic, strong) UIView *mainView;

+ (NCWidget *)getSharedInstance;

- (void)setUseVideoRecord:(BOOL)useRecord;
- (void)startWidget;
- (void)hiddenWidget;

@end

@protocol NCWidgetDelegate <NSObject>
@optional
- (void)ncWidgetPostArticle;
- (void)ncWidtetExecuteGLink;
- (void)ncWidgetPostArticleWithImage;
@end


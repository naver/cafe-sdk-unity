#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import <NaverCafeSDK/NCSDKManager.h>

@interface GLinkViewController : UIViewController
@property (nonatomic, strong) UIView *mainView;
@property (nonatomic, strong) UIViewController *mainViewcontroller;

- (void)executeGlink;
- (void)closeGlink;

@end


@implementation GLinkViewController

- (id)init {
    self = [super init];
    if (self) {
    }
    return self;
}
- (void)viewDidLoad {
    [super viewDidLoad];
}
//- (void)setGLRootViewController {
//    _mainView = UnityGetGLView();
//    _mainViewcontroller = UnityGetGLViewController();
//
//    [[NCSDKManager getSharedInstance] setParentViewController:_mainViewcontroller];
//}
- (void)setGLRootViewController {
    _mainView = UnityGetGLView();
    _mainViewcontroller = UnityGetGLViewController();
    
    UIViewController *root = [[NCSDKManager getSharedInstance] navercafeRootViewController];
    [root.view removeFromSuperview];
    [root removeFromParentViewController];
    
    [_mainViewcontroller addChildViewController:root];
    [self.mainViewcontroller.view addSubview:root.view];
    [root didMoveToParentViewController:self];
}
- (void)executeGlink{
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewController];
}
- (void)executeArticleWithMenuId:(NSInteger)menuId
                         subject:(NSString *)subject
                         content:(NSString *)content {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentArticlePostViewControllerWithMenuId:menuId
                                                                         subject:subject
                                                                         content:content];
}

- (void)executeArticleForImageWithMenuId:(NSInteger)menuId
                                 subject:(NSString *)subject
                                 content:(NSString *)content
                                filePath:(NSString *)filePath {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentArticlePostViewControllerWithType:kGLArticlePostTypeImage
                                                                        menuId:menuId
                                                                       subject:subject
                                                                       content:content
                                                                      filePath:filePath];
}

- (void)executeArticleForVideoWithMenuId:(NSInteger)menuId
                                 subject:(NSString *)subject
                                 content:(NSString *)content
                                filePath:(NSString *)filePath {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentArticlePostViewControllerWithType:kGLArticlePostTypeVideo
                                                                        menuId:menuId
                                                                       subject:subject
                                                                       content:content
                                                                      filePath:filePath];
}

- (void)setGLinkInfoWithNaverLoginClientId:(NSString *)clientId
                  andNaverLoginClientSecret:(NSString *)cs
                                    andCafeId:(NSInteger)cafeId {
    [[NCSDKManager getSharedInstance] setNaverLoginClientId:clientId
                                      naverLoginClientSecret:cs
                                                        cafeId:cafeId];
}

- (void)closeGlink {
    
}

@end

// Converts C style string to NSString
NSString* CreateNSString (const char* string) {
    if (string) {
        return [NSString stringWithUTF8String:string];
    } else {
        return [NSString stringWithUTF8String:""];
        [UIImage imageWithCGImage:nil];
    }
}
extern "C" {
    
    GLinkViewController *vc = [[GLinkViewController alloc] init];
    
    void _InitGLink(const char* NaverLoginClientId, const char* NaverLoginClientSecret, int cafeId ) {
        [vc setGLinkInfoWithNaverLoginClientId:CreateNSString(NaverLoginClientId)andNaverLoginClientSecret:CreateNSString(NaverLoginClientSecret)
                                        andCafeId:cafeId];
    }
    
    void _ExecuteMain(){
        [vc executeGlink];
    }
    
    void _ExecuteArticlePost(int menuId, const char* subject, const char* content) {
        [vc executeArticleWithMenuId:menuId
                             subject:CreateNSString(subject)
                             content:CreateNSString(content)];
    }
    
    void _ExecuteArticlePostWithImage(int menuId, const char* subject, const char* content, const char* filePath) {
        [vc executeArticleForImageWithMenuId:menuId
                                     subject:CreateNSString(subject)
                                     content:CreateNSString(content)
                                    filePath:CreateNSString(filePath)];
    }
    
    void _ExecuteArticlePostWithVideo(int menuId, const char* subject, const char* content, const char* filePath) {
        [vc executeArticleForVideoWithMenuId:menuId
                                     subject:CreateNSString(subject)
                                     content:CreateNSString(content)
                                    filePath:CreateNSString(filePath)];
        
    }
}





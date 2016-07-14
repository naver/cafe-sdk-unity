#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import <NaverCafeSDK/NCSDKManager.h>

typedef void (*GLSDKDidLoadDelegate)();
typedef void (*GLSDKDidUnLoadDelegate)();

typedef void (*GLSDKJoinedCafeDelegate)();
typedef void (*GLSDKPostedArticleAtMenuDelegate)(NSInteger menuId);
typedef void (*GLSDKPostedCommentAtArticleDelegate)(NSInteger articleId);
typedef void (*GLSDKWidgetPostAriticleWithImageDelegate)();
typedef void (*GLSDKDidVoteAtArticleDelegate)(NSInteger articleId);

@interface GLinkViewController : UIViewController <NCSDKManagerDelegate>
@property (nonatomic, strong) UIView *mainView;
@property (nonatomic, strong) UIViewController *mainViewcontroller;

@property (nonatomic, assign) GLSDKDidLoadDelegate glSDKDidLoadDelegate;
@property (nonatomic, assign) GLSDKDidUnLoadDelegate glSDKDidUnLoadDelegate;
@property (nonatomic, assign) GLSDKJoinedCafeDelegate glSDKJoinedCafeDelegate;
@property (nonatomic, assign) GLSDKPostedArticleAtMenuDelegate glSDKPostedArticleAtMenuDelegate;
@property (nonatomic, assign) GLSDKPostedCommentAtArticleDelegate glSDKPostedCommentAtArticleDelegate;
@property (nonatomic, assign) GLSDKWidgetPostAriticleWithImageDelegate glSDKWidgetPostAriticleWithImageDelegate;
@property (nonatomic, assign) GLSDKDidVoteAtArticleDelegate glSDKDidVoteAtArticleDelegate;

- (void)executeGlink;

@end


@implementation GLinkViewController

- (id)init {
    self = [super init];
    if (self) {
        [[NCSDKManager getSharedInstance] setUseWidgetVideoRecord:YES];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)setGLRootViewController {
    _mainViewcontroller = UnityGetGLViewController();
    
    [[NCSDKManager getSharedInstance] setParentViewController:_mainViewcontroller];
    [[NCSDKManager getSharedInstance] setNcSDKDelegate:self];
}
- (void)executeGlink{
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewController];
}

- (void)executeNotice {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewControllerWithTabIndex:1];
}

- (void)executeEvent {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewControllerWithTabIndex:2];
}

- (void)executeMenu {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewControllerWithTabIndex:3];
}

- (void)executeProfile {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewControllerWithTabIndex:4];
}

- (void)executeArticle:(NSUInteger)articleId  {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewControllerWithArticleId:articleId];
}

- (void)syncGameUserId:(NSString *)gameUserId {
    [[NCSDKManager getSharedInstance] syncGameUserId:gameUserId];
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

- (void)executeEtc {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentEtc];
}

- (void)setGLinkInfoWithNaverLoginClientId:(NSString *)clientId
                 andNaverLoginClientSecret:(NSString *)cs
                                 andCafeId:(NSInteger)cafeId {
    [[NCSDKManager getSharedInstance] setNaverLoginClientId:clientId
                                     naverLoginClientSecret:cs
                                                     cafeId:cafeId];
}

- (void)executeShowMessageToast:(NSString *)message {
    [[NCSDKManager getSharedInstance] showToast:message];
}

- (void)setUseWidgetVideoRecord:(BOOL)useVideo {
    [[NCSDKManager getSharedInstance] setUseWidgetVideoRecord:useVideo];
}

- (void)setShowWidgetWhenUnloadSDK:(BOOL)useWidget {
    [[NCSDKManager getSharedInstance] setShowWidgetWhenUnloadSDK:useWidget];
}

- (void)startWidget {
    [[NCSDKManager getSharedInstance] startWidget];
}

- (void)stopWidget {
    [[NCSDKManager getSharedInstance] stopWidget];
}

#pragma mark - NCSDKDelegate
- (void)ncSDKViewDidLoad {
    if (self.glSDKDidLoadDelegate) {
        self.glSDKDidLoadDelegate();
    }
}

- (void)ncSDKViewDidUnLoad {
    if (self.glSDKDidUnLoadDelegate) {
        self.glSDKDidUnLoadDelegate();
    }
}

- (void)ncSDKJoinedCafeMember {
    if (self.glSDKJoinedCafeDelegate) {
        self.glSDKJoinedCafeDelegate();
    }
}
- (void)ncSDKPostedArticleAtMenu:(NSInteger)menuId {
    if (self.glSDKPostedArticleAtMenuDelegate) {
        self.glSDKPostedArticleAtMenuDelegate(menuId);
    }
    
}
- (void)ncSDKPostedCommentAtArticle:(NSInteger)articleId {
    if (self.glSDKPostedCommentAtArticleDelegate) {
        self.glSDKPostedCommentAtArticleDelegate(articleId);
    }
    
}

- (void)ncSDKDidVoteAtArticle:(NSInteger)articleId {
    if (self.glSDKDidVoteAtArticleDelegate) {
        self.glSDKDidVoteAtArticleDelegate(articleId);
    }
}

#pragma mark - NCWidgetDelegate
- (void)ncSDKWidgetPostArticleWithImage {
    if (self.glSDKWidgetPostAriticleWithImageDelegate) {
        self.glSDKWidgetPostAriticleWithImageDelegate();
    }
}

- (void)ncSDKWidgetSuccessVideoRecord {
    [self executeArticleWithMenuId:0 subject:@"" content:@""];
}

- (void)ncWidgetPostArticleWithImageByUnity {
    UnitySendMessage("CafeSdkController", "executeCaptureScreenshopAndPostArticle", "capture");
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
    
    void _ExecuteNotice() {
        [vc executeNotice];
    }
    
    void _ExecuteEvent() {
        [vc executeEvent];
    }
    
    void _ExecuteMenu() {
        [vc executeMenu];
    }
    
    void _ExecuteProfile() {
        [vc executeProfile];
    }
    
    void _ExecuteArticle(int articleId) {
        [vc executeArticle:articleId];
    }
    
    void _SyncGameUserId(const char* gameUserId) {
        [vc syncGameUserId:CreateNSString(gameUserId)];
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
    
    void _ExecuteEtc() {
        [vc executeEtc];
    }
    
    void _ShowMessageToast(const char* message) {
        [vc executeShowMessageToast:CreateNSString(message)];
    }
    
    void _SetSDKDidLoadDelegate(GLSDKDidLoadDelegate glSDKDidLoadDelegate) {
        vc.glSDKDidLoadDelegate = glSDKDidLoadDelegate;
    }
    void _SetSDKDidUnLoadDelegate(GLSDKDidUnLoadDelegate glSDKDidUnLoadDelegate) {
        vc.glSDKDidUnLoadDelegate = glSDKDidUnLoadDelegate;
    }
    void _SetSDKJoinedCafeDelegate(GLSDKJoinedCafeDelegate glSDKJoinedCafeDelegate) {
        vc.glSDKJoinedCafeDelegate = glSDKJoinedCafeDelegate;
    }
    void _SetSDKPostedArticleAtMenuDelegate(GLSDKPostedArticleAtMenuDelegate glSDKPostedArticleAtMenuDelegate) {
        vc.glSDKPostedArticleAtMenuDelegate = glSDKPostedArticleAtMenuDelegate;
    }
    void _SetSDKPostedCommentAtArticleDelegate(GLSDKPostedCommentAtArticleDelegate glSDKPostedCommentAtArticleDelegate) {
        vc.glSDKPostedCommentAtArticleDelegate = glSDKPostedCommentAtArticleDelegate;
    }
    void _SetSDKWidgetPostAriticleWithImageCallback(GLSDKWidgetPostAriticleWithImageDelegate glSDKWidgetPostAriticleWithImageDelegate) {
        vc.glSDKWidgetPostAriticleWithImageDelegate = glSDKWidgetPostAriticleWithImageDelegate;
    }
    void _SaveCameraRoll(const char *fileName)
    {
        NSString *convertFileName = CreateNSString(fileName);
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *documentsDirectory = [paths objectAtIndex:0];
        NSString *filePath = [NSString stringWithFormat:@"%@/%@", documentsDirectory,convertFileName];
        UIImage *image = [[UIImage alloc] initWithContentsOfFile:filePath];
        
        UIImageWriteToSavedPhotosAlbum(image, nil, nil, nil);
        
    }
    void _ExecuteCaptureScreenshopAndPostArticle() {
        [vc ncWidgetPostArticleWithImageByUnity];
    }
    
    void _SetSDKDidVoteAtArticleDelegate(GLSDKDidVoteAtArticleDelegate glSDKDidVoteAtArticleDelegate) {
        vc.glSDKDidVoteAtArticleDelegate = glSDKDidVoteAtArticleDelegate;
    }
    
    void _StartWidget() {
        [vc startWidget];
    }
    
    void _StopWidget() {
        [vc stopWidget];
    }
    
    void _SetUseWidgetVideoRecord(BOOL useVideo) {
        [vc setUseWidgetVideoRecord:useVideo];
    }
    
    void _SetShowWidgetWhenUnloadSDK(BOOL useWidget) {
        [vc setShowWidgetWhenUnloadSDK:useWidget];
    }
}
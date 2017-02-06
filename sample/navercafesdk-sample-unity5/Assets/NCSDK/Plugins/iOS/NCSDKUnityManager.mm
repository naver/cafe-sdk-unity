#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import <NaverCafeSDK/NCSDKManager.h>
#import <NaverCafeSDK/NCSDKStatistics.h>
#import <NaverCafeSDK/NCSDKLoginManager.h>

typedef void (*GLSDKDidLoadDelegate)();
typedef void (*GLSDKDidUnLoadDelegate)();
typedef void (*GLSDKJoinedCafeDelegate)();
typedef void (*GLSDKPostedArticleAtMenuDelegate)(NSInteger menuId, NSInteger imageCount, NSInteger videoCount);
typedef void (*GLSDKPostedCommentAtArticleDelegate)(NSInteger articleId);
typedef void (*GLSDKWidgetPostAriticleWithImageDelegate)();
typedef void (*GLSDKDidVoteAtArticleDelegate)(NSInteger articleId);
typedef void (*GLNaverIdLoginDelelgate)();
typedef void (*GLNaverIdGetProfileDelegate)(NSString *profileResult);

@interface GLinkViewController : UIViewController <NCSDKManagerDelegate, NCSDKLoginManagerDelegate>
@property (nonatomic, strong) UIView *mainView;
@property (nonatomic, strong) UIViewController *mainViewcontroller;

@property (nonatomic, assign) GLSDKDidLoadDelegate glSDKDidLoadDelegate;
@property (nonatomic, assign) GLSDKDidUnLoadDelegate glSDKDidUnLoadDelegate;
@property (nonatomic, assign) GLSDKJoinedCafeDelegate glSDKJoinedCafeDelegate;
@property (nonatomic, assign) GLSDKPostedArticleAtMenuDelegate glSDKPostedArticleAtMenuDelegate;
@property (nonatomic, assign) GLSDKPostedCommentAtArticleDelegate glSDKPostedCommentAtArticleDelegate;
@property (nonatomic, assign) GLSDKWidgetPostAriticleWithImageDelegate glSDKWidgetPostAriticleWithImageDelegate;
@property (nonatomic, assign) GLSDKDidVoteAtArticleDelegate glSDKDidVoteAtArticleDelegate;
@property (nonatomic, assign) GLNaverIdLoginDelelgate glNaverIdLoginDelelgate;
@property (nonatomic, assign) GLNaverIdGetProfileDelegate glNaverIdGetProfileDelegate;

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
    [[NCSDKManager getSharedInstance] setOrientationIsLandscape:YES];
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

- (void)executeArticleWithArticleId:(NSUInteger)articleId  {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewControllerWithArticleId:articleId];
}

- (void)syncGameUserId:(NSString *)gameUserId {
    [[NCSDKManager getSharedInstance] syncGameUserId:gameUserId];
}

- (void)executeArticle {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentArticlePostViewController];
}

- (void)executeArticleForImageWithFilePath:(NSString *)filePath {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentArticlePostViewControllerWithType:kGLArticlePostTypeImage
                                                                      filePath:filePath];
}

- (void)executeArticleForVideoWithFilePath:(NSString *)filePath {
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentArticlePostViewControllerWithType:kGLArticlePostTypeVideo
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

- (void)setGLinkGlobalInfoWithNeoIdConsumerKey:(NSString *)neoIdConsumerKey
                                andCommunityId:(NSInteger)communityId
                                andChannelCode:(NSString *)channelCode{
    
    [[NCSDKManager getSharedInstance] setNeoIdConsumerKey:neoIdConsumerKey
                                              communityId:communityId];
    
    [[NCSDKManager getSharedInstance] setChannelCode:channelCode];
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
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] startWidget];
}

- (void)stopWidget {
    [[NCSDKManager getSharedInstance] stopWidget];
}

- (NSString *)currentChannelCode {
    return [[NCSDKManager getSharedInstance] currentChannelCode];
}

- (void)sendNewUser:(NSString *)gameUserId andMarket:(NSString *)market {
    [NCSDKStatistics sendNewUser:gameUserId andMarket:market];
}

- (void)sendPayUser:(NSString *)gameUserId andPay:(double)pay andProductCode:(NSString *)productCode andCurrency:(NSString *)currency andMarket:(NSString *)market {
    [NCSDKStatistics sendPayUser:gameUserId andPay:pay andProductCode:productCode andCurrency:currency andMarket:market];
}

- (void)sendPageVisit:(NSString *)gameUserId {
    [NCSDKStatistics sendPageVisit:gameUserId];
}

- (void)setChannelCode:(NSString *)code {
    [[NCSDKManager getSharedInstance] setChannelCode:code];
}

- (void)setThemeColor:(NSString *)themeColorCSSString andTabBackgroundColor:(NSString *)backgroundCSSString {
    if (backgroundCSSString.length == 0) {
        backgroundCSSString = @"#44484e";
    }
    
    [[NCSDKManager getSharedInstance] setThemeColor:themeColorCSSString andTabBackgroundColor:backgroundCSSString];
}

- (void)initNaverIdLoginWithClientId:(NSString *)clientId andCleitnSecret:(NSString *)clientSecret {
    NSLog(@"%@ %@",clientId, clientSecret);
    [[NCSDKLoginManager getSharedInstance] naverIdInitWithClientId:clientId andSecretId:clientSecret];
}

- (void)naverIdLogin {
    [self setGLRootViewController];
    [[NCSDKLoginManager getSharedInstance] setNcSDKLoginManagerDelegate:self];
    [[NCSDKLoginManager getSharedInstance] setIsNaverAppOauthEnable:NO];
    [[NCSDKLoginManager getSharedInstance] setIsInAppOauthEnable:YES];
    [[NCSDKLoginManager getSharedInstance] naverIdLogin];
}

- (void)naverIdLogout {
    [[NCSDKLoginManager getSharedInstance] naverIdLogout];
}

- (BOOL)isNaverIdLogin {
    return [[NCSDKLoginManager getSharedInstance] isNaverIdLogin];
}

- (void)getNaverIdProfile {
    [[NCSDKLoginManager getSharedInstance] getNaverIdProfile];
}

- (void)setWidgetStartPosition:(BOOL)isLeft andY:(NSInteger)y {
    [[NCSDKManager getSharedInstance] setWidgetStartPosition:isLeft andY:y];
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
- (void)ncSDKPostedArticleAtMenu:(NSInteger)menuId attachImageCount:(NSInteger)imageCount attachVideoCount:(NSInteger)videoCount {
    if (self.glSDKPostedArticleAtMenuDelegate) {
        self.glSDKPostedArticleAtMenuDelegate(menuId, imageCount, videoCount);
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
    [self executeArticle];
}

#pragma mark - Naver Login
- (void)ncSDKLogin {
    if (self.glNaverIdLoginDelelgate) {
        self.glNaverIdLoginDelelgate();
    }
}

- (void)ncSDKGetProfile:(NSString *)result {
    if (self.glNaverIdGetProfileDelegate) {
        self.glNaverIdGetProfileDelegate(result);
    }
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
    char* CreateNSStrintToChar (const char* string)
    {
        if (string == NULL)
            return NULL;
        char* res = (char*) malloc (strlen(string) + 1 );
        strcpy (res, string);
        return res;
    }
    
    GLinkViewController *vc = [[GLinkViewController alloc] init];
    
    void _InitGLink(const char* NaverLoginClientId, const char* NaverLoginClientSecret, int cafeId ) {
        [vc setGLinkInfoWithNaverLoginClientId:CreateNSString(NaverLoginClientId)andNaverLoginClientSecret:CreateNSString(NaverLoginClientSecret)
                                     andCafeId:cafeId];
        //        [vc setChannelCode:@"ko"];
    }
    
    void _InitGLinkForGlobal(const char* neoIdConsumerKey, int communityId, const char* channelCode) {
        [vc setGLinkGlobalInfoWithNeoIdConsumerKey:CreateNSString(neoIdConsumerKey) andCommunityId:communityId andChannelCode:CreateNSString(channelCode)];
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
        [vc executeArticleWithArticleId:articleId];
    }
    
    void _SyncGameUserId(const char* gameUserId) {
        [vc syncGameUserId:CreateNSString(gameUserId)];
    }
    
    void _ExecuteArticlePost() {
        [vc executeArticle];
    }
    
    void _ExecuteArticlePostWithImage(const char* filePath) {
        [vc executeArticleForImageWithFilePath:CreateNSString(filePath)];
    }
    
    void _ExecuteArticlePostWithVideo(const char* filePath) {
        [vc executeArticleForVideoWithFilePath:CreateNSString(filePath)];
        
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
    
    const char* _GetCurrentChannelCode() {
        return CreateNSStrintToChar([[vc currentChannelCode] UTF8String]);
    }
    
    void _SendNewUser(const char* gameUserId, const char* market) {
        [vc sendNewUser:CreateNSString(gameUserId) andMarket:CreateNSString(market)];
    }
    
    void _SendPayUser(const char *gameUserId, double pay, const char *productCode, const char *currency, const char *market) {
        [vc sendPayUser:CreateNSString(gameUserId) andPay:pay andProductCode:CreateNSString(productCode) andCurrency:CreateNSString(currency) andMarket:CreateNSString(market)];
    }
    
    void _SendPageVisit(const char* gameUserId) {
        [vc sendPageVisit:CreateNSString(gameUserId)];
    }
    
    void _SetChannelCode(const char* code) {
        [vc setChannelCode:CreateNSString(code)];
    }
    
    void _SetThemeColor(const char* themeColorCSSString, const char* backgroundCSSString) {
        [vc setThemeColor:CreateNSString(themeColorCSSString) andTabBackgroundColor:CreateNSString(backgroundCSSString)];
    }
    
    void _InitNaverLogin(const char* clientId, const char* clientSecret) {
        [vc initNaverIdLoginWithClientId:CreateNSString(clientId) andCleitnSecret:CreateNSString(clientSecret)];
    }
    
    void _Login() {
        [vc naverIdLogin];
    }
    
    void _Logout() {
        [vc naverIdLogout];
    }
    
    bool _IsLogin() {
        return [vc isNaverIdLogin];
    }
    
    void _GetProfile() {
        [vc getNaverIdProfile];
    }
    
    void _SetNaverIdLoginCallback(GLNaverIdLoginDelelgate glNaverIdLoginDelelgate) {
        vc.glNaverIdLoginDelelgate = glNaverIdLoginDelelgate;
    }
    
    void _SetNaverIdGetProfileDelegate(GLNaverIdGetProfileDelegate glNaverIdGetProfileDelegate) {
        vc.glNaverIdGetProfileDelegate = glNaverIdGetProfileDelegate;
    }
    
    void _SetWidgetStartPosition(BOOL isLeft, int positionY) {
        [vc setWidgetStartPosition:isLeft andY:positionY];
    }
}

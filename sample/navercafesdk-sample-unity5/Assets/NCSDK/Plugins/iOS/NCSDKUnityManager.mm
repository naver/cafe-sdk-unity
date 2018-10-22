#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import <NaverCafeSDK/NCSDKManager.h>
#import <NaverCafeSDK/NCSDKLoginManager.h>
#import <NaverCafeSDK/NCSDKStatistics.h>
#import <NaverCafeSDK/NCNaverLoginManager.h>
#import <NaverCafeSDK/NCSDKRecordManager.h>

typedef void (*GLSDKDidLoadDelegate)();
typedef void (*GLSDKDidUnLoadDelegate)();
typedef void (*GLSDKJoinedCafeDelegate)();
typedef void (*GLSDKPostedArticleAtMenuDelegate)(NSInteger menuId, NSInteger imageCount, NSInteger videoCount);
typedef void (*GLSDKPostedCommentAtArticleDelegate)(NSInteger articleId);
typedef void (*GLSDKWidgetPostAriticleWithImageDelegate)();
typedef void (*GLSDKDidVoteAtArticleDelegate)(NSInteger articleId);
typedef void (*GLSDKAppSchemeBannerDelegate)(const char *appScheme);
typedef void (*GLNaverIdLoginDelelgate)();
typedef void (*GLNaverIdGetProfileDelegate)(const char *profileResult);
typedef void (*GLSDKRecordStartDelegate)();
typedef void (*GLSDKRecordErrorDelegate)(const char *errMsg);
typedef void (*GLSDKRecordFinishDelegate)();
typedef void (*GLSDKRecordFinishWithPreviewDelegate)();
typedef void (*GLSDKDidEndStreamingLiveViewCountDelegate)(NSInteger viewCount, NSInteger likeCount);
typedef void (*GLSDKDidEndWatchingLiveSecondsDelegate)(NSInteger seconds);

@interface GLinkViewController : UIViewController <NCSDKManagerDelegate, NCNaverLoginManagerDelegate, NCSDKRecordManagerDelegate>
@property (nonatomic, strong) UIView *mainView;
@property (nonatomic, strong) UIViewController *mainViewcontroller;

@property (nonatomic, assign) GLSDKDidLoadDelegate glSDKDidLoadDelegate;
@property (nonatomic, assign) GLSDKDidUnLoadDelegate glSDKDidUnLoadDelegate;
@property (nonatomic, assign) GLSDKJoinedCafeDelegate glSDKJoinedCafeDelegate;
@property (nonatomic, assign) GLSDKPostedArticleAtMenuDelegate glSDKPostedArticleAtMenuDelegate;
@property (nonatomic, assign) GLSDKPostedCommentAtArticleDelegate glSDKPostedCommentAtArticleDelegate;
@property (nonatomic, assign) GLSDKWidgetPostAriticleWithImageDelegate glSDKWidgetPostAriticleWithImageDelegate;
@property (nonatomic, assign) GLSDKDidVoteAtArticleDelegate glSDKDidVoteAtArticleDelegate;
@property (nonatomic, assign) GLSDKAppSchemeBannerDelegate glSDKAppSchemeBannerDelegate;
@property (nonatomic, assign) GLNaverIdLoginDelelgate glNaverIdLoginDelelgate;
@property (nonatomic, assign) GLNaverIdGetProfileDelegate glNaverIdGetProfileDelegate;
@property (nonatomic, assign) GLSDKRecordStartDelegate glSDKRecordStartDelegate;
@property (nonatomic, assign) GLSDKRecordErrorDelegate glSDKRecordErrorDelegate;
@property (nonatomic, assign) GLSDKRecordFinishDelegate glSDKRecordFinishDelegate;
@property (nonatomic, assign) GLSDKRecordFinishWithPreviewDelegate glSDKRecordFinishWithPreviewDelegate;
@property (nonatomic, assign) GLSDKDidEndStreamingLiveViewCountDelegate glSDKDidEndStreamingLiveViewCountDelegate;
@property (nonatomic, assign) GLSDKDidEndWatchingLiveSecondsDelegate glSDKDidEndWatchingLiveSecondsDelegate;

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
    [[NCSDKManager getSharedInstance] setOrientationIsLandscape:NO];
}
- (void)executeGlink{
    [self setGLRootViewController];
    [[NCSDKManager getSharedInstance] presentMainViewController];
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

- (void)setGLinkGlobalInfoWithConsumerKey:(NSString *)globalConsumerKey
                     globalConsumerSecret:(NSString *)globalConsumerSecret
                        globalCommunityNo:(NSInteger)globalCommunityNo
                           globalLoungeNo:(NSInteger)globalLoungeNo {

    [[NCSDKManager getSharedInstance] setGlobalConsumerKey:globalConsumerKey
                                      globalConsumerSecret:globalConsumerSecret
                                         globalCommunityNo:globalCommunityNo
                                            globalLoungeNo:globalLoungeNo];
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
    [[NCNaverLoginManager getSharedInstance] naverIdInitWithClientId:clientId andSecretId:clientSecret];
}

- (void)naverIdLogin {
    [self setGLRootViewController];
    [[NCNaverLoginManager getSharedInstance] setNcNaverLoginManagerDelegate:self];
    [[NCNaverLoginManager getSharedInstance] naverIdLogin];
}

- (void)naverIdLogout {
    [[NCNaverLoginManager getSharedInstance] naverIdLogout];
}

- (BOOL)isNaverIdLogin {
    return [[NCNaverLoginManager getSharedInstance] isNaverIdLogin];
}

- (void)getNaverIdProfile {
    [[NCNaverLoginManager getSharedInstance] getNaverIdProfile];
}

- (void)setWidgetStartPosition:(BOOL)isLeft andY:(NSInteger)y {
    [[NCSDKManager getSharedInstance] setWidgetStartPosition:isLeft andY:y];
}

- (void)setUseWidgetScreenShot:(BOOL)use {
    [[NCSDKManager getSharedInstance] setUseWidgetScreenShot:use];
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

- (void)ncSDKAppSchemeBanner:(NSString *)appScheme {
    const char* res = [appScheme UTF8String];

    if (self.glSDKAppSchemeBannerDelegate) {
        self.glSDKAppSchemeBannerDelegate(res);
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
- (void)ncSDKLoginCallback {
    if (self.glNaverIdLoginDelelgate) {
        self.glNaverIdLoginDelelgate();
    }
}

- (void)ncSDKGetProfile:(NSString *)result {
    const char* res = [result UTF8String];

    if (self.glNaverIdGetProfileDelegate) {
        self.glNaverIdGetProfileDelegate(res);
    }
}


#pragma mark - Video Record
- (void)startRecord {
    _mainViewcontroller = UnityGetGLViewController();
    [[NCSDKRecordManager getSharedInstance] setNcSDKRecordDelegate:self];
    [[NCSDKRecordManager getSharedInstance] setBaseViewController:_mainViewcontroller];
    [[NCSDKRecordManager getSharedInstance] startRecord];
}

- (void)stopRecord {
    [[NCSDKRecordManager getSharedInstance] stopRecord];
}

- (void)ncSDKRecordStart {
    if (self.glSDKRecordStartDelegate) {
        self.glSDKRecordStartDelegate();
    }
}

- (void)ncSDKRecordError:(NSString *)msg {
    const char* res = [msg UTF8String];

    if (self.glSDKRecordErrorDelegate) {
        self.glSDKRecordErrorDelegate(res);
    }
}

- (void)ncSDKRecordFinish {
    if (self.glSDKRecordFinishDelegate) {
        self.glSDKRecordFinishDelegate();
    }
}

- (void)ncSDKRecordFinishWithPreview {
    if (self.glSDKRecordFinishWithPreviewDelegate) {
        self.glSDKRecordFinishWithPreviewDelegate();
    }
}

#pragma mark - Live
- (void)ncSDKDidEndStreamingLiveViewCount:(NSInteger)viewCount
                                likeCount:(NSInteger)likeCount {

    if (self.glSDKDidEndStreamingLiveViewCountDelegate) {
        self.glSDKDidEndStreamingLiveViewCountDelegate(viewCount, viewCount);
    }

}

- (void)ncSDKDidEndWatchingLiveSeconds:(NSInteger)seconds {
    if (self.glSDKDidEndWatchingLiveSecondsDelegate) {
        self.glSDKDidEndWatchingLiveSecondsDelegate(seconds);
    }
}

@end

// Converts C style string to NSString
NSString* NCSDKCreateNSString (const char* string) {
    if (string) {
        return [NSString stringWithUTF8String:string];
    } else {
        return [NSString stringWithUTF8String:""];
        [UIImage imageWithCGImage:nil];
    }
}
extern "C" {
    char* NCSDKCreateNSStrintToChar (const char* string)
    {
        if (string == NULL)
            return NULL;
        char* res = (char*) malloc (strlen(string) + 1 );
        strcpy (res, string);
        return res;
    }

    GLinkViewController *vc = [[GLinkViewController alloc] init];

    void _InitGLink(const char* NaverLoginClientId, const char* NaverLoginClientSecret, int cafeId ) {
        [vc setGLinkInfoWithNaverLoginClientId:NCSDKCreateNSString(NaverLoginClientId)andNaverLoginClientSecret:NCSDKCreateNSString(NaverLoginClientSecret)
                                     andCafeId:cafeId];
    }

    void _InitGLinkForGlobal(const char* globalConsumerKey, const char* globalConsumerSecret, int globalCommunityNo, int globalLoungeNo) {
        [vc setGLinkGlobalInfoWithConsumerKey:NCSDKCreateNSString(globalConsumerKey) globalConsumerSecret:NCSDKCreateNSString(globalConsumerSecret) globalCommunityNo:globalCommunityNo globalLoungeNo:globalLoungeNo];
    }

    void _ExecuteMain(){
        [vc executeGlink];
    }

    void _ExecuteArticle(int articleId) {
        [vc executeArticleWithArticleId:articleId];
    }

    void _SyncGameUserId(const char* gameUserId) {
        [vc syncGameUserId:NCSDKCreateNSString(gameUserId)];
    }

    void _ExecuteArticlePost() {
        [vc executeArticle];
    }

    void _ExecuteArticlePostWithImage(const char* filePath) {
        [vc executeArticleForImageWithFilePath:NCSDKCreateNSString(filePath)];
    }

    void _ExecuteArticlePostWithVideo(const char* filePath) {
        [vc executeArticleForVideoWithFilePath:NCSDKCreateNSString(filePath)];

    }

    void _ExecuteEtc() {
        [vc executeEtc];
    }

    void _ShowMessageToast(const char* message) {
        [vc executeShowMessageToast:NCSDKCreateNSString(message)];
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
        NSString *convertFileName = NCSDKCreateNSString(fileName);
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *documentsDirectory = [paths objectAtIndex:0];
        NSString *filePath = [NSString stringWithFormat:@"%@/%@", documentsDirectory,convertFileName];
        UIImage *image = [[UIImage alloc] initWithContentsOfFile:filePath];

        UIImageWriteToSavedPhotosAlbum(image, nil, nil, nil);

    }

    void _SetSDKDidVoteAtArticleDelegate(GLSDKDidVoteAtArticleDelegate glSDKDidVoteAtArticleDelegate) {
        vc.glSDKDidVoteAtArticleDelegate = glSDKDidVoteAtArticleDelegate;
    }

    void _SetSDKAppSchemeBannerDelegate(GLSDKAppSchemeBannerDelegate glSDKAppSchemeBannerDelegate) {
        vc.glSDKAppSchemeBannerDelegate = glSDKAppSchemeBannerDelegate;
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
        return NCSDKCreateNSStrintToChar([[vc currentChannelCode] UTF8String]);
    }

    void _SendNewUser(const char* gameUserId, const char* market) {
        [vc sendNewUser:NCSDKCreateNSString(gameUserId) andMarket:NCSDKCreateNSString(market)];
    }

    void _SendPayUser(const char *gameUserId, double pay, const char *productCode, const char *currency, const char *market) {
        [vc sendPayUser:NCSDKCreateNSString(gameUserId) andPay:pay andProductCode:NCSDKCreateNSString(productCode) andCurrency:NCSDKCreateNSString(currency) andMarket:NCSDKCreateNSString(market)];
    }

    void _SendPageVisit(const char* gameUserId) {
        [vc sendPageVisit:NCSDKCreateNSString(gameUserId)];
    }

    void _SetChannelCode(const char* code) {
        [vc setChannelCode:NCSDKCreateNSString(code)];
    }

    void _SetThemeColor(const char* themeColorCSSString, const char* backgroundCSSString) {
        [vc setThemeColor:NCSDKCreateNSString(themeColorCSSString) andTabBackgroundColor:NCSDKCreateNSString(backgroundCSSString)];
    }

    void _InitNaverLogin(const char* clientId, const char* clientSecret) {
        [vc initNaverIdLoginWithClientId:NCSDKCreateNSString(clientId) andCleitnSecret:NCSDKCreateNSString(clientSecret)];
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

    void _SetUseWidgetScreenShot(BOOL use) {
        [vc setUseWidgetScreenShot:use];
    }

    void _StartRecord() {
        [vc startRecord];
    }

    void _StopRecord() {
        [vc stopRecord];
    }

    void _SetSDKRecordStartDelegate(GLSDKRecordStartDelegate glSDKRecordStartDelegate) {
        vc.glSDKRecordStartDelegate = glSDKRecordStartDelegate;
    }

    void _SetSDKRecordErrorDelegate(GLSDKRecordErrorDelegate glSDKRecordErrorDelegate) {
        vc.glSDKRecordErrorDelegate = glSDKRecordErrorDelegate;
    }

    void _SetSDKRecordFinishDelegate(GLSDKRecordFinishDelegate glSDKRecordFinishDelegate) {
        vc.glSDKRecordFinishDelegate = glSDKRecordFinishDelegate;
    }

    void _SetSDKRecordFinishWithPreviewDelegate(GLSDKRecordFinishWithPreviewDelegate glSDKRecordFinishWithPreviewDelegate) {
        vc.glSDKRecordFinishWithPreviewDelegate = glSDKRecordFinishWithPreviewDelegate;
    }

    void _SetSDKDidEndStreamingLiveViewCountDelegate(GLSDKDidEndStreamingLiveViewCountDelegate glSDKDidEndStreamingLiveViewCountDelegate) {
        vc.glSDKDidEndStreamingLiveViewCountDelegate = glSDKDidEndStreamingLiveViewCountDelegate;
    }

    void _SetSDKDidEndWatchingLiveSecondsDelegate(GLSDKDidEndWatchingLiveSecondsDelegate glSDKDidEndWatchingLiveSecondsDelegate) {
        vc.glSDKDidEndWatchingLiveSecondsDelegate = glSDKDidEndWatchingLiveSecondsDelegate;
    }
}


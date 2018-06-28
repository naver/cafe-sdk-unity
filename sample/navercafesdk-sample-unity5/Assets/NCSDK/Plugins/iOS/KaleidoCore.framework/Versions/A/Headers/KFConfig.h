//
//  KFConfig.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 4..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"

typedef NS_ENUM(NSUInteger, KFEnvironment) {
    KFEnvironmentDev = 0,
    KFEnvironmentReal = 1
};

typedef NS_ENUM(NSUInteger, KFLogLevel) {
    KFLogLevelTrace = 0,
    KFLogLevelDebug = 1,
    KFLogLevelInfo = 2,
    KFLogLevelWarn = 3,
    KFLogLevelError = 4,
    KFLogLevelCritical = 5
};

/**
 * Config manages configuration of Kaleido framework
 * Be aware that every configuration setting must be performed prior to anything in the kaleido library
 * Otherwise, application can encounter unexpected behavior
 *
 */
EXPORT
@interface KFConfig : NSObject

/**
 * Sets Environment that Kaleido framework runs.
 *
 * To see avaialble values refer to KFEnvironment
 * DEV is default
 *
 * @param env a value of KFEnvironment
 */
+ (void)setEnvironment:(KFEnvironment)env;

/**
 * Returns string for working directory;
 * 
 * @returns a directory stirng working currently
 */
+ (NSString *)getWorkingDir;

/**
 * Sets working directory
 *
 * @returns true is working directory is successfully set, false otherwise
 */
+ (bool)setupWorkingDir;

/**
 * Returns 'true' if console log is enabled
 *
 * Console log is disabled by default
 */
+ (bool)getConsoleLog;

/**
 * Turns on or turns off console log
 *
 * @param enable turns on console log if 'true', turns off otherwise
 */
+ (void)setConsoleLog:(bool)enable;

/**
 * Returns 'true' if file log is enabled
 *
 * File log is enabled by default
 */
+ (bool)getFileLog;

/**
 * Turns on or turns off file log
 *
 * @param enable turns on file log if 'true', turns off otherwise
 * @param path sets log filepath if enable is 'true', otherwise filename will be ignored
 */
+ (void)setFileLog:(bool)enable path:(NSString *)path;

/**
 * Returns 'true' if network log is enabled
 *
 * network log is disabled by default
 */
+ (bool)getNetworkLog;

/**
 * Turns on or turns off network log
 *
 * @param enable turns on network log if enable is 'true', turns off otherwise
 */
+ (void)setNetworkLog:(bool)enable;

/**
 * Sets log level
 *
 * Default LogLevel is INFO
 * @param logLevel To see avaiable log levels, refer to Config LogLevel
 */
+ (void)setLogLevel:(KFLogLevel)logLevel;

/**
 * Returns current version of kaleido in string
 */
+ (NSString *)getProtocolVersion;

/**
 * Returns string for API Gateway partner name.
 *
 * @returns API Gateway partner name.
 */
+ (NSString *)getApiGwPartner;

/**
 * Sets API Gateway partner name.
 *
 * @param aName API Gateway partner name.
 */
+ (void)setApiGwPartner:(NSString*) aName;

/**
 * Returns 'true' if nelo2 log is enabled
 *
 * <p>Nelo2 log is enabled by default
 */
+ (bool)isNelo2LogEnabled;

/**
 * Turns on or turns off nelo2 log
 *
 * @param aEnable turns on nelo2 log if 'true', turns off otherwise
 */
+ (void)enableNelo2Log:(bool)aEnable;

@end

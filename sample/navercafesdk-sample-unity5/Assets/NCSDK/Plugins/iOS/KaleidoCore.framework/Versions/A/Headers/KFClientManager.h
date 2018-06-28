//
//  KFClientManager.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 13..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"

@class KFClient;
@class KFAuthentication;

EXPORT
@interface KFClientManager : NSObject

/**
 * Creates or reloads Client with given authentication, workspace key, localDatabaseName, localDatabasePassword.
 * If KaleidoClient has never been created with the given service ID of the authentication and a workspace, it creates a new KaleidoClient instance.
 * If KaleidoClient with that key exists in the given workspace, that KaleidoClient will be reloaded.
 * a new database file will be created by a combination of workspaceKey and localDatabaseName and be encrypted by the localDatabasePassword.
 * Local database stores data of users such as client, datatype and activity of datatype.
 * Local database name must be unique per User.
 * Using different encryption key per user is a recommended way.
 * After database file creation, a new KaleidoClient instance will be created.
 *
 * @param aAuth	The authentication information for the workspace. can't be null
 * @param aWorkspaceKey The workspace key where the KaleidoClient belongs. can't be an empty string
 * @param aLocalDatabaseName A key consists of local database filename. can't be an empty string
 * @param aLocalDatabasePassword A password of Database. database file is created based on workspaceKey and localDatabaseName
 *
 * @return KFClient A KaleidoClient instance. can be nil if request for acquiring KaleidoClient has failed for any reason or has invalid authentication.
 */
+ (nullable KFClient *)getClient:(nonnull KFAuthentication *)aAuth workspaceKey:(nonnull NSString *)aWorkspaceKey localDatabaseName:(nonnull NSString *)aLocalDatabaseName localDatabasePassword:(nonnull NSString*)aLocalDatabasePassword;

/**
 * Closes and all KaleidoClients backed by KaleidoManager and drops ownership of them.
 * Also, closes resources such as File handle used by Logger
 * Be Ware that all KaleidoClient::Ptr instances must drop ownership before calling this function or crash can occur
 *
 * @return true if successful, false if at least one of the clients are owned by outside KaleidoManager
 */
+ (bool) dropAllClient;

/**
 * NOTE. This method should not be called unless you are in development phase
 *
 * Deletes all stored data of KaleidoClient with given key
 * If given KaleidoClient is in use, request for deleting KaleidoClient will be ignored
 *
 * @param aWorkspaceKey Key of workspace containg the KaleidoClient. can't be an empty string
 * @param aLocalDatabaseName A key consists of local database filename. can't be an empty string
 * @return true if KaleidoClient is successfully deleted, false otherwise
 */
+ (bool)deleteLocalClient:(nonnull NSString *)aWorkspaceKey localDatabaseName:(nonnull NSString *)aLocalDatabaseName;

@end

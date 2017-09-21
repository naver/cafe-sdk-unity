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
 * Creates or reloads Client with given authentication, workspace key, kaleido client key, database password.
 * If KaleidoClient has never been created with the given service ID of the authentication and a workspace, it creates a new KaleidoClient instance.
 * If KaleidoClient with that key exists in the given workspace, that KaleidoClient will be reloaded.
 *
 * @param aAuth	The authentication information for the workspace. can't be null
 * @param aWorkspaceKey The workspace key where the KaleidoClient belongs. can't be an empty string
 * @param aClientKey The local key of KaleidoClient. can't be an empty string
 * @param aDatabasePassword The password is used to encrypt database file.
 *
 * @return KFClient A KaleidoClient instance. can be nil if request for acquiring KaleidoClient has failed for any reason
 */
+ (nonnull KFClient *)getClient:(nonnull KFAuthentication *)aAuth workspaceKey:(nonnull NSString *)aWorkspaceKey clientKey:(nonnull NSString *)aClientKey databasePassword:(nonnull NSString*)aDatabasePassword;

/**
 * Returns the list of keys of KFClient s for given workspace.
 *
 * @param aWorkspaceKey The workspace key where the list of Kaleido keys will be obtained. can't be an empty string
 * @return The list of keys of KaleidoClients belonging to the given workspace. Empty list if one of the arguments is either empty or null
 */
+ (nonnull NSArray *)getLocalClientsInWorkspace:(nonnull NSString *)aWorkspaceKey;

/**
 * NOTE. This method should not be called unless you are in development phase
 *
 * Deletes all stored data of KaleidoClient with given key
 * If given KaleidoClient is in use, request for deleting KaleidoClient will be ignored
 *
 * @param aWorkspaceKey Key of workspace containg the KaleidoClient. can't be an empty string
 * @param aClientKey clientKey of KaleidoClient to be deleted. can't be an empty string
 * @return true if KaleidoClient is successfully deleted, false otherwise
 */
+ (bool)deleteLocalClient:(nonnull NSString *)aWorkspaceKey clientKey:(nonnull NSString *)aClientKey;

@end

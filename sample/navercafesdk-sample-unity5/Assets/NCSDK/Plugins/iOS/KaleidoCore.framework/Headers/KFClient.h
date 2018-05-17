//
//  KFClient.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 5..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFData.h"
#import "KFOption.h"
#import "KFUser.h"
#import "KFUserQueryResult.h"

typedef NS_ENUM(NSUInteger, KFSyncType) {
    KFSyncTypeRealtime = 0,
    KFSyncTypeManual = 1
};

typedef NS_ENUM(NSUInteger, KFClientState) {
    KFClientStateOnline = 0,
    KFClientStateOffline = 1
};

typedef NS_ENUM(NSUInteger, KFClientResult) {
    KFClientResultOK = 0,
    KFClientResultInvalidSyncAgent = 1,
    KFClientResultInvalidUUID = 2,

    /**
     * This may happen When application developers remove KaleidoClient from KaleidoCloud manually and forget to remove local database file.
     * If you come to this situation, terminate application and delete local database file.
     */
    KFClientResultClientNumberNotMatch = 3,

    /**
     * User does not own KFClient
     */
    KFClientResultOwnerNotMatched = 4,

    /**
     * User explicitly closed KFClient.
     * Note that closed KFClient is not reusable.
     */
    KFClientResultClosed = 5,

    /**
     * Failed to update KFClient.
     * KaleidoCloud may approved KFClient but due to a local Database error, client still remains Unauthorized.
     */
    KFClientResultDatabaseError = 1000,

    /**
     * Request failed because of unstable network
     */
    KFClientResultNetworkError = 2000
};

@class KFAuthentication;

/**
 * A KFClient attaches multiple KFData s, and is responsible for storing them in local repository and synchronizes with the Kaleido Server.
 *
 * KFClient enables various datatypes of KFData to be created and attached.
 * If a Kaleido client locally creates KFData , you can use that datatype as if you use datatypes in C++ such as std::map and std::list.
 * A locally created KFData needs to be authorized by the Kaleido Cloud, and KFClient requests to the Kaleido Cloud to authorize it.
 * After authorizing datatypes, other Kaleido Clients can attach them.
 * KFClient can be obtained by KFClientManager with a client key which is locally unique.
 * KFClient can be in either state : connected or disconnected.
 * KFClient is responsible for connecting to the Kaleido Cloud, and exchanges operations.
 * KFClients are also responsible for storing the KFDatas in local storage.
 * KFClient stores the attachted(or created) KFDatas so that they are used when the client gets restarted.
 * When KFClient is connected, you can designate how to synchronize with Kaleido Cloud by AutoSync and WebSocketPushService.
 * If a client is disconnected, it cannot exchange operations with Kaleido Cloud.
 */
EXPORT
@interface KFClient : NSObject

@property(nonatomic, strong) KFAuthentication * _Nonnull mAuth;

/**
 * Synchronous version of open()
 * Blocks thread until open finishes
 *
 * @param syncType value of KFSyncType
 * @returns KFConnectResult refer to KFConnectResult
 */
- (KFClientResult)open:(KFSyncType)syncType;

/**
 * Activate KFClient asynchronously
 * If Multiple threads call open(), all threads will get same notification
 *
 * @param syncType value of KFSyncType
 * @param block a callback method to get notified whether client activation has succeeded or not
 */
- (void)open:(KFSyncType)syncType block:(void (^ _Nonnull)(KFClientResult))block;

/**
 * ### This feature will be expanded later ###
 * Turns on/off AutoSync feature
 * If AutoSync is enabled, local changes will trigger synchronization.
 * This feature can make a synergy in combination with PushService.
 * If AutoSync and PushService both are turned on, either local changes or remote changes will trigger synchronization
 *
 * @param aOption KFAutoSyncOption
 * @see KFAutoSyncOption
 */
- (bool)setAutoSync:(KFAutoSyncOption * _Nonnull)aOption;

/**
 * ### This feature will be expanded later ###
 * Turns on/off PushService
 * If PushService is enabled, server will notify remote changes to this client
 *
 * @param aOption KFPushOption
 * @see KFPushOption
 */
- (bool)setPushService:(KFPushOption * _Nonnull)aOption;

/**
 * Deactivate KFClient
 *
 * Closes connection to the server if AutoSync is being used.
 * After close() gets invoked KFClient instance and associated KFData references will no longer work
 * This method can take some time for synchronization running in background to finish
 */
- (void)close;

/**
 * Returns if user is anonymous
 */
- (bool) isAnonymous;

/**
 * Perform synchroization manually and wait until it finishes.
 *
 * @returns KFSyncResult result code of sync.
 */
- (KFSyncResult)sync;

/**
 * Perform synchroization manually
 *
 * @param block notify user whether synchronization has succeeded or failed
 */
- (void)sync:(void (^ _Nonnull)(KFSyncResult))block;

/**
 * Returns 'true' if KFData exists in this client 'false' otherwise
 *
 * @param data pointer type of KFData which you want to know if this client has it
 */
- (bool)contains:(KFData * _Nonnull)data;

/**
 * Returns the set of keys of attached the attached data types.
 *
 * @return The NSSet of keys of attached the attached data types.
 */
- (NSSet<NSString*> * _Nonnull)getKeySetOfAttachedDataTypes;

/**
 * Returns the map of the keys and all the data types.
 *
 * @return The NSDictionary of the keys and all the data types.
 */
- (NSDictionary<NSString*, KFData*> * _Nonnull)getAndLoadAllDataTypes;

/**
 * Returns the key of KFClient
 */
- (NSString * _Nonnull)getKey;

/**
 * Returns the current state of KFClient
 *
 * @see KFClientState
 */
- (KFClientState)getState;

/**
 * Returns the workspace key
 */
- (NSString * _Nonnull)getWorkspaceKey;

/**
 * Returns KFAuthentication which this client currently uses
 */
- (KFAuthentication * _Nonnull)getAuthentication;

/**
 * Sets an KFAuthentication
 *
 * @param auth value of KFAuthentication
 * @return true if authentication is valid and KFClient can apply it, false otherwise
 */
- (bool)setAuthentication:(KFAuthentication * _Nonnull)auth;

/**
 * Query user information from Kaleido server
 *
 * @param userId that is to be queried
 *
 * @return result of user query. this can be nullptr if user is not found.
 */
- (KFUserQueryResult* _Nonnull)queryUser: (NSString* _Nonnull)userId;

/**
 * Returns 'true' if client contain informations to connect Kaleido server properly.
 */
- (BOOL)isAvailable;

- (KFData * _Nonnull)getData:(NSString * _Nonnull)key type:(KFDataType)type typeInfo:(KFTypeInfo * _Nonnull)typeInfo;

@end

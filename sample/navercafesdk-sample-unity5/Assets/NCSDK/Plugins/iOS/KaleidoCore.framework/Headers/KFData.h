//
//  KFData.h
//  KaleidoCore
//
//  Created by Siwan Kim on 2016. 7. 5..
//  Copyright © 2016년 NAVER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KFGlobal.h"
#import "KFDataProperty.h"
#import "KFKeyConflictResolver.h"
#import "KFPublicPermission.h"
#import "KFUser.h"
#import "KFUserAcl.h"

typedef NS_ENUM(NSUInteger, KFDataType) {
    KFDataTypeIntCounter = 1,
    KFDataTypeRealCounter = 2,
    KFDataTypeVariable = 3,
    KFDataTypeArray = 4,
    KFDataTypeMap = 5,
    KFDataTypeList = 6
};

typedef NS_ENUM(NSInteger, KFDataState) {
    /**
     * State that an instance of KFData is initially created.
     *
     * <p>To proceed next state, call KFData::create or KFData::attach
     */
    KFDataStateUndefined = -1,

    /**
     * State that is only able to read.
     *
     * <p>Transitioned from UNDEFINED by invoking KFData::attach
     * <br>A Datatype instance is created and stored at local storage.
     */
    KFDataStateAttaching = 0,

    /**
     * State that is able to read and write.
     *
     * <p>Transitioned from UNDEFINED by invoking KFData::create
     * <br>Data may be lost, if key conflict occurs.
     */
    KFDataStateLocallyStored = 1,

    /**
     * State that represents Datatype that user requested to create already exists in Kaleido cloud.
     *
     * <p>Transitioned from LOCALLY_STORED
     * <br>When encounter this situation, user must handle this.
     *
     * @see KFStateChangeParam
     * @see KFKeyConflictResolver
     */
    KFDataStateKeyConflict = 3,

    /**
     * State that is able to read and write.
     *
     * <p>Transitioned after KFData::attach or KFData::create succeeds
     * <br>Attached datatype is stored in the local storage in a client, and can be synchronized with the one in the Kaleido cloud
     */
    KFDataStateAttached = 11,

    /**
     * State that is readable and writable transitioned after KFData::detach or KFData::remove succeeds.
     *
     * <p>The datatype is removed from the local storage, but exists in memory until application finishes or destructor of the datatype gets called
     */
    KFDataStateMemoryOnly = 21
};

typedef NS_ENUM(NSInteger, KFDataResult) {
    /**
     * Denotes the state that the Kaleido server allowed the client to attach the {@link Datatype}.
     */
    KFDataResultAttach = 10,

    /**
     * Denotes the state that the Kaleido server allowed the client to create the {@link Datatype}.
     */
    KFDataResultCreate = 11,

    /**
     * Denotes the state that the Kaleido server allowed the client to detach the {@link Datatype}.
     */
    KFDataResultDetach = 12,

    /**
     * Denotes the state that the Kaleido server allowed to delete the {@link Datatype}.
     */
    KFDataResultDelete = 13,

    /**
     * Denotes the state that the {@link Datatype} user requested to create already exists in the Kaleido server.
     */
    KFDataResultKeyConflict = -11,

    /**
     * Denotes the state that the {@link Datatype} is deleted untraceably; it might be deleted in the dashboard or long long time ago.
     */
    KFDataResultDeletedUntraceably = -101,

    /**
     * Denotes the state that the Kaleido server disallowed to attach the {@link Datatype}.
     * There are three cases that fail to attach a data type;
     *    1. No Datatype exists for the specified key
     *    2. Incorrect type is specified in the the attach methods.
     *    3. User has no access permission on Datatype
     */
    KFDataResultAttachFail = -102,

    /**
     * Denotes the state that Kaleido server disallowed to access the {@link Datatype}.
     * Because current user has no proper authority.
     */
    KFDataResultAttachFailedNoAccessPermission = -103,

    /**
     * Denotes the state that the user does not have write permission on Datatype
     */
    KFDataResultNoWritePermission = -104,

    /**
     * Denotes the state that the user does not have read permission on Datatype
     */
    KFDataResultNoReadPermission = -105,

    /**
     * Denotes the state that the user does not have a permission to create Datatype mainly because user is anonymous
     */
    KFDataResultNoCreatePermission = -106,

    /**
     * Denotes the state that the Kaleido server refused to synchronize the {@link Datatype} but the reason is not certain.
     */
    KFDataResultUnknown = -128
};

typedef NS_ENUM(NSInteger, KFDataError) {
    KFDataErrorOK = 0,

    /**
     * Database error
     */
    KFDataErrorDatabase = 1000,

    /**
     * The lengh of Datatype key must not exceed 256
     */
    KFDataErrorKeyTooLong = 10000,

    /**
     * The actual type of Datatype stored in local database and the one user requests are different
     */
    KFDataErrorTypeMismatch = 10001,

    /**
     * Argument is invalid
     */
    KFDataErrorInvalidArgument = 10002,

    /**
     * Operaitons is denied because Datatype is not in ATTACHED nor LOCALLY_CREATED state
     */
    KFDataErrorInvalidState = 10003,

    /**
     * Datatype can't accomodate new element because with that element, the size of Datatype exceeds the size limit
     * Currently, Map is the only Datatype with restricted size
     */
    KFDataErrorObjectTooBig = 10004,

    /**
     * Current user has no permission to write
     */
    KFDataErrorNoWritePermission = 10005,

    /**
     * Reserved for later use
     */
    KFDataErrorFailed = INT_MAX
};

@class KFUpdateParam;
@class KFStateChangeParam;
@class KFErrorParam;

/**
 * DatatypeHandler is used to run user's codes whenever the state of the KFData is changed or some remote operations are received.
 * This class is used internally, User does not handle DatatypeHandler directly.
 * Instead, User provides functors to each Datatype's registerHandler function.
 */
EXPORT
@protocol KFDataDelegate <NSObject>

/**
 * Gets called whenever some remote operations are received for KFData.
 *
 * @param aParam see KFUpdateParam
 */
- (void)onUpdate:(nonnull KFUpdateParam *)aParam;

/**
 * Gets called whenever the state of the KFData changes.
 *
 * @param aParam see KFStateChangeParam
 */
- (void)onStateChange:(nonnull KFStateChangeParam *)aParam;

/**
 * Gets called whenever the errors are occured.
 *
 * @param aParam see KFErrorParam
 */
- (void)onError:(nonnull KFErrorParam *)aParam;

@end

@interface KFTypeInfo : NSObject

@property void * _Nonnull _impl;

@end

/**
 * KFData provide common APIs.
 * KFData is managed by KFClient.
 * Each Datatype has its own key and it should be unique in the workspace.
 * Newly created datatype must be authorized by Kaleido Cloud for the user to use it
	*
	* @see KFDataState
 */
@interface KFData : NSObject

/**
 * @return the key of this datatype
 */
- (nonnull NSString *)getKey;

/**
 * Returns the state of datatype
 *
 * @see KFDataState
 */
- (KFDataState)getState;

/**
 * Returns the state of datatype in string form
 *
 * @see KFDataState
 */
- (nonnull NSString *)getStateAsString;

/**
 * Returns 'true' if datatype is ATTACHED
 *
 * @see KFDataState
 */
- (bool)isWorking;

/**
 * Returns 'true' if datatype is being removed
 *
 * KFData getState() can report KFDataStateMemoryOnly while KFData isRemoving() returns 'true'
 */
- (bool)isRemoving;

/**
 * Returns 'true' if datatype is being detached
 *
 * Datatype getState() can report KFDataStateMemoryOnly while KFData isDetaching() returns 'true'
 */
- (bool)isDetaching;

/**
 * Returns 'true' if this datatype is in KFDataState KFDataStateMemoryOnly and nothing further left to interact with server
 * Next time KFData getInstance() gets called with the same key of this datatype, newly created instace will be returned
 */
- (bool)isCompleteState;

/**
 * Creates datatype
 *
 * Only KFData in KFDataState KFDataStateUndefined state can be created.
 * If KFData with the same key already exists in Kaleido cloud, Datatype can be in KFDataState KFDataStateKeyConflict.
 * Recommends to see KFKeyConflictResolver to handle this.
 *
 * @param aPermission determines whether to expose this KFData publicly or not.
 *
 * @see KFDataState
 * @see KFDataResult
 * @see KFKeyConflictResolver
 */
- (void)createWithPublicPermission:(KFPublicPermission)aPermission;

/**
 * Fetches datatype from server
 *
 * If Datatype does not exist in Kaleido cloud, the state of Datatype will turn into KFDataState KFDataStateMemoryOnly
 *
 * @see KFDataState
 * @see KFDataResult
 */
- (void)attach;

/**
 * Fetches datatype from server if it exists, otherwise creates new Datatype
 *
 * @param aPermission determines whether to expose this KFData publicly or not.
 *
 * @see KFDataState
 * @see KFDataResult
 */
- (void)attachOrCreateWithPublicPermission:(KFPublicPermission)aPermission;

/**
 * Deletes this datatype both from local and remote storage
 *
 * Every operation subsequent to delete() will take no effect.
 * Be aware that delete operation also will be propagated to other clients.
 * If you want delete this datatype locally, then make a call to detach() instead.
 *
 * @see KFDataState
 * @see KFDataResult
 */
- (void)remove;

/**
 * Removes locally stored datatype.
 *
 * This method is used when user do not want to receive any update on this datatype.
 * Detach will not affect other datatypes with same key that reside in different clients.
 *
 * @see KFDataState
 * @see KFDataResult
 */
- (void)detach;

/**
 * Datatype KeyConflictResolver to deals with key confliction
 *
 * @return KFKeyConflictResolver to resolve datatype key conflicts.
 */
- (nonnull KFKeyConflictResolver*)getKeyConflictResolver;

/**
 * Sets maximum number of operations that can be sent from Server
 * When server has more operations to send than the size limist user set, server generates snapshot and send it instead.
 * Be aware that this configuration is not per client but for all clients
 *
 * @param aSize the maximum number of operations that clients can accommodate
 */
- (bool)setMaxHistorySize:(size_t)aSize;

/**
 * Returns if the user of this KFClient has read permission on this KFData
 */
- (bool)hasReadPermission;

/**
 * Returns if the user of this KFClient has write permission on this KFData
 */
- (bool)hasWritePermission;

/**
 * Returns current public permission
 */
- (KFPublicPermission)getPublicPermission;

/**
 * Sets public permission of this KFData
 *
 * @param aPermission public access right
 * @return true if updating Permission succeeds, false otherwise
 */
-(bool)setPublicPermission:(KFPublicPermission)aPermission;

/**
 * Sets delegate for KFDataDelegate
 *
 * @param aDelegate an object which conformed KFDataDelegate
 */
- (void)setDelegate:(nullable id<KFDataDelegate>)aDelegate;

/**
 * Gets permission of sepcific user.
 *
 * @param aUser contains user information to find permission.
 * @return KFPermission for associated user.
 */
-(KFPermission)getUserPermission:(nonnull KFUser*)aUser;

/**
 * Sets UserAcl for the datatype.
 *
 * @param aUserAcl which define a permission with user information.
 */
-(void)setUserAcl:(nonnull KFUserAcl*)aUserAcl;

@end

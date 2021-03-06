//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSASModelBase.h>

#import "MSASModel.h"
#import "MSASStateMachineDelegate.h"

@class MSASPendingChanges, MSASServerSideModelGroupedCommandQueue, MSASStateMachine, MSAlbumSharingDaemon, NSCountedSet, NSObject<OS_dispatch_queue>, NSString;

@interface MSASServerSideModel : MSASModelBase <MSASModel, MSASStateMachineDelegate>
{
    MSASStateMachine *_counterpartInstance;
    MSAlbumSharingDaemon *_daemon;
    NSCountedSet *_observers;
    NSObject<OS_dispatch_queue> *_eventQueue;
    MSASServerSideModelGroupedCommandQueue *_commandQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    MSASPendingChanges *_pendingChanges;
}

- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
- (id)albums;
- (void)performBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeCommandsUpToCommandIndex:(long long)arg1;
- (id)nextCommandGroupMaxCount:(int)arg1 outCommand:(id *)arg2 outLastCommandIndex:(long long *)arg3;
- (int)commandCount;
- (void)enqueueCommand:(id)arg1;
@property(retain, nonatomic) MSASServerSideModelGroupedCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
- (void)dbQueueDeleteAssetCollectionMetadataAssetCollectionGUID:(id)arg1 key:(id)arg2 info:(id)arg3;
- (void)dbQueueDeleteAlbumMetadataAlbumGUID:(id)arg1 key:(id)arg2 info:(id)arg3;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2;
- (BOOL)dbQueueCheckToClearUnviewedStateOnAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (BOOL)dbQueueCommentWithID:(int)arg1 assetCollectionGUID:(id)arg2 outObject:(id *)arg3 outGUID:(id *)arg4 outTimestamp:(id *)arg5 outIsCaption:(char *)arg6 outUserInfoData:(id *)arg7;
- (BOOL)dbQueueAssetCollectionContainsCommentsFromMeAssetCollectionGUID:(id)arg1;
- (void)dbQueueAddCommentCheckOperation:(id)arg1;
- (void)_reconstruct;
- (BOOL)dbQueueCheckToClearUnviewedStateOnAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueUpdateAlbumCtag:(id)arg1;
- (id)_protocolErrorForUnderlyingError:(id)arg1;
- (void)flushAllPendingCommentCheckOperations;
@property(retain, nonatomic) MSASPendingChanges *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
- (void)dbQueueDeleteAllPendingCommentCheckOperations;
- (id)dbQueuePendingCommentCheckOperations;
- (void)dbQueueFlushAllPendingCommentCheckOperations;
- (int)dbQueueUnviewedAlbumCount;
- (int)dbQueueCountOfUnviewedAssetCollectionsInAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAssetCollectionMetadataWithAssetCollectionGUID:(id)arg1 key:(id)arg2 outValue:(id *)arg3;
- (void)dbQueueDeleteAllAssetCollectionMetadataForAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteAllAlbumMetadataForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteCommentWithGUID:(id)arg1 info:(id)arg2;
- (id)dbQueueLookupOrCreateCommentWithGUID:(id)arg1 outAssetCollection:(id *)arg2 outAlbum:(id *)arg3;
- (void)dbQueueSetComment:(id)arg1 forAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
- (void)dbQueueSetUnviewedState:(BOOL)arg1 onAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
- (void)dbQueueSetAssetCollectionMetadataAssetCollectionGUID:(id)arg1 key:(id)arg2 value:(id)arg3 info:(id)arg4;
- (void)dbQueueDeleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (id)_invalidAssetCollectionGUIDErrorwithGUID:(id)arg1;
- (void)dbQueueSetAssetCollection:(id)arg1 inAlbumWithGUID:(id)arg2 info:(id)arg3;
- (id)_invalidAccessControlGUIDErrorwithGUID:(id)arg1;
- (void)dbQueueDeleteAccessControlWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueSetAccessControl:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteInvitationWithGUID:(id)arg1 info:(id)arg2;
- (id)_invalidInvitationGUIDErrorWithGUID:(id)arg1;
- (void)dbQueueSetInvitation:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteInvitationForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)eventQueueNotifyObserversOfUpdatedUnviewedCountInAlbum:(id)arg1 unviewedCount:(int)arg2 info:(id)arg3;
- (int)dbQueueUnviewedAssetCollectionCountForAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAlbumMetadataWithAlbumGUID:(id)arg1 key:(id)arg2 outValue:(id *)arg3;
- (id)dbQueueMaximumPhotoNumberForAlbumWithGUID:(id)arg1;
- (void)dbQueueSetUnviewedState:(BOOL)arg1 onAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)dbQueueSetAlbumMetadataAlbumGUID:(id)arg1 key:(id)arg2 value:(id)arg3 info:(id)arg4;
- (void)dbQueueDeleteAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueSetAlbum:(id)arg1 info:(id)arg2;
- (id)dbQueueLookupOrCreateAlbumWithGUID:(id)arg1;
- (id)dbQueueMaximumCommentIDForAssetCollectionWithGUID:(id)arg1;
- (id)dbQueueLookupOrCreateAssetCollectionWithGUID:(id)arg1 outAlbum:(id *)arg2;
- (BOOL)dbQueueCommentWithGUID:(id)arg1 outObject:(id *)arg2 outID:(unsigned int *)arg3 outTimestamp:(id *)arg4 outAssetCollectionGUID:(id *)arg5 outIsCaption:(char *)arg6 outUserInfoData:(id *)arg7;
- (id)dbQueueCommentsForAssetCollectionWithGUID:(id)arg1;
- (id)dbQueueAssetCollectionGUIDsInAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAssetCollectionWithGUID:(id)arg1 outObject:(id *)arg2 outCtag:(id *)arg3 outAlbumGUID:(id *)arg4 outBatchDate:(id *)arg5 outPhotoDate:(id *)arg6 outPhotoNumber:(long long *)arg7 outUserInfoData:(id *)arg8;
- (BOOL)dbQueueInvitationWithGUID:(id)arg1 outObject:(id *)arg2 outAlbumGUID:(id *)arg3 outEmail:(id *)arg4 outUserInfoData:(id *)arg5;
- (BOOL)dbQueueInvitationWithAlbumGUID:(id)arg1 outObject:(id *)arg2 outInvitationGUID:(id *)arg3 outEmail:(id *)arg4 outUserInfoData:(id *)arg5;
- (id)dbQueueInvitationForAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAccessControlWithGUID:(id)arg1 outObject:(id *)arg2 outAlbumGUID:(id *)arg3 outEmail:(id *)arg4 outUserInfoData:(id *)arg5;
- (id)dbQueueAccessControlGUIDsForAlbumWithGUID:(id)arg1;
- (id)dbQueueAccessControlsForAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAlbumWithGUID:(id)arg1 outObject:(id *)arg2 outName:(id *)arg3 outCtag:(id *)arg4 outForeignCtag:(id *)arg5 outURLString:(id *)arg6 outUserInfoData:(id *)arg7;
- (id)dbQueueAlbumGUIDs;
- (void)eventQueuePerformBlockOnObservers:(CDUnknownBlockType)arg1;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 eventQueue:(id)arg3;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)reconstruct;
@property(nonatomic) MSASStateMachine *MSASCounterpartInstance; // @synthesize MSASCounterpartInstance=_counterpartInstance;
- (void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)arg1;
- (void)MSASStateMachine:(id)arg1 didFireScheduledEvent:(id)arg2 forAssetCollectionGUID:(id)arg3 albumGUID:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishRemovingSharingRelationship:(id)arg2 fromOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingSharingRelationships:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didRequestAssetsForAddingAssetCollections:(id)arg2 inAlbum:(id)arg3 specifications:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishUpdatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishCreatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingComment:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishEnqueueingAssetsForDownload:(id)arg2 inAlbumWithGUID:(id)arg3;
- (BOOL)MSASStateMachine:(id)arg1 didQueryIsAssetCollectionWithGUIDInModel:(id)arg2;
- (id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumWithGUID:(id)arg1;
- (id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAssetCollection:(id)arg2 inAlbum:(id)arg3 assetStateCtag:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindAlbumSyncedState:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindAssetCollectionSyncedState:(id)arg2 forAssetCollectionGUID:(id)arg3 inAlbum:(id)arg4 assetCollectionStateCtag:(id)arg5 info:(id)arg6;
- (void)MSASStateMachine:(id)arg1 willCheckForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(id)arg2 largestCommentID:(int)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindCommentChanges:(id)arg2 inAssetCollectionWithGUID:(id)arg3 inAlbumWithGUID:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishUpdatingAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 willUpdateAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishGettingAccessControls:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindNewURLString:(id)arg2 forAlbumWithGUID:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbums:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindAssetCollectionChanges:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 willCheckForUpdatesInAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAccessControlChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAlbumChanges:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 albumChanges:(id)arg3 accessControlChangesForAlbumGUIDS:(id)arg4 info:(id)arg5;
- (void)MSASStateMachineDidFindGlobalResetSync:(id)arg1 info:(id)arg2;
- (void)MSASStateMachineDidStart:(id)arg1;
@property(nonatomic) double maxGroupedCallbackEventStaleness;
@property(nonatomic) double maxGroupedCallbackEventIdleInterval;
@property(nonatomic) int maxGroupedCallbackEventBatchCount;
- (BOOL)errorIsCancellation:(id)arg1;
- (id)focusAssetCollectionGUID;
- (id)serverSideConfiguration;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)forgetEverything;
- (void)deleteCommentWithGUID:(id)arg1;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1;
- (void)deleteAssetCollectionWithGUID:(id)arg1;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2;
- (void)rejectInvitationWithGUID:(id)arg1;
- (void)acceptInvitationWithGUID:(id)arg1;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1;
- (void)subscribeToAlbumWithGUID:(id)arg1;
- (void)markAlbumGUIDAsViewed:(id)arg1;
- (void)deleteAlbumWithGUID:(id)arg1;
- (void)modifyAlbumMetadata:(id)arg1;
- (void)addAlbum:(id)arg1;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2;
- (void)refreshResetSync:(BOOL)arg1;
- (void)forgetEverythingInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)forgetEverythingInfo:(id)arg1;
- (void)deleteCommentWithGUID:(id)arg1 info:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeAccessControlEntryWithGUID:(id)arg1 info:(id)arg2;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 info:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 info:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)subscribeToAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)markAlbumGUIDAsViewed:(id)arg1 moveLastViewedAssetCollectionMarker:(BOOL)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 info:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)modifyAlbumMetadata:(id)arg1 info:(id)arg2;
- (void)addAlbum:(id)arg1 info:(id)arg2;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3;
- (void)refreshResetSync:(BOOL)arg1 info:(id)arg2;
- (id)serverCommunicationBackoffDate;
- (id)userInfoForCommentWithGUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forCommentWithGUID:(id)arg2;
- (id)userInfoForInvitationWithGUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forInvitationWithGUID:(id)arg2;
- (id)userInfoForAccessControlWithGUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forAccessControlWithGUID:(id)arg2;
- (id)userInfoForAssetCollectionWithGUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forAssetCollectionWithGUID:(id)arg2;
- (id)userInfoForAlbumWithGUID:(id)arg1;
- (void)setUserInfo:(id)arg1 forAlbumWithGUID:(id)arg2;
- (id)lastViewedCommentDateForAssetCollectionWithGUID:(id)arg1;
- (id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)arg1;
- (int)unviewedAssetCollectionCountForAlbumWithGUID:(id)arg1;
- (BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)arg1;
- (int)unviewedAlbumCount;
- (BOOL)isAlbumWithGUIDMarkedAsUnviewed:(id)arg1;
- (id)captionForAssetCollectionWithGUID:(id)arg1;
- (id)commentWithGUID:(id)arg1;
- (id)commentsForAssetCollectionWithGUID:(id)arg1;
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)assetCollectionWithGUID:(id)arg1;
- (id)assetCollectionGUIDsInAlbumWithGUID:(id)arg1;
- (id)assetCollectionsInAlbumWithGUID:(id)arg1;
- (id)isPublicAccessEnabledForAlbumWithGUID:(id)arg1;
- (id)invitationWithGUID:(id)arg1;
- (id)invitationForAlbumWithGUID:(id)arg1;
- (id)invitationGUIDs;
- (id)invitations;
- (id)accessControlWithGUID:(id)arg1;
- (id)accessControlGUIDsForAlbumWithGUID:(id)arg1;
- (id)accessControlsForAlbumWithGUID:(id)arg1;
- (id)albumWithGUID:(id)arg1;
- (id)albumGUIDs;
- (BOOL)hasEnqueuedActivities;
- (void)shutDownForDestruction:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)shutDown;
- (int)assetsInDownloadQueueCount;
- (BOOL)hasCommandsInGroupedCommandQueue;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
@property(nonatomic) __weak MSAlbumSharingDaemon *daemon; // @synthesize daemon=_daemon;
- (id)initWithPersonID:(id)arg1;
- (void)releaseBusy;
- (void)retainBusy;
@property(readonly, nonatomic) MSASStateMachine *stateMachine;
- (void)MSASStateMachine:(id)arg1 didFinishSendingInvitationByPhone:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)addObserver:(id)arg1;
@property(retain, nonatomic) NSCountedSet *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void)start;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, retain, nonatomic) NSString *personID;
@property(readonly) Class superclass;

@end


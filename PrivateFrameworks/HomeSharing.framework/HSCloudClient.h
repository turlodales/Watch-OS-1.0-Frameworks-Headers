//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSCloudAvailability.h"

@class HSConnectionConfiguration, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface HSCloudClient : NSObject <HSCloudAvailability>
{
    BOOL _active;
    HSConnectionConfiguration *_configuration;
    NSXPCConnection *_nsxpcConnection;
    unsigned long long _daemonConfiguration;
    NSMutableSet *_knownArtworkIDs;
    NSObject<OS_dispatch_queue> *_knownArtworkIDsQueue;
    NSMutableSet *_pendingArtworkRequests;
    NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;
    CDUnknownBlockType _updateInProgressChangedHandler;
}

- (id)initWithConfiguration:(id)arg1;
- (void)_serverUpdateInProgressDidChange;
- (void)_serverDidLaunch;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)resetConfiguration:(id)arg1;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSagaLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unhideAllPurchasedApps:(CDUnknownBlockType)arg1;
- (void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateJaliscoLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeJaliscoLibrary;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendConfigurationToDaemon;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchKeepLocalForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setKeepLocal:(BOOL)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateArtistHeroImages;
- (void)addStorePlaylistsWithGlobalIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addStoreItemsWithAdamIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)connection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType updateInProgressChangedHandler; // @synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler;
- (void)loadIsUpdateInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isAuthenticatedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isExpiredWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deauthenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)becomeActive;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (BOOL)canSetItemProperty:(id)arg1;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)savePlaylistWithPersistentID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)uploadItemProperties;
- (BOOL)isCellularDataRestricted;
- (void)resignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLPhotoStreamsHelper : NSObject
{
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;
+ (BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;
+ (id)publishBreadcrumbsPath;
+ (id)iCloudServiceAccount;
+ (id)_acaccountStore;
+ (BOOL)photoStreamsEnabled;
+ (id)sharedPhotoStreamsHelper;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)initiateDeletionOfOriginalAssets:(id)arg1;
- (void)resume_mstreamd:(id)arg1;
- (id)pause_mstreamd;
- (void)resetServerState;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (struct CGSize)derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2;
- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;
- (int)friendsLimit;
- (int)imageLimitForFriendStream;
- (int)imageLimitForOwnStream;
- (int)maxPixelSizeForDerivative;
- (int)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (BOOL)shouldPublishScreenShots;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (BOOL)dequeueAssetsForPSPublishing:(id)arg1;
- (BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (BOOL)removeBreadcrumbsForHashString:(id)arg1;
- (id)lastPhotoStreamUpdateDate;
- (id)psHashAsString:(id)arg1;
- (id)psHashForData:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (id)imageLimitsByAssetType;
- (BOOL)shouldUploadVideos;
- (void)pollForNewSubscriptionContent;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;
- (void)resetMstreamdStateForPersonID:(id)arg1;
- (BOOL)enqueueAssetForPSPublishing:(id)arg1 assetHash:(id)arg2 fullPath:(id)arg3 fileSize:(id)arg4 type:(id)arg5 reenqueueCount:(id)arg6 publicGlobalUUID:(id *)arg7;
- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;
- (id)photoStreamsPublishStreamID;
- (void)clearCachedAccountState;
- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;
- (id)init;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDBackgroundTaskScheduler, HDContentProtectionManager, HDProcessStateManager, HDUserCharacteristicsManager, HKObject, HKSampleType, NSDictionary, NSString, NSUUID;

@protocol HDHealthDaemon <NSObject>
@property(readonly) HDProcessStateManager *processStateManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly) HDContentProtectionManager *contentProtectionManager;
@property(readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property(readonly) id <HDDaemonDeviceManager> healthDeviceManager;
@property(readonly) id <HDHealthMetadataManager> healthMetadataManager;
@property(readonly) id <HDHealthSourceManager> healthSourceManager;
@property(readonly) id <HDSyncEngine> syncEngine;
@property(readonly) id <HDHealthDataManager> healthDataManager;
@property(readonly) id <HDHealthDataCollectionManager> healthDataCollectionManager;
@property(readonly) id <HDHealthDatabase> healthDatabase;
@property(readonly) NSString *homeDirectoryPath;
- (void)pauseActiveWorkoutsWithCompletion:(void (^)(void))arg1;
- (BOOL)containsActiveWorkouts;
- (void)terminate;
- (void)performBlockWithPowerAssertionIdentifier:(NSString *)arg1 transactionName:(NSString *)arg2 powerAssertionInterval:(double)arg3 block:(void (^)(void))arg4;
- (void)invalidateActivityAlertSuppressionForBundleIdentifier:(NSString *)arg1;
- (void)suppressActivityAlertsForBundleIdentifier:(NSString *)arg1 reason:(int)arg2;
- (void)setDataCollectionOptions:(NSDictionary *)arg1 forKey:(NSString *)arg2 type:(HKSampleType *)arg3 clientUUID:(NSUUID *)arg4;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (BOOL)persistAndNotifyDataObject:(HKObject *)arg1 error:(id *)arg2;
- (void)endTransaction:(NSString *)arg1;
- (void)beginTransaction:(NSString *)arg1;
- (void)setPairedWatchBundleIdentifierProvider:(id <HDPairedWatchBundleIdentifierProvider>)arg1;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
@end

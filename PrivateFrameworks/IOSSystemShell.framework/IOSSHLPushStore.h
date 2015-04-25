//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IOSSHLPushStore : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    NSMutableDictionary *_observersByBundleID;
}

+ (void)migratePushStore;
+ (id)uniqueIdentifierForNotification:(id)arg1;
+ (id)sharedInstance;
- (void)setEffectiveNotificationTypes:(unsigned int)arg1 forBundleID:(id)arg2;
- (id)lastUpdateDateForBundleID:(id)arg1;
- (id)bundleIDsWithUpdatesSince:(id)arg1;
- (id)savedNotificationsForBundleID:(id)arg1;
- (id)removeNotificationsPassingTest:(CDUnknownBlockType)arg1 forBundleID:(id)arg2;
- (void)removeAllNotificationsForBundleID:(id)arg1;
- (void)saveRemoteNotificationWithMessage:(id)arg1 soundName:(id)arg2 actionText:(id)arg3 badge:(id)arg4 userInfo:(id)arg5 launchImage:(id)arg6 category:(id)arg7 forBundleID:(id)arg8;
- (void)clearNotificationsForBundleID:(id)arg1;
- (void)registerAppForNotificationsWithBundleID:(id)arg1;
- (void)removeObserver:(id)arg1 forBundleID:(id)arg2;
- (void)addObserver:(id)arg1 forBundleID:(id)arg2;
- (BOOL)_setUserNotificationSettings:(id)arg1 forBundeID:(id)arg2;
- (id)_effectiveUserNotificationSettingsForBundleID:(id)arg1;
- (unsigned int)_effectiveNotificationTypesForBundleID:(id)arg1;
- (void)notePushSettingsChangedForBundleID:(id)arg1;
- (unsigned int)_supportedNotificationTypesForBundleID:(id)arg1;
- (void)_saveNotificationWithMessage:(id)arg1 soundName:(id)arg2 actionText:(id)arg3 badge:(id)arg4 userInfo:(id)arg5 launchImage:(id)arg6 fullDetails:(id)arg7 soundIsRingtone:(BOOL)arg8 isRemoteNotification:(BOOL)arg9 category:(id)arg10 forBundleID:(id)arg11;
- (void)_notifyObserversNotificationsDidChangeForBundleID:(id)arg1;
- (id)_allNotificationsFromPath:(id)arg1;
- (id)pathForSoundName:(id)arg1 inApp:(id)arg2;
- (BOOL)_removeNotificationsForBundleID:(id)arg1;
- (BOOL)_saveNotificationList:(id)arg1 toPath:(id)arg2;
- (BOOL)_notificationDataExistsAtPath:(id)arg1;
- (id)_notificationStoreFilenameForBundleID:(id)arg1;
- (id)_allNotificationDataFromPath:(id)arg1;
- (void)_enumerateObserversForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_observersForBundleID:(id)arg1;
- (void)saveLocalNotification:(id)arg1 forBundleID:(id)arg2;
- (void)removeLocalNotification:(id)arg1 forBundleID:(id)arg2;
- (void)removeAllLocalNotificationsForBundleID:(id)arg1;
- (id)savedNotificationDataForBundleID:(id)arg1;
- (void)unregisterAppForNotificationsWithBundleID:(id)arg1;
- (unsigned int)effectiveNotificationTypesForBundleID:(id)arg1;
- (unsigned int)supportedNotificationTypesForBundleID:(id)arg1;
- (id)effectiveUserNotificationSettingsForBundleID:(id)arg1;
- (void)notePushDeclinedForBundleID:(id)arg1;
- (void)notePushAcceptedForBundleID:(id)arg1;
- (void)setSupportedNotificationTypes:(unsigned int)arg1 forBundleID:(id)arg2;
- (void)setUserNotificationSettings:(id)arg1 forBundeID:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

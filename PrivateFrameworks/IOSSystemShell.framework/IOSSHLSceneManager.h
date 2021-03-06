//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"

@class BSCopyingCacheSet, FBSceneManager, NSCountedSet, NSString, UIApplicationSceneClientSettingsDiffInspector;

@interface IOSSHLSceneManager : NSObject <FBSceneManagerDelegate, FBSceneManagerObserver>
{
    FBSceneManager *_sceneManager;
    BSCopyingCacheSet *_applicationScenes;
    BSCopyingCacheSet *_foregroundApplicationScenes;
    BSCopyingCacheSet *_reportedForegroundApplicationScenes;
    BSCopyingCacheSet *_externalApplicationScenes;
    BSCopyingCacheSet *_externalForegroundApplicationScenes;
    BSCopyingCacheSet *_reportedExternalForegroundApplicationScenes;
    BSCopyingCacheSet *_daemonScenes;
    NSCountedSet *_assertedBackgroundScenes;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
}

+ (id)sharedInstance;
- (id)assertBackgroundedStatusForScenes:(id)arg1;
- (id)externalForegroundApplicationScenes;
- (id)externalApplicationScenes;
- (id)foregroundApplicationScenes;
- (id)applicationScenes;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 deviceOrientationChangedTo:(int)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (id)_clientSettingsDiffInspector;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


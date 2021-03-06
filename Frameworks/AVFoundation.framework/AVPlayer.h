//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerInternal, NSArray, NSError, NSString;

@interface AVPlayer : NSObject
{
    AVPlayerInternal *_player;
}

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+ (BOOL)automaticallyNotifiesObserversOfUserVolume;
+ (id)keyPathsForValuesAffectingRate;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
- (int)externalPlaybackType;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (BOOL)isExternalPlaybackActive;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDStruct_1b6d18a9)currentTime;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
@property(nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)finalize;
@property(readonly, nonatomic) NSError *error;
- (id)_clientName;
- (void)_setClientName:(id)arg1;
- (void)setRate:(float)arg1;
- (float)rate;
@property(readonly, nonatomic) int status;
- (void)pause;
- (void)_willEnterForeground:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
- (id)currentItem;
- (id)_items;
- (id)initWithURL:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)prepareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int _externalProtectionStatus;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (BOOL)_resumePlayback:(double)arg1 error:(id *)arg2;
- (int)actionAtItemEnd;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (BOOL)_CALayerDestinationIsTVOut;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)playerAVAudioSession;
- (void)_setPreferredLanguageList:(id)arg1;
- (id)externalPlaybackVideoGravity;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (void)_setUserVolume:(float)arg1;
- (float)_userVolume;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)isClosedCaptionDisplayEnabled;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)seekToDate:(id)arg1;
- (void)setActionAtItemEnd:(int)arg1;
@property(nonatomic) BOOL disallowsAMRAudio;
- (id)initWithPlayerItem:(id)arg1;
- (void)play;
- (BOOL)isAirPlayVideoActive;
@property(nonatomic) BOOL allowsOutOfBandTextTrackRendering;
- (void)setAutoSwitchStreamVariants:(BOOL)arg1;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
- (id)_audioOutputDeviceUniqueID;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (BOOL)_appliesMediaSelectionCriteriaAutomatically;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (BOOL)_disallowsHardwareAcceleratedVideoDecoder;
- (BOOL)_disallowsAMRAudio;
@property(nonatomic) BOOL allowsPixelBufferPoolSharing;
- (BOOL)_allowsPixelBufferPoolSharing;
- (BOOL)_disallowsVideoLayerDisplayCompositing;
- (void)_setDisallowsVideoLayerDisplayCompositing:(BOOL)arg1;
- (BOOL)_preventsSleepDuringVideoPlayback;
- (void)_setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
- (void)_setClientPriority:(int)arg1;
- (int)_clientPriority;
- (BOOL)_shouldDetachVideoLayersFromFigPlayer;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_carplayIsActive;
- (BOOL)_hasAssociatedAVPlayerLayerInPIPMode;
@property(nonatomic) float maxRateForAudioPlayback;
@property(nonatomic) float minRateForAudioPlayback;
@property(readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;
- (int)_extractVerifiedFPExternalProtectionStatus:(id)arg1;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (BOOL)_shouldLogPerformanceData;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem *)arg1;
- (id)_avPlayerLayers;
- (id)_pixelBufferAttributeMediator;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (BOOL)allowsAirPlayVideo;
- (BOOL)isDisplayingClosedCaptions;
- (BOOL)isMuted;
- (void)setVibrationPattern:(id)arg1;
- (void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(struct __CFDictionary *)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAllItems;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_currentItemStatusIsReadyToPlay;
- (BOOL)_isChangingValueForKey:(id)arg1;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1;
- (id)_copyPerformanceDataForCurrentItem;
- (id)_fpNotificationNames;
- (id)_videoLayers;
- (id)_subtitleLayers;
- (id)_closedCaptionLayers;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachClosedCaptionLayersFromFigPlayer;
- (void)_detachVideoLayersFromFigPlayer;
- (BOOL)_usesAudioOnlyModeForExternalPlayback;
- (BOOL)_airPlayVideoActive;
- (BOOL)_externalPlaybackActive;
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)_allowsExternalPlayback;
- (BOOL)_isDisplayingClosedCaptions;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2;
- (int)_actionAtItemEnd;
- (int)_defaultActionAtItemEnd;
- (BOOL)_isMuted;
- (float)_playerVolume;
- (CDUnknownBlockType)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_createPrerollID;
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2;
- (float)_rate;
- (void)_setCurrentItem:(id)arg1;
- (void)_createPlayer:(int)arg1 item:(id)arg2 preparationRequested:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachVideoLayersToFigPlayer;
- (id)_propertyStorage;
- (void)_addFPListeners;
- (BOOL)_attachItem:(id)arg1 andPerformOperation:(int)arg2 withObject:(id)arg3;
- (BOOL)_removeItem:(id)arg1;
- (void)_coordinateWithRemovalOfItem:(id)arg1;
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer *)arg2;
- (struct OpaqueFigPlayer *)_copyFigPlayer;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (struct OpaqueCMClock *)masterClock;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_removeAllLayers;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_removeFPListeners;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (BOOL)_iapdExtendedModeIsActive;
- (void)_didFinishSuspension:(id)arg1;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (BOOL)autoSwitchStreamVariants;
- (id)vibrationPattern;
- (id)expectedAssetTypes;
- (id)_weakReference;
- (void)_addLayer:(id)arg1 withPixelBufferAttributes:(id)arg2;
- (id)_stateDispatchQueue;
- (void)_conformVideoLayer:(id)arg1 toSize:(struct CGSize)arg2;
- (void)_noteDisplaySize:(struct CGSize)arg1 forPlayerLayer:(id)arg2;
- (id)_cachedValueForKey:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;

@end


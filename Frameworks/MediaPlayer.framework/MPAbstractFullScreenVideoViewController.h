//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPVideoViewController.h>

#import "MPSwipableViewDelegate.h"

@class NSString;

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate>
{
    unsigned int _requestExitAfterHidingControls:1;
    unsigned int _rotateAfterHidingControls:1;
    unsigned int _showControlsAfterRotate:1;
    unsigned int _autoHidingForItemChange:1;
    unsigned int _scheduledAutoHide:1;
}

- (void)setPlayer:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)setItem:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_hideOverlayWithAnimation:(BOOL)arg1;
- (BOOL)forceScaleToFitInPortrait;
- (void)setInhibitOverlay:(BOOL)arg1;
- (void)_autohideControlsOverlay;
- (void)cancelControlsOverlayAutohide;
- (BOOL)inhibitOverlay;
- (void)showOverlayIfNecessary;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (int)_validInterfaceOrientation;
- (void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2;
- (void)transformVideoForInterfaceOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2 atLocation:(struct CGPoint)arg3;
- (void)displayVideoViewOnScreen;
- (id)newAlternateTracksTransition;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)controlsOverlayVisible;
- (BOOL)canShowControlsOverlay;
- (void)setCanShowControlsOverlay:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


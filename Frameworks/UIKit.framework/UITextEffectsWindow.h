//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAutoRotatingWindow.h>

#import "_UIScreenBasedObject.h"

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>
{
    BOOL _inDealloc;
    unsigned int _activeEffectsCount;
    unsigned int _hostedUseCount;
    float _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    NSDictionary *_perScreenOptions;
    unsigned int _activeRemoteViewCount;
    unsigned int _windowLevelCount;
    float _windowLevelStack[5];
}

+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 allowHosted:(BOOL)arg3 matchesStatusBarOrientationOnAccess:(BOOL)arg4;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (BOOL)_isSystemWindow;
@property(nonatomic) struct CGPoint hostedWindowOffset; // @synthesize hostedWindowOffset=_hostedWindowOffset;
- (id)nonHostedWindow;
- (void)updateSubviewOrdering;
- (void)resetTransform;
- (struct CGPoint)magnifierScreenPointForPoint:(struct CGPoint)arg1 targetWindow:(id)arg2;
- (struct CGPoint)classicWindowPointForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect hostedFrame;
- (void)_restoreWindowLevel;
- (void)_setWindowLevel:(float)arg1;
@property(readonly) unsigned int contextID;
@property(nonatomic) BOOL useHostedInstance;
- (id)aboveStatusBarWindow;
- (void)updateForOrientation:(int)arg1 forceResetTransform:(BOOL)arg2;
- (void)updateForOrientation:(int)arg1;
- (void)sortSubviews;
- (void)delayHideWindow;
- (struct CGPoint)_adjustPointForHostedDisplay:(struct CGPoint)arg1 hasTarget:(BOOL)arg2 inset:(BOOL)arg3;
- (void)applicationWindowRotated:(id)arg1;
@property(readonly) UIScreen *_intendedScreen;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
@property(nonatomic) float defaultWindowLevel; // @synthesize defaultWindowLevel=_defaultWindowLevel;
- (id)_basicInitWithScreen:(id)arg1 options:(id)arg2;
- (void)_matchDeviceOrientation;
@property(readonly) NSDictionary *_options;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (BOOL)_disableViewScaling;
- (void)_updateTransformLayerForClassicPresentation;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (BOOL)_shouldResizeWithScene;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (void)_configureContextOptions:(id)arg1;
- (BOOL)isInternalWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)_sceneBounds;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (BOOL)_shouldParticipateInVirtualResizing;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_shouldTintStatusBar;
- (struct CGRect)_sceneReferenceBounds;
- (BOOL)_isTextEffectsWindow;
- (int)interfaceOrientation;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


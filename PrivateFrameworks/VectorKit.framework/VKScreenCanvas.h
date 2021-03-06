//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKAnimationRunner.h"
#import "VKCameraControllerDelegate.h"
#import "VKCameraDelegate.h"
#import "VKWorldDelegate.h"

@class NSArray, NSMutableArray, NSString, VKCamera, VKDispatch, VKLayoutContext, VKScene, VKWorld;

@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate>
{
    VKDispatch *_dispatch;
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    VKLayoutContext *_layoutContext;
    id <MDRenderTarget> _displayTarget;
    BOOL _needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    BOOL _userIsGesturing;
    BOOL _iconsShouldAlignToPixels;
    NSMutableArray *_cameraControllers;
    float _debugFramesPerSecond;
    BOOL _rendersInBackground;
    NSMutableArray *_animations[2];
    BOOL _isInBackground;
    BOOL _isHidden;
    struct VKEdgeInsets _edgeInsets;
    struct VKEdgeInsets _fullyOccludedEdgeInsets;
    struct VKEdgeInsets _labelEdgeInsets;
    BOOL _deallocing;
    BOOL _needsInitialization;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue>> _renderQueue;
    struct MapCamera *_mapCamera;
    struct RenderTree *_mapScene;
    Matrix_5173352a _bgColor;
    id <MDMapControllerDelegate> _mapDelegate;
}

@property(readonly, nonatomic) NSArray *cameraControllers; // @synthesize cameraControllers=_cameraControllers;
@property(readonly, nonatomic) BOOL needsInitialization; // @synthesize needsInitialization=_needsInitialization;
@property(nonatomic) float debugFramesPerSecond; // @synthesize debugFramesPerSecond=_debugFramesPerSecond;
- (void)removeCameraController:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (void)_queueUpdateDisplayLinkStatus;
- (void)animateWithTimestamp:(double)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)animationDidResume:(id)arg1;
@property(readonly, nonatomic) VKWorld *world; // @synthesize world=_world;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)gglWillDrawWithTimestamp;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (void)addCameraController:(id)arg1;
@property(nonatomic) id <MDMapControllerDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
- (void)didPresent;
- (void)layoutRenderQueue:(shared_ptr_06328420)arg1;
- (void)resetRenderQueue:(shared_ptr_06328420)arg1;
- (BOOL)wantsTimerTick;
- (BOOL)currentSceneRequiresMSAA;
- (BOOL)wantsRender;
@property(nonatomic) struct VKEdgeInsets labelEdgeInsets;
@property(nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets; // @synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets;
- (void)edgeInsetsWillBeginAnimating;
- (void)edgeInsetsDidEndAnimating;
- (void)runAnimation:(id)arg1;
@property(readonly, nonatomic) Matrix_5173352a bgColor; // @synthesize bgColor=_bgColor;
- (void)transferAnimationsTo:(id)arg1;
@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
- (void)initializeWithRenderer:(struct GLRenderer *)arg1;
@property(nonatomic) BOOL rendersInBackground;
- (id)initWithTarget:(id)arg1 device:(const shared_ptr_807ec9ac *)arg2 inBackground:(BOOL)arg3;
@property(nonatomic) BOOL iconsShouldAlignToPixels; // @synthesize iconsShouldAlignToPixels=_iconsShouldAlignToPixels;
@property(nonatomic, getter=isGesturing) BOOL gesturing;
- (void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2;
- (void)didEnterBackground;
- (BOOL)updateDisplayLinkStatus;
- (void)updateCameraForFrameResize;
@property(nonatomic) int targetDisplay;
- (BOOL)canRender;
- (void)updateWithTimestamp:(double)arg1;
- (void)cameraDidChange:(id)arg1;
- (void)willEnterForeground;
- (void).cxx_destruct;
@property(nonatomic) struct VKEdgeInsets edgeInsets;
- (id).cxx_construct;
- (void)forceLayout;
- (void)setContentsScale:(float)arg1;
- (void)animationDidStop:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsLayout;
- (BOOL)isHidden;
- (void)setNeedsDisplay;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


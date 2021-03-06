//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCNSceneRenderer.h"
#import "SCNTechniqueSupport.h"

@class EAGLContext, NSArray, NSRecursiveLock, NSString, SCNDisplayLink, SCNEventHandler, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene, UIColor;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport>
{
    double _currentSystemTime;
    NSString *__ibSceneName;
    unsigned int _ibNoMultisampling:1;
    unsigned int _allowsBrowsing:1;
    unsigned int _isOpaque:1;
    unsigned int _firstDrawDone:1;
    unsigned int _appIsDeactivated:1;
    unsigned int _viewIsOffscreen:1;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *__displayLink;
    SCNJitterer *_jitterer;
    NSRecursiveLock *_lock;
    UIColor *_backgroundColor;
    char *_snapshotImageData;
    unsigned long _snapshotImageDataLength;
    SCNEventHandler *_eventHandler;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    NSArray *_controllerGestureRecognizers;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)layerClass;
+ (id)_kvoKeysForwardedToRenderer;
+ (id)SCNJSExportProtocol;
@property(getter=isPlaying) BOOL playing;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)renderer;
- (void)stop:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (struct UIImage *)snapshot;
@property(readonly, nonatomic) void *context;
- (BOOL)isOpaque;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)setContentScaleFactor:(float)arg1;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)backgroundColor;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) EAGLContext *eaglContext;
- (void)switchToNextCamera;
- (void)switchToCameraNamed:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
@property(nonatomic) int preferredFramesPerSecond;
- (void)eventHandlerWantsRedraw;
- (BOOL)_supportsJiterringSyncRedraw;
- (void)pauseDisplayLink;
- (void)resumeDisplayLink;
- (void)setPointOfView:(id)arg1 animate:(BOOL)arg2;
- (void)_drawAtTime:(double)arg1;
- (void)_updateGestureRecognizers;
- (float)_flipY:(float)arg1;
- (id)_displayLink;
- (void)setEventHandler:(id)arg1;
- (void)_checkAndUpdateDisplayLinkStateIfNeeded;
- (id)eventHandler;
- (void)_setNeedsDisplay;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_flushDisplayLink;
- (BOOL)_ibWantsMultisampling;
- (id)_ibSceneName;
@property(nonatomic) BOOL allowsCameraControl;
- (void)set_ibSceneName:(id)arg1;
- (void)set_ibWantsMultisampling:(BOOL)arg1;
- (void)_commonInit:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
@property(nonatomic) unsigned int antialiasingMode;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
@property(retain, nonatomic) SKScene *overlaySKScene;
@property(nonatomic) BOOL showsStatistics;
@property(nonatomic) BOOL autoenablesDefaultLighting;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (void)_jitterRedisplay;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property(nonatomic) double sceneTime;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) SCNNode *pointOfView;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
@property(nonatomic) BOOL loops;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNScene *scene;
- (void *)__CFObject;
- (id)_authoringEnvironment;
- (BOOL)_canJitter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


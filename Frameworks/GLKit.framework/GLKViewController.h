//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GLKViewDelegate.h"
#import "NSCoding.h"

@class CADisplayLink, GLKDisplayLinkMessenger, NSString, UIScreen;

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate>
{
    BOOL _displayLinkPaused;
    BOOL _viewIsVisible;
    BOOL _firstResumeOccurred;
    BOOL _lastResumeOccurred;
    BOOL _lastUpdateOccurred;
    BOOL _lastDrawOccurred;
    BOOL _pauseOnWillResignActive;
    BOOL _resumeOnDidBecomeActive;
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    GLKDisplayLinkMessenger *_displayLinkMessenger;
    CDUnknownFunctionPointerType _updateIMP;
    id <GLKViewControllerDelegate> _delegate;
    int _screenFramesPerSecond;
    int _frameInterval;
    int _preferredFramesPerSecond;
    int _framesPerSecond;
    int _framesDisplayed;
    double _timeSinceFirstResumeStartTime;
    double _timeSinceLastResumeStartTime;
    double _timeSinceLastUpdatePreviousTime;
    double _timeSinceLastDrawPreviousTime;
    double _timeSinceFirstResume;
    double _timeSinceLastResume;
    double _timeSinceLastUpdate;
    double _timeSinceLastDraw;
}

@property(nonatomic, getter=isPaused) BOOL paused;
- (void)_initCommon;
@property(readonly, nonatomic) int framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) int frameInterval; // @synthesize frameInterval=_frameInterval;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)setView:(id)arg1;
@property(nonatomic) id <GLKViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) int preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(readonly, nonatomic) double timeSinceLastDraw; // @synthesize timeSinceLastDraw=_timeSinceLastDraw;
@property(readonly, nonatomic) double timeSinceLastUpdate; // @synthesize timeSinceLastUpdate=_timeSinceLastUpdate;
@property(readonly, nonatomic) int framesDisplayed; // @synthesize framesDisplayed=_framesDisplayed;
@property(nonatomic) int screenFramesPerSecond; // @synthesize screenFramesPerSecond=_screenFramesPerSecond;
@property(nonatomic) CDUnknownFunctionPointerType updateIMP; // @synthesize updateIMP=_updateIMP;
@property(nonatomic) double timeSinceLastDrawPreviousTime; // @synthesize timeSinceLastDrawPreviousTime=_timeSinceLastDrawPreviousTime;
@property(nonatomic) BOOL lastDrawOccurred; // @synthesize lastDrawOccurred=_lastDrawOccurred;
@property(nonatomic) double timeSinceLastUpdatePreviousTime; // @synthesize timeSinceLastUpdatePreviousTime=_timeSinceLastUpdatePreviousTime;
@property(nonatomic) BOOL lastUpdateOccurred; // @synthesize lastUpdateOccurred=_lastUpdateOccurred;
@property(nonatomic) double timeSinceLastResumeStartTime; // @synthesize timeSinceLastResumeStartTime=_timeSinceLastResumeStartTime;
@property(nonatomic) BOOL lastResumeOccurred; // @synthesize lastResumeOccurred=_lastResumeOccurred;
@property(nonatomic) double timeSinceFirstResumeStartTime; // @synthesize timeSinceFirstResumeStartTime=_timeSinceFirstResumeStartTime;
@property(nonatomic) BOOL firstResumeOccurred; // @synthesize firstResumeOccurred=_firstResumeOccurred;
@property(retain, nonatomic) GLKDisplayLinkMessenger *displayLinkMessenger; // @synthesize displayLinkMessenger=_displayLinkMessenger;
@property(nonatomic) BOOL displayLinkPaused; // @synthesize displayLinkPaused=_displayLinkPaused;
@property(nonatomic) BOOL resumeOnDidBecomeActive; // @synthesize resumeOnDidBecomeActive=_resumeOnDidBecomeActive;
@property(nonatomic) BOOL pauseOnWillResignActive; // @synthesize pauseOnWillResignActive=_pauseOnWillResignActive;
@property(readonly, nonatomic) double timeSinceLastResume; // @synthesize timeSinceLastResume=_timeSinceLastResume;
@property(readonly, nonatomic) double timeSinceFirstResume; // @synthesize timeSinceFirstResume=_timeSinceFirstResume;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_resumeByNotification;
- (void)_pauseByNotification;
- (void)_configureNotifications;
- (int)_calculateScreenFramesPerSecond:(id)arg1;
- (void)_updateScreenIfChanged;
- (void)_updateAndDraw;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
@property(nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

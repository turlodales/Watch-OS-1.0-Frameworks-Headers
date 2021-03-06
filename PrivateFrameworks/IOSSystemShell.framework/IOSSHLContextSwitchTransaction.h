//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOSSystemShell/IOSSHLWorkspaceTransaction.h>

@class IOSSHLSceneBackgroundedStatusAssertion, NSSet;

@interface IOSSHLContextSwitchTransaction : IOSSHLWorkspaceTransaction
{
    CDUnknownBlockType _resultBlock;
    NSSet *_fromApplicationScenes;
    IOSSHLSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    _Bool _shouldInterruptCurrentTransaction;
}

@property(nonatomic) _Bool shouldInterruptCurrentTransaction; // @synthesize shouldInterruptCurrentTransaction=_shouldInterruptCurrentTransaction;
- (_Bool)_departingContextContainsScene:(id)arg1;
- (void)_fireAndClearResultBlockIfNecessaryForErrorCode:(int)arg1;
- (_Bool)_isDepartingContext:(id)arg1;
- (void)_fireAndClearResultBlockIfNecessaryForSuccess;
- (void)_sendExitingScenesToBackground;
- (void)_didComplete;
- (void)_captureDepartingContext;
- (void)_begin;
- (void)_fireAndClearResultBlockIfNecessaryForFailure;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_activateEnteringScenes;
- (void)_cleanupEnteringScenes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end


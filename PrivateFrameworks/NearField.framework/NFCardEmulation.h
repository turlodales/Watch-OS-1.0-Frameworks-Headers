//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface NFCardEmulation : NSObject
{
    BOOL _ceEnable;
    BOOL _fieldDetectEnable;
    unsigned char _source;
    id <NFCardEmulationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)_didReceiveRestrictedModeChanged:(BOOL)arg1;
- (void)_didReceiveTimerExpired:(id)arg1;
- (void)_didReceiveButtonPressed:(id)arg1;
- (void)_didEndTransaction:(id)arg1;
- (void)_didStartTransaction:(id)arg1;
- (void)_didReceiveCardSelect:(id)arg1;
- (void)_didDetectField:(BOOL)arg1;
- (void)_didFDChangeSuspended:(BOOL)arg1;
- (void)_didCEChangeSuspended:(BOOL)arg1;
- (id)initWithSource:(unsigned char)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)_stopFieldDetect;
- (void)_startFieldDetect;
- (void)_stopCardEmulation;
- (void)_startCardEmulation;
- (void)_didReceiveEvent:(id)arg1;
- (void)stopFieldDetect;
- (void)startFieldDetect;
- (void)stopCardEmulation;
- (void)startCardEmulation;
- (id)initWithSource:(unsigned char)arg1 delegate:(id)arg2 queue:(id)arg3 idleExit:(BOOL)arg4;
- (void)dealloc;

@end


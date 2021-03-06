//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@class NSMutableArray, NSMutableDictionary;

@interface UIStatusBarServerThread : NSThread
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    CDStruct_4ec3be00 _statusBarData;
    CDStruct_4ec3be00 _composedStatusBarData;
    CDStruct_408a6cfc _overrides;
    struct __CFDictionary *_doubleHeightStatusStrings;
    struct __CFDictionary *_glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    BOOL _composedStatusBarDataValid;
}

- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (BOOL)_permanentizeStatusBarOverrideData;
- (void)_postStatusBarOverrideData:(CDStruct_408a6cfc *)arg1;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(int)arg2;
- (id)_doubleHeightStatusStringForStyle:(int)arg1;
- (void)_postGlowAnimationState:(BOOL)arg1 forStyle:(int)arg2;
- (BOOL)_glowAnimationStateForStyle:(int)arg1;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_postStatusBarData:(CDStruct_4ec3be00 *)arg1 actions:(int)arg2;
- (CDStruct_408a6cfc *)_statusBarOverrideData;
- (void)_removePublisher:(struct __CFMachPort *)arg1;
- (void)_removeClient:(struct __CFMachPort *)arg1;
- (void)_addClient:(unsigned int)arg1;
- (void)main;
- (double)_glowAnimationEndTimeForStyle:(int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (int)_styleOverrides;
- (CDStruct_4ec3be00 *)_statusBarData;
- (void)_broadcastStyleOverrides;
- (void)_broadcastStatusBarDataWithActions:(int)arg1;
- (id)_publisherForPort:(unsigned int)arg1;

@end


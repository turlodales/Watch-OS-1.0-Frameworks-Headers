//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTPowerMonitorDelegate.h"
#import "PCLoggingDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, PCSimpleTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate, CUTPowerMonitorDelegate>
{
    double _fireTime;
    double _startTime;
    unsigned int _guidancePriority;
    double _minimumEarlyFireProportion;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)_currentGuidanceTime;
+ (double)currentMachTimeInterval;
+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned int)arg2;
+ (id)_backgroundUpdateQueue;
+ (id)lastSystemWakeDate;
@property(nonatomic) BOOL disableSystemWaking; // @synthesize disableSystemWaking=_disableSystemWaking;
@property(nonatomic) double minimumEarlyFireProportion; // @synthesize minimumEarlyFireProportion=_minimumEarlyFireProportion;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned int)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (double)_earlyFireTime;
- (double)_nextForcedAlignmentAbsoluteTime;
- (BOOL)firingIsImminent;
- (void)_fireTimerFired;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)_updateTimers;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned int)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_serviceIdentifier;
- (id)userInfo;
- (BOOL)isValid;
- (void)invalidate;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (void)scheduleInQueue:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
@property(readonly, nonatomic) double fireTime;
- (void)scheduleInRunLoop:(id)arg1;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


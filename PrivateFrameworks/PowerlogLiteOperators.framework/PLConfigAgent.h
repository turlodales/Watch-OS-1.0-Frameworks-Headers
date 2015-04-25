//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLNSTimerOperatorComposition;

@interface PLConfigAgent : PLAgent
{
    PLNSTimerOperatorComposition *_timedTrigger;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;
@property(retain) PLNSTimerOperatorComposition *timedTrigger; // @synthesize timedTrigger=_timedTrigger;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (id)hwBoardRevision;
- (id)hwConfig;
- (id)logAutomatedDeviceGroup;
- (BOOL)disableCABlanking;
- (BOOL)noWatchdogs;
- (id)basebandFirmware;
- (id)baseband;
- (int)autolockTime;
- (id)bootArgs;
- (id)crashReporterKey;
- (void)logEventNoneConfig;
- (void)initOperatorDependancies;
- (id)hardwareModel;
- (id)deviceName;
- (void).cxx_destruct;
- (id)buildVersion;
- (void)log;
- (id)init;

@end

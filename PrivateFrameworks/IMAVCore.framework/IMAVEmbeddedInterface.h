//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
{
}

+ (void)updateCriticalState;
- (id)_chatForAudioPropertiesIgnoringChat:(id)arg1;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;
- (int)_runPingTestForChat:(id)arg1;
- (int)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2;
- (void)endInterruptionForChat:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (void)updateInterruptionForChat:(id)arg1;
- (void)chatStateUpdated;
- (void)startInterruptionForChat:(id)arg1;

@end

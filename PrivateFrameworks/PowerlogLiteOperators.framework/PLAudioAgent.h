//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSDictionary, NSMutableArray, NSString, PLEntry, PLXPCListenerOperatorComposition;

@interface PLAudioAgent : PLAgent
{
    BOOL _speakerIsPlayingAudio;
    NSMutableArray *_nsOutputNotifications;
    NSMutableArray *_nsRoutingNotifications;
    PLXPCListenerOperatorComposition *_audioAppXPCListener;
    PLXPCListenerOperatorComposition *_speakerAmpXPCListener;
    PLEntry *_entryRoutingOld;
    PLEntry *_entrySpeakerPowerOld;
    NSString *_audioHardware;
    NSDictionary *_audioPowerModel;
}

+ (id)entryEventForwardDefinitionRouting;
+ (id)entryEventForwardDefinitionOutput;
+ (id)entryEventPointDefinitionSpeakerAmp;
+ (id)entryEventPointDefinitionAudioApp;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
- (id)volume;
@property(retain) PLEntry *entrySpeakerPowerOld; // @synthesize entrySpeakerPowerOld=_entrySpeakerPowerOld;
@property BOOL speakerIsPlayingAudio; // @synthesize speakerIsPlayingAudio=_speakerIsPlayingAudio;
@property(retain) PLXPCListenerOperatorComposition *speakerAmpXPCListener; // @synthesize speakerAmpXPCListener=_speakerAmpXPCListener;
@property(retain) PLXPCListenerOperatorComposition *audioAppXPCListener; // @synthesize audioAppXPCListener=_audioAppXPCListener;
@property(readonly) NSMutableArray *nsRoutingNotifications; // @synthesize nsRoutingNotifications=_nsRoutingNotifications;
- (double)audioPowerForRoute:(id)arg1 forVolume:(double)arg2;
- (double)modelAudioPowerForK94:(double)arg1;
@property(readonly) NSDictionary *audioPowerModel; // @synthesize audioPowerModel=_audioPowerModel;
@property(retain) PLEntry *entryRoutingOld; // @synthesize entryRoutingOld=_entryRoutingOld;
- (BOOL)headsetHasInput;
- (BOOL)headphonesConnected;
- (id)outputCategory;
- (id)activeRoute;
- (int)nowPlayingAppPID;
- (void)modelAudioPower;
- (void)modelAudioPowerSpeaker:(id)arg1;
- (void)createBluetoothAccountingEvents:(id)arg1;
- (void)createAirPlayAccountingEvents:(id)arg1;
- (void)createAudioAccountingEvents:(id)arg1;
- (void)logEventPointSpeakerAmp:(id)arg1;
- (void)logEventPointAudioApp:(id)arg1;
@property(readonly) NSString *audioHardware; // @synthesize audioHardware=_audioHardware;
- (id)returnVolumeOrOutPutCategory:(int)arg1;
- (void)logEventForwardRouting;
- (void)logEventForwardOutput;
@property(readonly) NSMutableArray *nsOutputNotifications; // @synthesize nsOutputNotifications=_nsOutputNotifications;
- (void)setupAVSystemController;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (BOOL)active;
- (id)init;
- (BOOL)muted;

@end


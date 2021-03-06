//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"
#import "RMSDAAPControlSessionDelegate.h"
#import "RMSDiscoverySessionDelegate.h"
#import "RMSPairingSessionDelegate.h"
#import "RMSSessionManagerDelegate.h"

@class IDSService, NSMutableDictionary, NSString, RMSSessionManager;

@interface RMSIDSServer : NSObject <IDSServiceDelegate, RMSSessionManagerDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSDAAPControlSessionDelegate>
{
    RMSSessionManager *_sessionManager;
    NSMutableDictionary *_nowPlayingSessions;
    NSMutableDictionary *_pairingSessions;
    NSMutableDictionary *_touchRemoteSessions;
    IDSService *_idsService;
}

+ (id)server;
- (void)sessionManager:(id)arg1 sessionDidTimeout:(int)arg2;
- (void)_sendData:(id)arg1 type:(unsigned short)arg2 priority:(int)arg3 timeout:(int)arg4 queueOneID:(id)arg5 inResponseTo:(id)arg6;
- (void)_sendData:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 inResponseTo:(id)arg5;
- (void)_cleanupStaleSessions:(id)arg1;
- (void)_handleSeekToPlaybackTime:(id)arg1;
- (void)_handleAddToWishlist:(id)arg1;
- (void)_handleSetLikeState:(id)arg1;
- (void)_handleEndPairing:(id)arg1;
- (void)_handleBeginPairing:(id)arg1;
- (void)_handleNowPlayingArtworkRequest:(id)arg1;
- (void)_handleEndObservingNowPlaying:(id)arg1;
- (void)_handleBeginObservingNowPlaying:(id)arg1;
- (void)_handleNavigationCommand:(id)arg1;
- (void)_handleTouchEnd:(id)arg1;
- (void)_handleTouchMove:(id)arg1;
- (void)_handleSetVolume:(id)arg1;
- (void)_handlePickAudioRoute:(id)arg1;
- (void)_handlePlaybackCommand:(id)arg1;
- (void)_handleLogout:(id)arg1;
- (void)_handleConnectToService:(id)arg1;
- (void)_handleEndDiscovery:(id)arg1;
- (void)_handleBeginDiscovery:(id)arg1;
- (void)_handleSessionHeartbeat:(id)arg1;
- (void)controlSessionDidEnd:(id)arg1;
- (void)controlSession:(id)arg1 didUpdateVolume:(float)arg2;
- (void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3;
- (void)pairingSessionDidFail:(id)arg1;
- (void)discoverySessionNetworkAvailabilityDidChange:(id)arg1;
- (void)discoverySessionDidUpdateAvailableServices:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


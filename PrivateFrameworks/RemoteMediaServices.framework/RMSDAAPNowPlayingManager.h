//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSObject<OS_dispatch_source>, NSString, NSURLSessionDataTask, RMSControlInterface, RMSDAAPRequestManager, RMSNowPlayingInfo;

@interface RMSDAAPNowPlayingManager : NSObject
{
    RMSDAAPRequestManager *_requestManager;
    RMSNowPlayingInfo *_currentNowPlayingInfo;
    RMSControlInterface *_controlInterface;
    NSURLSessionDataTask *_nowPlayingInfoRequest;
    NSURLSessionDataTask *_artworkRequest;
    NSURLSessionDataTask *_audioRoutesRequest;
    NSURLSessionDataTask *_volumeRequest;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    int _requestBackoffInterval;
    int _artworkRequestBackoffInterval;
    NSString *_currentArtworkIdentifier;
    NSArray *_currentAudioRoutes;
    NSNumber *_lastVolume;
    BOOL _isObserving;
    BOOL _observing;
    id <RMSDAAPNowPlayingManagerDelegate> _delegate;
}

- (BOOL)_audioRoutes:(id)arg1 equalAudioRoutes:(id)arg2;
- (void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg1 delay:(double)arg2;
- (void)_cancelArtworkRetryTimer;
- (void)_requestNowPlayingInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_refreshNowPlayingInfoRequest;
- (void)_requestVolume;
- (void)_requestAudioRoutes;
- (void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg1;
- (void)beginObservingNowPlaying;
@property(readonly, nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
- (void)endObservingNowPlaying;
- (id)initWithRequestManager:(id)arg1;
@property(retain, nonatomic) RMSControlInterface *controlInterface; // @synthesize controlInterface=_controlInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RMSDAAPNowPlayingManagerDelegate> delegate; // @synthesize delegate=_delegate;

@end

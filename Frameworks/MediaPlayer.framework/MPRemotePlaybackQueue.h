//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MPRemotePlaybackQueue : NSObject
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
    NSDictionary *_userInfo;
}

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic, getter=isRequestingImmediatePlayback) BOOL requestingImmediatePlayback;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

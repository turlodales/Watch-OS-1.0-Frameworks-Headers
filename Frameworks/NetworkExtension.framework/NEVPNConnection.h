//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NEVPNConnection : NSObject
{
    int _status;
    void *_session;
}

@property(readonly) int status; // @synthesize status=_status;
- (id)init;
- (void)dealloc;
- (void)destroySession;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopVPNTunnel;
- (BOOL)startVPNTunnelAndReturnError:(id *)arg1;
@property void *session; // @synthesize session=_session;

@end


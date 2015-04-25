//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface PLXPCRelay : NSObject
{
    BOOL _relayActive;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_xpc_object> *_relayConnection;
}

+ (id)sharedInstance;
- (void)handlePeer:(id)arg1 forEvent:(id)arg2;
- (BOOL)isDebugEnabled;
@property(retain, nonatomic) NSObject<OS_xpc_object> *relayConnection; // @synthesize relayConnection=_relayConnection;
@property BOOL relayActive; // @synthesize relayActive=_relayActive;
- (void)resetRelayConnection;
@property(retain) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)startRelay;
- (void)stopRelay;
- (void).cxx_destruct;
- (id)init;

@end

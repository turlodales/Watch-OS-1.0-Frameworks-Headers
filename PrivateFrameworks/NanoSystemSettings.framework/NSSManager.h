//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface NSSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSXPCConnection *_xpcConnection;
}

+ (void)displayAirplaneModeMirroringUserEducationAlert;
+ (void)displayAlertFailedRemoteAirplaneMode;
+ (void)displayAlertWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 icon:(id)arg4;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)unsafe_invalidate;
- (void)enableAirplaneMode:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)protocol;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (id)init;
- (void)dealloc;

@end

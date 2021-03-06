//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface PKDaemonClient : NSObject
{
    NSObject<OS_xpc_object> *_pkd;
    NSObject<OS_dispatch_queue> *_replyQueue;
    long long _protocolVersion;
}

@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) NSObject<OS_xpc_object> *pkd; // @synthesize pkd=_pkd;
- (void)releaseHold:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)bulkPlugins:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removePlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addPlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)set:(id)arg1 uuids:(id)arg2;
- (id)request:(const char *)arg1;
- (void)send:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)request:(const char *)arg1 paths:(id)arg2;
- (void)copyReceipt:(CDUnknownBlockType)arg1;
- (void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)readyPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)errorInReply:(id)arg1;
@property long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (id)initWithServiceName:(const char *)arg1;
- (void).cxx_destruct;

@end


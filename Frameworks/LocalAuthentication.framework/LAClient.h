//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LAContextXPC.h"

@class NSData, NSError, NSMutableArray, NSString, NSXPCConnection;

@interface LAClient : NSObject <LAContextXPC>
{
    id <LAContextXPC> _remoteContext;
    NSXPCConnection *_daemonConnection;
    NSError *_permanentError;
    NSMutableArray *_callInvalidationBlocks;
    NSString *_creatorDisplayName;
    NSData *_externalizedContext;
}

+ (id)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 error:(id *)arg3;
+ (void)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluatePolicy:(int)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithDaemonConnection:(id)arg1 remoteContext:(id)arg2 constInfo:(id)arg3;
- (void)_setPermanentError:(id)arg1;
@property(readonly) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(readonly) NSString *creatorDisplayName; // @synthesize creatorDisplayName=_creatorDisplayName;

@end


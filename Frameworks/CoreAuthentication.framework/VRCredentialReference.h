//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LAClient, NSData, NSDictionary, NSString;

@interface VRCredentialReference : NSObject
{
    LAClient *_client;
    id <LAUIDelegate> _delegateProxy;
    NSDictionary *_lastEvaluatePolicyResult;
    NSString *_creatorDisplayName;
    NSData *_credentialHandle;
}

- (void)sendClientRequest:(id)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setupWithCredentialHandle:(id)arg1 uiDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluatePolicy:(id)arg1 hints:(id)arg2 reply:(CDUnknownBlockType)arg3;
@property(readonly) NSData *credentialHandle; // @synthesize credentialHandle=_credentialHandle;
- (void).cxx_destruct;
- (void)invalidate;
- (id)resultForTag:(id)arg1;
- (BOOL)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (BOOL)evaluatePolicy:(id)arg1 hints:(id)arg2 error:(id *)arg3;
- (BOOL)setupNewReferenceWithError:(id *)arg1;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setupWithCredentialHandle:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupNewReferenceWithReply:(CDUnknownBlockType)arg1;
- (void)resultForTag:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 hints:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)setupWithCredentialHandle:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *creatorDisplayName; // @synthesize creatorDisplayName=_creatorDisplayName;
- (void)setupWithCredentialHandle:(id)arg1 domain:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end


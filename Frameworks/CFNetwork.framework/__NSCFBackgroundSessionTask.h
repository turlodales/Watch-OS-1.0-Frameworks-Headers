//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

#import "NSURLSessionTaskSubclass.h"

@class NSError, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass>
{
    BOOL _sentCancel;
    id <NDBackgroundSessionProtocol> _remoteSession;
    unsigned int _ident;
    NSError *_immediateError;
}

- (void)dealloc;
@property(retain) NSError *immediateError; // @synthesize immediateError=_immediateError;
- (void)setTaskDescription:(id)arg1;
@property(retain) id <NDBackgroundSessionProtocol> remoteSession; // @synthesize remoteSession=_remoteSession;
- (id)initWithBackgroundTask:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_connectionWaitingWithError:(id)arg1;
- (void)_onqueue_didResume;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned int)arg4;
@property(readonly) unsigned int ident; // @synthesize ident=_ident;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned int)arg4;
- (id)_timingData;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_disavow;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


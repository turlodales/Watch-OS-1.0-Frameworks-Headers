//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface AAURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;
    NSMutableDictionary *_pendingCompletionsByTask;
    NSMutableDictionary *_receivedDataByTask;
    NSMutableDictionary *_retryCountByRequest;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

+ (id)sharedURLSession;
- (BOOL)_unsafe_retryTaskIfPossible:(id)arg1;
- (BOOL)_isRecoverableError:(id)arg1;
- (id)_URLSession;
- (void)beginDataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

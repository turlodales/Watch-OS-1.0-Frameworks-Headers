//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NSOperation : NSObject
{
    id _private;
    int _private1;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentOperation;
- (void)finalize;
@property int queuePriority;
@property(readonly, getter=isExecuting) BOOL executing;
@property(readonly, getter=isFinished) BOOL finished;
- (void *)observationInfo;
- (void)main;
- (void)start;
@property(copy) CDUnknownBlockType completionBlock;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(copy) NSString *name;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)cancel;
@property(readonly, copy) NSArray *dependencies;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
@property int qualityOfService;
- (int)_effQoS;
@property(readonly, getter=isAsynchronous) BOOL asynchronous;
- (id)__;
@property double threadPriority;
@property(readonly, getter=isReady) BOOL ready;
- (id)_activity;
@property(readonly, getter=isConcurrent) BOOL concurrent;
- (void)waitUntilFinished;
- (id)_implicitObservationInfo;
- (void)setObservationInfo:(void *)arg1;

@end

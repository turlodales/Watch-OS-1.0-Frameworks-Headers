//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL;

@interface CPLFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    NSURL *_fileURL;
    id <CPLFileWatcherDelegate> _delegate;
}

- (void)stopWatching;
- (void)startWatching;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)_stopWatchingParent;
- (void)_startWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingNode;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CPLFileWatcherDelegate> delegate; // @synthesize delegate=_delegate;

@end


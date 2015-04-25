//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLChangeBatch, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPushToTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    CPLChangeBatch *_uploadBatch;
    NSArray *_uploadResourceTasks;
    NSArray *_staleOrUnavailableResources;
    NSArray *_resourcesForBackgroundUpload;
    id <CPLEngineTransportUploadBatchTask> _uploadTask;
    unsigned int _lastReportedProgress;
    unsigned int _countOfPushedBatches;
    NSString *_clientCacheIdentifier;
}

- (id)taskIdentifier;
- (void)_popNextBatchAndContinue;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (BOOL)_prepareResourcesToUploadInBatch:(id)arg1 error:(id *)arg2;
- (BOOL)_discardResourcesToUploadFromBatch:(id)arg1 error:(id *)arg2;
- (BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id *)arg2;
- (void)_doOneIteration;
- (id)initWithEngineLibrary:(id)arg1;
- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (void)launch;

// Remaining properties
@property(retain) id <CPLPushToTransportTaskDelegate> delegate;

@end

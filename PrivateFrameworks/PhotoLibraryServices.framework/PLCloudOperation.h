//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLCloudOperationResource, PLCloudPhotoLibraryManager, PLCloudScenario;

@interface PLCloudOperation : NSObject
{
    PLCloudPhotoLibraryManager *_connection;
    BOOL _running;
    unsigned int _cost;
    long _createdAt;
    PLCloudScenario *_scenario;
    PLCloudOperationResource *_operationResource;
}

@property BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic) PLCloudScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly, nonatomic) long createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) PLCloudOperationResource *operationResource; // @synthesize operationResource=_operationResource;
- (id)initWithScenario:(id)arg1 cloudConnection:(id)arg2;
- (void)runOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int cost; // @synthesize cost=_cost;
- (void)requestCancel;
- (id)resource;
@property(readonly, nonatomic) PLCloudPhotoLibraryManager *connection; // @synthesize connection=_connection;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


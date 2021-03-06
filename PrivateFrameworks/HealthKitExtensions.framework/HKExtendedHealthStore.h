//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKExtendedClientInterface.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, _HKExtendedHealthStoreProxy;

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface>
{
    CDUnknownBlockType _achievementsAddedHandler;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_connection;
    _HKExtendedHealthStoreProxy *_connectionProxy;
}

@property(retain, nonatomic) _HKExtendedHealthStoreProxy *connectionProxy; // @synthesize connectionProxy=_connectionProxy;
- (id)clientInterface;
- (void)fetchAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)daemonDidStart;
@property(copy, nonatomic) CDUnknownBlockType achievementsAddedHandler;
- (void)achievementsWereAdded;
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAchievementAsViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAchievementsAlerted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnalertedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)serverInterface;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


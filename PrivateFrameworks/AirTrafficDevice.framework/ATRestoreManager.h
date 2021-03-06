//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATEnvironmentMonitorObserver.h"
#import "ATSessionObserver.h"

@class ATAssetManager, ATSession, MSVXPCTransaction, NSObject<OS_dispatch_queue>, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver>
{
    ATAssetManager *_assetManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelled;
    MSVXPCTransaction *_xpcTransaction;
    ATSession *_restoreSession;
}

+ (id)sharedManager;
- (id)_dataClasses;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (BOOL)restoreSessionActive;
- (void)sessionDidFinish:(id)arg1;
- (void).cxx_destruct;
- (void)resume;
- (void)_start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUUnlockClient.h"

@class NSString, NSXPCConnection;

@interface PUConnection : NSObject <PUUnlockClient>
{
    CDUnknownBlockType _getRemoteDevicePasscodeStateHandler;
    CDUnknownBlockType _remoteDeviceRemoveLockoutHandler;
    id <PUConnectionDelegate> _delegate;
    NSXPCConnection *_connection;
}

- (void)didGetRemoteDeviceHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isUnlockOnly:(BOOL)arg3 error:(id)arg4;
- (void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompletePasscodeAction:(BOOL)arg1 error:(id)arg2;
- (void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didPairForUnlock:(BOOL)arg1 error:(id)arg2;
- (void)requestRemoteDevicePasscodeAction:(int)arg1 type:(int)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)unpairForUnlock;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)getRemoteDeviceState:(CDUnknownBlockType)arg1;
- (void)requestRemoteDeviceRemoveLockout:(CDUnknownBlockType)arg1;
- (void)requestRemoteDeviceUnlockNotification;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PUConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


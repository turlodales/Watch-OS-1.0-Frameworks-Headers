//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSAccountControllerDelegate.h"
#import "IDSConnectionDelegatePrivate.h"
#import "IDSDaemonListenerProtocol.h"

@class IDSAccount, IDSAccountController, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_xpc_object>, NSSet, NSString;

@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol>
{
    IDSAccountController *_accountController;
    NSMutableDictionary *_uniqueIDToConnection;
    NSSet *_commands;
    NSString *_rerouteService;
    NSMapTable *_delegateToInfo;
    id _delegateContext;
    NSMutableDictionary *_protobufSelectors;
    NSMutableSet *_lastIsActiveSet;
    BOOL _pretendingToBeFull;
    BOOL _everHadDelegate;
    unsigned int _listenerCaps;
    NSObject<OS_xpc_object> *_connection;
}

- (BOOL)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (id)_sendingAccountForAccount:(id)arg1;
- (void)_handlePretendingToBeFullWithIdentifier:(id *)arg1;
- (void)_callIsActiveChanged;
- (void)_setupNewConnectionForAccount:(id)arg1;
- (void)_tearDownConnectionForUniqueID:(id)arg1;
- (void)_logConnectionMap;
- (void)_setupIDSWakeListenerForService:(id)arg1;
- (void)_processAccountSet:(id)arg1;
@property(nonatomic, getter=isPretendingToBeFull) BOOL pretendingToBeFull;
- (void)setPreferInfraWiFi:(BOOL)arg1;
- (id)uriForFromID:(id)arg1;
- (id)deviceForFromID:(id)arg1;
@property(readonly, retain, nonatomic) IDSAccount *iCloudAccount;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (BOOL)cancelIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(int)arg5 options:(id)arg6 identifier:(id *)arg7 error:(id *)arg8;
- (BOOL)sendData:(id)arg1 priority:(int)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (BOOL)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(BOOL)arg2;
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(BOOL)arg3;
- (id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2 delegateContext:(id)arg3;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3;
- (void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(int)arg4 error:(id)arg5 lastCall:(BOOL)arg6;
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)connection:(id)arg1 devicesChanged:(id)arg2;
- (void)connection:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)daemonConnected;
@property(readonly, copy, nonatomic) NSString *serviceDomain;
@property(readonly, copy, nonatomic) NSArray *devices;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
@property(readonly, copy, nonatomic) NSSet *accounts;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)removeDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

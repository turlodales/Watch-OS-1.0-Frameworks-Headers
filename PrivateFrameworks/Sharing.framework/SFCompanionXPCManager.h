//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSXPCConnection;

@interface SFCompanionXPCManager : NSObject
{
    BOOL _invalid;
    BOOL _interrupted;
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
}

+ (id)sharedManager;
+ (id)hotspotInterface;
+ (id)hotspotClientInterface;
+ (id)unlockInterface;
+ (id)scannerInterface;
+ (id)scannerClientInterface;
+ (id)advertiserInterface;
+ (id)advertiserClientInterface;
+ (id)browserInterface;
+ (id)browserClientInterface;
+ (id)connectionManagerInterface;
+ (id)connectionManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)xpcManagerInterface;
+ (void)initialize;
@property(getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)companionConnectionProxyForService:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)companionBrowserProxyforIdentifier:(id)arg1 serviceType:(id)arg2 client:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)notifyOfResume;
- (void)notifyOfInvalidation;
- (void)notifyObservers;
- (void)setupConnection;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)unlockManagerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property BOOL interrupted; // @synthesize interrupted=_interrupted;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
@property(retain) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    struct __CFDictionary *_networkObservers;
    struct __SCPreferences *_wifiPreferences;
    struct __CFDictionary *_wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}

+ (id)sharedNetworkObserver;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)isNetworkReachable;
- (void)removeWiFiObserver:(id)arg1;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)_wifiObserversInitialize;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isWiFiEnabled;

@end


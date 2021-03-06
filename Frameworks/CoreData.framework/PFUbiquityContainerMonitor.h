//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, PFUbiquityContainerIdentifier, PFUbiquityLocation;

@interface PFUbiquityContainerMonitor : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    int _containerState;
    int _monitorState;
    BOOL _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <NSObject><NSCopying><NSCoding> _currentIdentityToken;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_identityTokenOverride;
}

@property(readonly, nonatomic) PFUbiquityContainerIdentifier *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)description;
- (id)init;
- (void)dealloc;
@property(nonatomic) int containerState; // @synthesize containerState=_containerState;
- (void)checkStoresAndContainer:(id)arg1;
- (void)scheduleCheckBlock:(id)arg1;
- (void)setContainerIdentifier:(id)arg1 transitionType:(unsigned int)arg2;
@property(nonatomic) int monitorState; // @synthesize monitorState=_monitorState;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (void)didChangeContainerIdentifier:(unsigned int)arg1;
- (void)containerDeleteDetected:(id)arg1;
- (void)willChangeContainerIdentifier:(unsigned int)arg1;
- (void)didChangeMonitorState;
- (void)willChangeMonitorState;
- (void)didChangeContainerState;
- (void)willChangeContainerState;
@property(readonly, nonatomic) id <NSObject><NSCopying><NSCoding> currentIdentityToken; // @synthesize currentIdentityToken=_currentIdentityToken;
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)stopMonitor;
- (BOOL)startMonitor:(id *)arg1;

@end


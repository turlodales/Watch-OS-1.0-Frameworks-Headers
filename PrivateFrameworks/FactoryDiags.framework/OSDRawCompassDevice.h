//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue, OSDSPU;

@interface OSDRawCompassDevice : NSObject
{
    NSOperationQueue *_operationQueue;
    struct __IOHIDEventSystemClient *_HIDSystemClient;
    struct __IOHIDServiceClient *_CompassPlugin;
    NSMutableArray *_samples;
    SEL _registeredCallback;
    id _registeredDelegate;
    OSDSPU *_spu;
}

@property(nonatomic) struct __IOHIDServiceClient *_CompassPlugin; // @synthesize _CompassPlugin;
- (struct __IOHIDServiceClient *)getCompassPlugin;
- (int)registerCompassCallback:(SEL)arg1 delegate:(id)arg2 operationQueue:(id)arg3 sampleInterval:(float)arg4;
- (void)unregisterCompassCallbackIOKit;
- (int)registerCompassCallbackIOKit:(float)arg1;
- (void)unregisterCompassCallback;
- (id)sampleForDuration:(float)arg1 sampleInterval:(float)arg2;
- (struct __IOHIDEventSystemClient *)getHIDSystem;
- (void)enqueueCallback:(id)arg1;
- (void)sampleForDurationCallback:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSDControllerProtocol.h"

@class NSLock, NSString;

@interface OSDPIDController : NSObject <OSDControllerProtocol>
{
    float kp;
    float ki;
    float kd;
    double previousAbsoluteTime;
    float integralOfInput;
    float maxIntegratorWindup;
    float minIntegratorWindup;
    float lastOutput;
    float lastInput;
    _Bool controllerConfigured;
    NSLock *resourceLock;
}

@property(nonatomic, setter=setMaxIntegratorWindup:) float maxIntegratorWindup; // @synthesize maxIntegratorWindup;
@property(nonatomic, setter=setMinIntegratorWindup:) float minIntegratorWindup; // @synthesize minIntegratorWindup;
@property(nonatomic, setter=setkd:) float kd; // @synthesize kd;
@property(nonatomic, setter=setki:) float ki; // @synthesize ki;
@property(nonatomic, setter=setkp:) float kp; // @synthesize kp;
- (float)updateControllerMonitoredVariables:(float)arg1;
- (_Bool)pauseController;
- (float)getLastOutput;
- (_Bool)resetController;
- (_Bool)configureController:(id)arg1;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

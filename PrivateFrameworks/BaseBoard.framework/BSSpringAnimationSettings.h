//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BaseBoard/BSAnimationSettings.h>

@interface BSSpringAnimationSettings : BSAnimationSettings
{
    float _mass;
    float _stiffness;
    float _damping;
    float _epsilon;
    BOOL _hasCalculatedDuration;
}

+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 timingFunction:(id)arg4;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) float stiffness;
- (void)_setDamping:(float)arg1;
- (void)_setStiffness:(float)arg1;
- (void)_setMass:(float)arg1;
- (BOOL)_hasCalculatedDuration;
@property(readonly, nonatomic) float epsilon;
- (id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 delay:(double)arg5 frameInterval:(double)arg6 timingFunction:(id)arg7;
- (void)_setEpsilon:(float)arg1;
- (void)_setTimingFunction:(id)arg1;
- (BOOL)isSpringAnimation;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) float mass;
@property(readonly, nonatomic) float damping;
- (void)_setDuration:(double)arg1;
- (double)duration;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

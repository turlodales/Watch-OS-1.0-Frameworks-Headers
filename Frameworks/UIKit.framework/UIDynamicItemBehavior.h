//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@class NSArray, NSMapTable;

@interface UIDynamicItemBehavior : UIDynamicBehavior
{
    BOOL _useDefaultViewPropertiesApplier;
    BOOL _useCircularBoundingBox;
    struct {
        unsigned int elasticityChanged:1;
        unsigned int frictionChanged:1;
        unsigned int densityChanged:1;
        unsigned int resistanceChanged:1;
        unsigned int angularResistanceChanged:1;
        unsigned int rotationEnabledChanged:1;
        unsigned int useDefaultViewPropertiesApplierChanged:1;
    } _stateFlags;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
    BOOL _allowsRotation;
    float _elasticity;
    float _friction;
    float _density;
    float _resistance;
    float _angularResistance;
}

- (void)setUseDefaultViewPropertiesApplier:(BOOL)arg1;
- (BOOL)useDefaultViewPropertiesApplier;
- (void)applyImpulse:(struct CGPoint)arg1 toItem:(id)arg2;
- (BOOL)_rotationEnabledForItem:(id)arg1;
- (float)_massForItem:(id)arg1;
- (float)_angularResistanceForItem:(id)arg1;
- (float)_resistanceForItem:(id)arg1;
- (float)_densityForItem:(id)arg1;
- (float)_frictionForItem:(id)arg1;
- (float)_elasticityForItem:(id)arg1;
- (float)angularVelocityForItem:(id)arg1;
- (void)addAngularVelocity:(float)arg1 forItem:(id)arg2;
- (float)_angleForItem:(id)arg1;
- (void)_setAngle:(float)arg1 forItem:(id)arg2;
- (struct CGPoint)_positionForItem:(id)arg1;
- (void)_setPosition:(struct CGPoint)arg1 forItem:(id)arg2;
- (struct CGPoint)linearVelocityForItem:(id)arg1;
- (void)addLinearVelocity:(struct CGPoint)arg1 forItem:(id)arg2;
@property(nonatomic) float angularResistance; // @synthesize angularResistance=_angularResistance;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)_setUseCircularBoundingBox:(BOOL)arg1;
- (BOOL)_useCircularBoundingBox;
- (void)_reevaluate:(unsigned int)arg1;
- (void)_configureBody:(id)arg1 forView:(id)arg2;
@property(nonatomic) BOOL allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic) float resistance; // @synthesize resistance=_resistance;
@property(nonatomic) float density; // @synthesize density=_density;
@property(nonatomic) float friction; // @synthesize friction=_friction;
@property(nonatomic) float elasticity; // @synthesize elasticity=_elasticity;
- (void)_dissociate;
- (void)_associate;
- (id)initWithItems:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)_commonInit;
- (id)description;
- (id)init;
- (void)dealloc;

@end

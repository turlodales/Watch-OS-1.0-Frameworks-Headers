//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>
{
    void *_reserved;
    struct SCNVector3 _halfExtent;
    float _strength;
    float _falloffExponent;
    float _minimumDistance;
    BOOL _active;
    int _scope;
    BOOL _usesEllipsoidalExtent;
    BOOL _exclusive;
    struct SCNVector3 _offset;
    struct SCNVector3 _direction;
    unsigned int _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}, name: _field
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)linearGravityField;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)dragField;
+ (id)field;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) float strength;
@property(nonatomic) float minimumDistance;
- (id).cxx_construct;
@property(nonatomic) int scope;
@property(nonatomic, getter=isActive) BOOL active;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic) struct SCNVector3 direction;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4, name: _handle
- (id)_owner;
- (void)_setWorld:(id)arg1;
- (void)_setOwner:(id)arg1;
- (void)_setupCommonProperties;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4, name: _createField
@property(nonatomic) BOOL usesEllipsoidalExtent;
@property(nonatomic) struct SCNVector3 halfExtent;
@property(nonatomic, getter=isExclusive) BOOL exclusive;
@property(nonatomic) float falloffExponent;
- (void)_removeOwner;

@end


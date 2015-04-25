//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, CALayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, PKExtendedPhysicsWorld, UIDynamicAnimatorTicker, UIView;

@interface UIDynamicAnimator : NSObject
{
    PKExtendedPhysicsWorld *_world;
    CADisplayLink *_displaylink;
    double _elapsedTime;
    double _realElapsedTime;
    double _lastUpdateTime;
    double _lastInterval;
    long long _ticks;
    CALayer *_debugLayer;
    NSMutableDictionary *_bodies;
    NSMutableArray *_topLevelBehaviors;
    NSMutableSet *_registeredBehaviors;
    NSMutableSet *_behaviorsToRemove;
    NSMutableSet *_behaviorsToAdd;
    NSMutableArray *_postSolverActions;
    NSMutableArray *_beginContacts;
    NSMutableArray *_endContacts;
    BOOL _isInWorldStepMethod;
    BOOL _needsLocalBehaviorReevaluation;
    BOOL _stopping;
    unsigned int _referenceSystemType;
    unsigned int _integralization;
    struct {
        unsigned int delegateImplementsDynamicAnimatorDidPause:1;
        unsigned int delegateImplementsDynamicAnimatorWillResume:1;
    } _stateFlags;
    float _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    struct CGRect _referenceSystemBounds;
    id <_UIDynamicReferenceSystem> _referenceSystem;
    int _debugInterval;
    CDUnknownBlockType _action;
    id <UIDynamicAnimatorDelegate> _delegate;
    BOOL _disableDisplayLink;
    float _speed;
    UIDynamicAnimatorTicker *_ticker;
}

+ (id)_allDynamicAnimators;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;
+ (void)initialize;
- (unsigned int)_referenceSystemType;
- (struct CGRect)_referenceSystemBounds;
- (void)setReferenceView:(id)arg1;
- (double)_realElapsedTime;
- (long long)_ticks;
- (double)_animatorInterval;
- (BOOL)_alwaysDisableDisplayLink;
- (void)_setAlwaysDisableDisplayLink:(BOOL)arg1;
- (int)_debugInterval;
- (void)_setDebugInterval:(int)arg1;
- (void)_setAction:(CDUnknownBlockType)arg1;
- (float)_speed;
- (void)_setSpeed:(float)arg1;
- (void)updateItemFromCurrentState:(id)arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)itemsInRect:(struct CGRect)arg1;
- (unsigned int)_animatorIntegralization;
- (void)_setAnimatorIntegralization:(unsigned int)arg1;
- (void)_unregisterCollisionGroup;
- (int)_registerCollisionGroup;
- (void)_unregisterImplicitBounds;
- (void)_registerImplicitBounds;
- (void)didEndContact:(id)arg1;
- (void)didBeginContact:(id)arg1;
- (void)removeBehavior:(id)arg1;
- (float)_ptmRatio;
- (void)_setReferenceSystem:(id)arg1;
- (void)_postSolverStep;
- (void)_preSolverStep;
- (void)_reportEndContacts;
- (void)_reportBeginContacts;
- (void)_reevaluateImplicitBounds;
- (void)_evaluateLocalBehaviors;
@property(retain, nonatomic) UIDynamicAnimatorTicker *ticker; // @synthesize ticker=_ticker;
- (void)_stop;
- (BOOL)_isWorldActive;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint)arg2 angle:(float)arg3 itemType:(unsigned int)arg4;
- (void)updateItemUsingCurrentState:(id)arg1;
- (void)_runBlockPostSolverIfNeeded:(CDUnknownBlockType)arg1;
- (id)_keyForItem:(id)arg1;
- (void)_setupWorld;
- (void)_unregisterBehavior:(id)arg1;
- (void)_registerBehavior:(id)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)_traverseBehaviorHierarchy:(CDUnknownBlockType)arg1;
- (id)_referenceSystem;
- (double)elapsedTime;
- (void)_clearReferenceView;
@property(readonly, nonatomic) UIView *referenceView;
- (id)initWithReferenceSystem:(id)arg1;
- (void)_displayLinkTick:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *behaviors;
- (void)_setRunning:(BOOL)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (void)_shouldReevaluateLocalBehaviors;
- (id)_registerBodyForItem:(id)arg1 shape:(unsigned int)arg2;
- (BOOL)_animatorStep:(double)arg1;
- (void)addBehavior:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (void)removeAllBehaviors;
- (void)_unregisterBodyForItem:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)_registerBodyForItem:(id)arg1;
- (id)_world;
- (void)_tickle;
- (id)_bodyForItem:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (id)recursiveDescription;
- (void)_start;
- (id)_delegate;
@property(nonatomic) id <UIDynamicAnimatorDelegate> delegate;
- (id)description;
- (id)init;
- (void)dealloc;

@end

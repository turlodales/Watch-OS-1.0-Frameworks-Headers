//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSISVariable : NSObject
{
    id <NSISVariableDelegate> _delegate;
    int _refCount;
    unsigned int _ident;
}

+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
@property id <NSISVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)init;
- (oneway void)release;
- (id)retain;
@property(readonly) BOOL shouldBeMinimized;
- (BOOL)valueIsUserVisible;
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (id)markedConstraint;
@property(readonly) int valueRestriction;
- (BOOL)shouldBeIntegral;

@end


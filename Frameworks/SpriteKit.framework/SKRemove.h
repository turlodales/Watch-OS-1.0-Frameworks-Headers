//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@interface SKRemove : SKAction
{
    BOOL _hasFired;
}

+ (id)removeFromParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end

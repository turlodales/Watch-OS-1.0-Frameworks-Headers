//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIInputViewSetPlacement : NSObject
{
    float _extendedHeight;
}

+ (id)placement;
@property(nonatomic) float extendedHeight; // @synthesize extendedHeight=_extendedHeight;
- (BOOL)accessoryViewWillAppear;
- (unsigned int)notificationsForTransitionToPlacement:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
@property(readonly, nonatomic) BOOL showsKeyboard;
@property(readonly, nonatomic) BOOL isUndocked;
- (BOOL)inputViewWillAppear;
@property(readonly, nonatomic) BOOL showsInputViews;
@property(readonly, nonatomic) BOOL isInteractive;
- (BOOL)isEqual:(id)arg1;

@end


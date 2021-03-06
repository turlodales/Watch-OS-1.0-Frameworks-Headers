//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface TPStarkInCallButtonsView : UIView
{
    int _highlightedControlIndex;
    int _buttonsMode;
    id <TPStarkInCallButtonsViewDelegate> _delegate;
    float _buttonDistributionScalingFactor;
    NSMutableDictionary *_buttonsDictionary;
    NSArray *_buttonsArray;
    NSMutableArray *_buttonDividerViews;
}

@property int buttonsMode; // @synthesize buttonsMode=_buttonsMode;
- (id)keyForButtonType:(int)arg1;
@property float buttonDistributionScalingFactor; // @synthesize buttonDistributionScalingFactor=_buttonDistributionScalingFactor;
- (float)distributedFractionForUndistributedFraction:(float)arg1;
@property(retain) NSMutableDictionary *buttonsDictionary; // @synthesize buttonsDictionary=_buttonsDictionary;
- (void)updateButtonsForCallModelState;
- (void)removeButtons:(id)arg1;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2;
@property(retain) NSMutableArray *buttonDividerViews; // @synthesize buttonDividerViews=_buttonDividerViews;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2;
- (id)existingButtonsNotInArray:(id)arg1;
@property(retain) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
- (id)buttonForButtonType:(int)arg1 createIfNecessary:(BOOL)arg2 createWithHorizontalPositionFraction:(float)arg3;
- (void)buttonWasTapped:(id)arg1;
- (void)phoneCallStatusChangedNotification:(id)arg1;
- (void)callCenterModelStateChangedNotification:(id)arg1;
- (void)performActionForHighlightedControl;
@property(readonly) int numberOfControls;
- (int)nextHighlightableControlFromIndex:(int)arg1 ascending:(BOOL)arg2;
@property(nonatomic) int highlightedControlIndex;
- (void)setButtonsMode:(int)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowActionTypeSendToVoicemail;
- (BOOL)canBecomeFirstResponder;
@property id <TPStarkInCallButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMuted:(BOOL)arg1;

@end


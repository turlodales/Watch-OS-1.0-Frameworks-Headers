//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray, NSString, UITextView;

@interface _UICharacterStreamingManager : NSObject
{
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    BOOL _committingFinalResults;
    BOOL _discardNextHypothesis;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    NSMutableArray *_pendingEdits;
    double _streamingCharacterInsertionRate;
    double _minDurationBetweenHypotheses;
}

@property(nonatomic) double minDurationBetweenHypotheses; // @synthesize minDurationBetweenHypotheses=_minDurationBetweenHypotheses;
@property(nonatomic) double streamingCharacterInsertionRate; // @synthesize streamingCharacterInsertionRate=_streamingCharacterInsertionRate;
- (void)setWords:(id)arg1;
- (void)commitFinalResults;
- (id)initWithTextView:(id)arg1;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
@property(copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property(nonatomic) BOOL discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property(retain, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
- (void)_displayLinkFired:(id)arg1;
- (void)_startStreamingAnimations;
@property(copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property(copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
- (void)_stopStreamingAnimation;
- (void)dealloc;

@end

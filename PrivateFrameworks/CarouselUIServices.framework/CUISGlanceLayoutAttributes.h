//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFont;

@interface CUISGlanceLayoutAttributes : NSObject
{
    float _fontSizes[5];
    struct CGRect _titleLabelMaxRect;
    float _titleFontSize;
    struct CGRect _timeLabelMaxRect;
    float _timeFontSize;
    float _titleBaselineOffset;
    float _contentCornerRadius;
    float _timeBaselineOffset;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _cueEdgeInsets;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _backgroundEdgeInsets;
    struct UIEdgeInsets _containerEdgeInsets;
}

@property(readonly, nonatomic) float timeBaselineOffset; // @synthesize timeBaselineOffset=_timeBaselineOffset;
@property(readonly, nonatomic) float contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(readonly, nonatomic) struct UIEdgeInsets containerEdgeInsets; // @synthesize containerEdgeInsets=_containerEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets backgroundEdgeInsets; // @synthesize backgroundEdgeInsets=_backgroundEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cueEdgeInsets; // @synthesize cueEdgeInsets=_cueEdgeInsets;
@property(readonly, nonatomic) float titleBaselineOffset; // @synthesize titleBaselineOffset=_titleBaselineOffset;
- (struct CGRect)rectForGlanceTitle:(id)arg1;
- (struct CGRect)rectForTime:(id)arg1;
- (id)fontWithStyle:(unsigned int)arg1;
- (struct CGRect)_rectForText:(id)arg1 maxRect:(struct CGRect)arg2 font:(id)arg3;
@property(readonly, nonatomic) UIFont *timeFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)init;

@end


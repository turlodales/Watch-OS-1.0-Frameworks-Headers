//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, UIColor, UILabel, _UILegibilityLabel, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView
{
    UILabel *_timeLabel;
    UILabel *_dateLabel;
    BOOL _useLegibilityLabels;
    _UILegibilityLabel *_legibilityTimeLabel;
    _UILegibilityLabel *_legibilityDateLabel;
    float _timeAlpha;
    float _dateAlpha;
    NSString *_customSubtitleText;
    UIColor *_customSubtitleColor;
    NSDate *_date;
    id <SBFLockScreenDateFormatter> _formatter;
    _UILegibilitySettings *_legibilitySettings;
    float _timeStrength;
    float _dateStrength;
    UIColor *_textColor;
    float _dateAlphaPercentage;
}

+ (float)defaultHeight;
@property(nonatomic) float dateStrength; // @synthesize dateStrength=_dateStrength;
@property(nonatomic) float timeStrength; // @synthesize timeStrength=_timeStrength;
- (float)dateBaselineOffsetFromOrigin;
- (float)timeBaselineOffsetFromOrigin;
- (void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2;
- (void)setContentAlpha:(float)arg1 withDateVisible:(BOOL)arg2;
@property(nonatomic, getter=isDateHidden) BOOL dateHidden;
@property(nonatomic) float dateAlphaPercentage; // @synthesize dateAlphaPercentage=_dateAlphaPercentage;
- (void)_layoutDateLabel;
- (void)_layoutTimeLabel;
- (float)_effectiveDateAlpha;
- (void)_updateLabelAlpha;
- (id)_dateFont;
- (id)_timeFont;
- (void)_setDateAlpha:(float)arg1;
- (id)_dateColor;
- (void)_updateLegibilityLabelsWithUpdatedDateString:(BOOL)arg1;
- (void)_updateLabels;
- (id)_dateText;
- (void)updateFormat;
- (void)_useLegibilityLabels:(BOOL)arg1;
- (void)_addLabels;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id <SBFLockScreenDateFormatter> formatter; // @synthesize formatter=_formatter;

@end


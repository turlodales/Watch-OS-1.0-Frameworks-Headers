//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSIndexSet, NSString, UIColor, UIFont;

@interface EKDayOccurrenceContentView : UIView
{
    NSString *_title;
    NSString *_location;
    UIColor *_color;
    UIColor *_titleTextColor;
    UIColor *_timeTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_textBackgroundColor;
    UIColor *_statusTextColor;
    NSIndexSet *_titleMetrics;
    struct CGPoint _titleEndPoint;
    float _textEndY;
    struct CGRect _titleRect;
    struct CGRect _fullTextRect;
    NSAttributedString *_attributedContentString;
    unsigned int _fontCompressionDegree;
    UIFont *_cachedPrimaryFont;
    float _cachedLineHeight;
    float _minimumCachedLineHeight;
    UIFont *_cachedSecondaryFont;
    float _cachedSecondaryLineHeight;
    float _cachedPrimaryFontTopOutset;
    float _cachedPrimaryFontBottomOutset;
    BOOL _allDay;
    BOOL _birthday;
    BOOL _facebook;
    BOOL _cancelled;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _selected;
    BOOL _allDayDrawingStyle;
    BOOL _usesSmallText;
    BOOL _hideText;
    BOOL _reduceProcessingForAnimation;
    NSString *_time;
    int _occurrenceBackgroundStyle;
}

+ (Class)layerClass;
+ (id)defaultPrimaryTextFont;
+ (id)defaultSmallPrimaryTextFont;
+ (id)defaultSecondaryTextFont;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
- (id)initWithContentView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)displayLayer:(id)arg1;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_statusTextFont;
- (struct CGRect)_frameForText;
- (id)attributedContentString;
- (void)_getLanguageAwareOutsets;
- (float)_secondaryFontLineHeight;
- (id)attributedContentStringUnconstrained:(BOOL)arg1;
- (id)statusTextColor;
- (id)_secondaryTextFont;
- (id)_timeTextFont;
- (id)strikethroughColor;
- (float)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
- (id)_timeText;
- (id)_secondaryText;
- (id)_statusText;
- (id)stringDrawingContext;
- (float)_minimumPrimaryFontLineHeight;
- (id)_primaryTextFont;
- (struct CGSize)_spaceForText;
- (float)_primaryFontLineHeight;
@property(nonatomic) BOOL reduceProcessingForAnimation; // @synthesize reduceProcessingForAnimation=_reduceProcessingForAnimation;
- (void)_invalidateMetrics;
@property(nonatomic, getter=isAllDayDrawingStyle) BOOL allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
- (float)minimumNaturalHeightAllText;
- (float)textNaturalWidth;
- (float)bottomTextOutset;
- (float)topTextOutset;
- (float)attributedStringMinimumLineHeight;
@property(retain, nonatomic) UIColor *textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
- (void)invalidateCachedFontMetrics;
@property(nonatomic, getter=isFacebook) BOOL facebook; // @synthesize facebook=_facebook;
@property(nonatomic, getter=isBirthday) BOOL birthday; // @synthesize birthday=_birthday;
@property(nonatomic) BOOL needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) BOOL declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) BOOL tentative; // @synthesize tentative=_tentative;
@property(nonatomic) BOOL hideText; // @synthesize hideText=_hideText;
- (BOOL)hasIcon;
@property(retain, nonatomic) UIColor *timeTextColor;
- (void)_invalidateCachedFonts;
- (float)minimumNaturalHeightForPrimaryText;
@property(nonatomic) BOOL usesSmallText; // @synthesize usesSmallText=_usesSmallText;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;

@end


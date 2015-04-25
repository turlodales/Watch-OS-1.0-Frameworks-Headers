//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, PKPassField, UILabel;

@interface NPKPassFieldView : UIView
{
    BOOL _labelOnTop;
    NSDictionary *_valueAttributes;
    NSDictionary *_labelAttributes;
    int _textAlignment;
    float _topLabelBaselineOffset;
    float _bottomLabelBaselineOffset;
    float _paddingBelowBottomLabelBaseline;
    float _sideMargin;
    PKPassField *_field;
    float _maxWidth;
    UILabel *_valueLabel;
    UILabel *_labelLabel;
}

@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) float sideMargin; // @synthesize sideMargin=_sideMargin;
@property(nonatomic) float paddingBelowBottomLabelBaseline; // @synthesize paddingBelowBottomLabelBaseline=_paddingBelowBottomLabelBaseline;
@property(nonatomic) float bottomLabelBaselineOffset; // @synthesize bottomLabelBaselineOffset=_bottomLabelBaselineOffset;
@property(nonatomic) float topLabelBaselineOffset; // @synthesize topLabelBaselineOffset=_topLabelBaselineOffset;
@property(copy, nonatomic) NSDictionary *labelAttributes; // @synthesize labelAttributes=_labelAttributes;
@property(copy, nonatomic) NSDictionary *valueAttributes; // @synthesize valueAttributes=_valueAttributes;
- (void)_updateValueLabel;
- (struct CGRect)_frameForLabelLabelWithWidth:(float)arg1;
- (id)valueFont;
- (struct CGRect)_frameForValueLabelWithWidth:(float)arg1;
- (id)labelFont;
@property(nonatomic, getter=isLabelOnTop) BOOL labelOnTop; // @synthesize labelOnTop=_labelOnTop;
- (BOOL)overrideValueParagraphStyle;
- (BOOL)overrideLabelParagraphStyle;
- (float)_valueHeightForAvailableWidth:(float)arg1;
- (float)_labelHeightForAvailableWidth:(float)arg1;
- (void)_updateLabelLabel;
- (BOOL)hasLabel;
@property(readonly, nonatomic) BOOL fitsHalfWidth;
- (id)initWithField:(id)arg1 maxWidth:(float)arg2;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
- (void).cxx_destruct;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)hasValue;

@end

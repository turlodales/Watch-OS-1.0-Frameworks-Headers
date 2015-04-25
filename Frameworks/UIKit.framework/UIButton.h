//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView;

@interface UIButton : UIControl <NSCoding>
{
    unsigned int _externalFlatEdge;
    struct __CFDictionary *_contentLookup;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    BOOL _initialized;
    unsigned int _lastDrawingControlState;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
        unsigned int titleFrozen:1;
    } _buttonFlags;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UIView *_selectionView;
    UIFont *_lazyTitleViewFont;
    NSArray *_contentConstraints;
    struct UIEdgeInsets _internalTitlePaddingInsets;
}

+ (id)_defaultImageColorForState:(unsigned int)arg1 button:(id)arg2;
+ (id)_defaultTitleColorForState:(unsigned int)arg1 button:(id)arg2;
+ (id)_defaultBackgroundImageForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)_xImage;
+ (id)_minusImage;
+ (id)_checkmarkImage;
+ (id)_questionMarkImage;
+ (id)_exclamationMarkImage;
+ (id)_infoDarkImage;
+ (id)_plusImage;
+ (id)_detailDisclosureImage;
+ (id)_infoLightImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(float)arg4;
+ (id)_defaultImageForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultNormalTitleColor;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3;
+ (id)buttonWithType:(int)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
@property(nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets _internalTitlePaddingInsets; // @synthesize _internalTitlePaddingInsets;
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned int)arg2;
- (int)_drawingStyleForState:(unsigned int)arg1;
- (void)_setDrawingStyle:(int)arg1 forState:(unsigned int)arg2;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned int)arg2;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (void)setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)titleShadowOffset;
@property(readonly, retain, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, retain, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, retain, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, retain, nonatomic) UIColor *_currentImageColor;
@property(readonly, retain, nonatomic) UIColor *currentTitleColor;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;
@property(setter=_setExternalFlatEdge:) unsigned int _externalFlatEdge;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property(nonatomic) BOOL reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
- (id)_externalImageColorForState:(unsigned int)arg1;
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1;
- (int)_externalDrawingStyleForState:(unsigned int)arg1;
- (int)_drawingStyleForStroke:(float)arg1;
- (void)_setDrawingStroke:(float)arg1 forState:(unsigned int)arg2;
- (float)_drawingStrokeForStyle:(int)arg1;
- (void)_setBackground:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (id)_newLabelWithFrame:(struct CGRect)arg1;
- (id)_newImageViewWithFrame:(struct CGRect)arg1;
- (struct CGSize)_titleShadowOffset;
- (void)_setupPressednessForState:(unsigned int)arg1;
- (void)_updateSelectionViewForState:(unsigned int)arg1;
- (BOOL)_shouldUpdatePressedness;
- (void)_setupDrawingStyleForState:(unsigned int)arg1;
- (void)_layoutTitleView;
- (void)_layoutImageView;
- (void)_layoutBackgroundImageView;
- (void)_updateBackgroundImageView;
- (id)_letterpressStyleForState:(unsigned int)arg1;
- (void)_beginTitleAnimation;
@property(nonatomic) BOOL adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property(nonatomic) BOOL showsTouchWhenHighlighted;
@property(nonatomic) BOOL adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;
- (void)_setupTitleViewRequestingLayout:(BOOL)arg1;
- (BOOL)_likelyToHaveTitle;
- (id)_titleOrImageViewForBaselineLayout;
- (void)_setContentHuggingPriorities:(struct CGSize)arg1;
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
- (struct UIEdgeInsets)_combinedContentPaddingInsets;
- (id)_imageColorForState:(unsigned int)arg1;
- (id)_attributedTitleForState:(unsigned int)arg1;
- (id)_shadowColorForState:(unsigned int)arg1;
- (id)_titleColorForState:(unsigned int)arg1;
- (id)_titleForState:(unsigned int)arg1;
- (struct CGRect)_highlightBounds;
- (struct UIEdgeInsets)_outsetInsets:(struct UIEdgeInsets)arg1;
- (float)_drawingStrokeForState:(unsigned int)arg1;
- (id)_externalBorderColorForState:(unsigned int)arg1;
- (id)_externalTitleColorForState:(unsigned int)arg1;
- (void)_updateMaskState;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (float)_borderWidthForState:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_prepareMaskAnimationViewIfNecessary;
- (id)_borderColorForState:(unsigned int)arg1;
- (struct CGRect)_highlightBoundsForDrawingStyle;
- (BOOL)_imageNeedsCompositingModeWhenSelected;
- (BOOL)_textNeedsCompositingModeWhenSelected;
- (float)_selectedIndicatorAlpha;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (BOOL)_isExternalRoundedRectButtonWithPressednessState;
- (BOOL)_hasHighlightColor;
- (void)_updateImageView;
- (id)_imageForState:(unsigned int)arg1 usesImageForNormalState:(char *)arg2;
- (void)_selectGestureChanged:(id)arg1;
- (BOOL)_isExternalRoundedRectButton;
- (BOOL)_hasDrawingStyle;
- (void)_setupImageView;
- (void)_setupTitleView;
- (BOOL)_canHaveTitle;
- (struct CGPoint)pressFeedbackPosition;
- (BOOL)autosizesToFit;
- (void)_installSelectGestureRecognizer;
- (void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2;
- (void)_uninstallSelectGestureRecognizer;
- (id)_archivableContent:(id *)arg1;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (void)_applyAppropriateChargeForButtonType;
- (void)_invalidateContentConstraints;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
- (id)attributedTitleForState:(unsigned int)arg1;
- (id)titleShadowColorForState:(unsigned int)arg1;
- (id)titleColorForState:(unsigned int)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (id)_setupBackgroundView;
- (id)_backgroundForState:(unsigned int)arg1 usesBackgroundForNormalState:(char *)arg2;
@property(readonly, nonatomic) int buttonType;
- (void)_titleAttributesChanged;
- (void)setShowPressFeedback:(BOOL)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (id)_layoutDebuggingTitle;
- (int)lineBreakMode;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (id)_contentForState:(unsigned int)arg1;
@property(readonly, retain, nonatomic) UIImage *currentImage;
@property(readonly, retain, nonatomic) NSString *currentTitle;
- (void)setAutosizesToFit:(BOOL)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (id)viewForBaselineLayout;
@property(readonly, retain, nonatomic) UIImageView *imageView;
- (void)_setButtonType:(int)arg1;
- (void)updateConstraints;
- (float)_highlightCornerRadius;
- (struct CGRect)_clippedHighlightBounds;
- (void)setSelected:(BOOL)arg1;
- (id)font;
- (BOOL)_isModernButton;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (id)backgroundImageForState:(unsigned int)arg1;
- (id)_createPreparedImageViewWithFrame:(struct CGRect)arg1;
- (id)imageForState:(unsigned int)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
- (void)setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleFrozen:(BOOL)arg1;
- (void)_setFont:(id)arg1;
- (BOOL)_isTitleFrozen;
- (void)_setImageColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (id)_imageView;
- (struct CGRect)_selectedIndicatorBounds;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(BOOL)arg2;
@property(readonly, retain, nonatomic) UILabel *titleLabel;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (id)_titleView;
- (void)_updateTitleView;
- (void)_setLineBreakMode:(int)arg1;
- (id)titleForState:(unsigned int)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (id)_scriptingInfo;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_willMoveToWindow:(id)arg1;
- (BOOL)_isFocusableElement;
- (void)tintColorDidChange;
- (void)_focusStateDidChange;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)invalidateIntrinsicContentSize;
- (void)setEnabled:(BOOL)arg1;
- (int)_lineBreakMode;
- (id)_font;
- (void)setLineBreakMode:(int)arg1;
- (id)image;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setFont:(id)arg1;
- (int)_buttonType;
- (id)title;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)_backgroundView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setTitle:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;

@end

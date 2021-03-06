//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "UIKeyboardInput.h"
#import "UIPopoverControllerDelegate.h"
#import "UITextInput.h"
#import "UITextInputTraits_Private.h"
#import "_UILayoutBaselineUpdating.h"

@class NSAttributedString, NSDictionary, NSLayoutConstraint, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UIBaselineLayoutStrut, _UICascadingTextStorage;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding>
{
    _UICascadingTextStorage *_textStorage;
    int _borderStyle;
    float _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    int _clearButtonMode;
    UIView *_leftView;
    int _leftViewMode;
    UIView *_rightView;
    int _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    float _fullFontSize;
    struct UIEdgeInsets _padding;
    struct _NSRange _selectionRangeWhenNotEditing;
    int _scrollXOffset;
    int _scrollYOffset;
    float _progress;
    UIButton *_clearButton;
    struct CGSize _clearButtonOffset;
    struct CGSize _leftViewOffset;
    struct CGSize _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    UITextFieldLabel *_displayLabel;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    float _labelOffset;
    UITextInteractionAssistant *_interactionAssistant;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    struct {
        unsigned int verticallyCenterText:1;
        unsigned int isAnimating:4;
        unsigned int inactiveHasDimAppearance:1;
        unsigned int becomesFirstResponderOnClearButtonTap:1;
        unsigned int clearsPlaceholderOnBeginEditing:1;
        unsigned int adjustsFontSizeToFitWidth:1;
        unsigned int fieldEditorAttached:1;
        unsigned int canBecomeFirstResponder:1;
        unsigned int shouldSuppressShouldBeginEditing:1;
        unsigned int inResignFirstResponder:1;
        unsigned int undoDisabled:1;
        unsigned int explicitAlignment:1;
        unsigned int implementsCustomDrawing:1;
        unsigned int needsClearing:1;
        unsigned int suppressContentChangedNotification:1;
        unsigned int allowsEditingTextAttributes:1;
        unsigned int usesAttributedText:1;
        unsigned int backgroundViewState:2;
        unsigned int clearingBehavior:2;
    } _textFieldFlags;
    BOOL _deferringBecomeFirstResponder;
    BOOL _avoidBecomeFirstResponder;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
}

+ (BOOL)_isCompatibilityTextField;
+ (BOOL)_isDisplayingShortcutViewController;
- (void)_setPasscodeStyleAlpha:(float)arg1;
@property(retain, nonatomic) UIImage *disabledBackground; // @synthesize disabledBackground=_disabledBackground;
@property(retain, nonatomic, setter=_setBaselineLayoutLabel:) _UIBaselineLayoutStrut *_baselineLayoutLabel; // @synthesize _baselineLayoutLabel;
@property(retain, nonatomic, setter=_setBaselineLayoutConstraint:) NSLayoutConstraint *_baselineLayoutConstraint; // @synthesize _baselineLayoutConstraint;
- (void)_setBackgroundStrokeWidth:(float)arg1;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (id)selectedAttributedText;
- (void)setLabelOffset:(float)arg1;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (void)_resetSelectionUI;
- (void)_clearSelectionUI;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (struct CGRect)textRect;
- (void)setClearButtonStyle:(int)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (id)_dictationInterpretations;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_updateSuffix:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes;
- (id)_textLabelView;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (struct CGSize)_rightViewOffset;
- (struct CGPoint)_scrollOffset;
- (id)actualFont;
- (BOOL)_isShowingPrefix;
- (void)_createInteractionAssistant;
- (struct CGRect)adjustedCaretRectForCaretRect:(struct CGRect)arg1;
- (BOOL)isUndoEnabled;
- (BOOL)_implementsCustomDrawing;
- (void)drawBorder:(struct CGRect)arg1;
- (void)_endedEditing;
- (void)_applicationResuming:(id)arg1;
- (void)drawPrefixInRect:(struct CGRect)arg1;
- (void)drawSuffixInRect:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (float)_marginTop;
- (void)finishedSettingPlaceholder;
- (void)createPlaceholderIfNecessary;
- (void)_invalidateBaselineLayoutConstraints;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2;
- (void)finishedSettingTextOrAttributedText;
- (BOOL)_textNeedsSanitizing:(id)arg1;
- (id)_attributedText;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (void)_updateForPasscodeAppearance;
- (struct CGRect)_prefixFrame;
- (BOOL)clearsPlaceholderOnBeginEditing;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateAtomBackground;
- (void)_updatePlaceholderPosition;
- (BOOL)_isShowingPlaceholder;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect)arg1;
- (float)_baselineLayoutConstraintConstantForBounds:(struct CGRect)arg1;
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;
@property(nonatomic) int rightViewMode; // @synthesize rightViewMode=_rightViewMode;
@property(nonatomic) int leftViewMode; // @synthesize leftViewMode=_leftViewMode;
- (BOOL)_showsClearButtonWhenEmpty;
- (struct CGRect)_atomBackgroundViewFrame;
- (BOOL)_showsAtomBackground;
- (BOOL)_hasContent;
@property(nonatomic) int borderStyle; // @synthesize borderStyle=_borderStyle;
- (BOOL)_heightShouldBeMini;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (BOOL)_showsRightView;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (struct CGRect)clearButtonRect;
- (void)_updateAtomTextColor;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (float)_marginTopForBounds:(struct CGRect)arg1;
- (float)actualMinimumFontSize;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (id)customOverlayContainer;
- (void)setSelectionRange:(struct _NSRange)arg1;
- (void)_initialScrollDidFinish:(id)arg1;
- (void)scrollTextFieldToVisible;
- (BOOL)_shouldEndEditing;
- (id)clearButton;
@property(nonatomic) int clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
- (void)_createBaselineLayoutLabelIfNecessary;
- (struct CGSize)_textSizeUsingFullFontSize:(BOOL)arg1;
- (void)_sizeChanged:(BOOL)arg1;
- (void)_setNeedsStyleRecalc;
- (void)_stopObservingFieldEditorScroll;
@property(nonatomic) BOOL clearsOnBeginEditing;
- (void)_updateTextLabel;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2;
- (struct CGRect)_frameForLabel:(id)arg1 inTextRect:(struct CGRect)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 forLabel:(id)arg2;
- (BOOL)_inPopover;
- (void)_selectionMayChange:(id)arg1;
- (struct CGSize)_textSize;
- (void)_updateBaselineInformationDependentOnBounds;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (id)_placeholderView;
- (float)paddingBottom;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingBottom:(float)arg1;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (id)_textInputViewForAddingGestureRecognizers;
- (BOOL)_useGesturesForEditableContent;
- (void)setClearingBehavior:(int)arg1;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (int)clearingBehavior;
- (id)_text;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (Class)_systemBackgroundViewClass;
- (Class)_placeholderLabelClass;
- (int)_suffixLabelTextAlignment;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (float)paddingRight;
- (int)_currentTextAlignment;
- (BOOL)_showsLeftView;
- (struct CGRect)_suffixFrame;
- (BOOL)_hasSuffixField;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(BOOL)arg2;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (BOOL)_fieldEditorAttached;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (float)paddingLeft;
- (id)_clearButtonImageForState:(unsigned int)arg1;
- (void)_updateButtons;
- (id)_clearButton;
- (void)setPaddingLeft:(float)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)searchText;
- (id)_placeholderLabel;
- (void)_activateSelectionView;
- (void)__resumeBecomeFirstResponder;
- (id)_systemBackgroundView;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (BOOL)_partsShouldBeMini;
- (void)_setRightViewOffset:(struct CGSize)arg1;
- (void)setPaddingTop:(float)arg1;
- (float)paddingTop;
- (void)setClearButtonOffset:(struct CGSize)arg1;
- (struct CGSize)clearButtonOffset;
- (void)_setLeftViewOffset:(struct CGSize)arg1;
- (struct CGSize)_leftViewOffset;
@property(copy, nonatomic) NSString *placeholder;
@property(retain, nonatomic) UIImage *background; // @synthesize background=_background;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setUndoEnabled:(BOOL)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_clearButtonClicked:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (id)_placeholderColor;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)iconRect;
- (void)setIcon:(id)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (float)shadowBlur;
- (void)setShadowBlur:(float)arg1;
@property(nonatomic) float minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (id)automaticallySelectedOverlay;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)select:(id)arg1;
- (id)selectedText;
- (void)disableClearsOnInsertion;
@property(nonatomic) BOOL clearsOnInsertion;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (BOOL)hasSelection;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)layoutTilesNow;
- (void)selectAll:(id)arg1;
@property(retain) UIView *inputAccessoryView;
@property(retain) UIView *inputView; // @synthesize inputView=_inputView;
- (id)_proxyTextInput;
- (id)webView;
@property(nonatomic) BOOL allowsEditingTextAttributes;
- (void)setLabel:(id)arg1;
- (id)viewForBaselineLayout;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)canResignFirstResponder;
- (void)_resignFirstResponder;
- (void)_becomeFirstResponder;
- (void)setAnimating:(BOOL)arg1;
- (id)_inputController;
- (BOOL)hasMarkedText;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)selectionRange;
- (void)selectAll;
- (void)startAutoscroll:(struct CGPoint)arg1;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (float)_passcodeStyleAlpha;
- (void)clearText;
- (BOOL)hasText;
- (int)atomStyle;
- (BOOL)drawsAsAtom;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(BOOL)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy, nonatomic) NSDictionary *typingAttributes;
@property(nonatomic) int textAlignment;
- (void)attachFieldEditor:(id)arg1;
- (void)willAttachFieldEditor:(id)arg1;
- (struct CGRect)editRect;
- (void)takeTraitsFrom:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
@property(readonly, nonatomic) UIView *textInputView;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)cancelAutoscroll;
- (struct CGRect)_selectionClipRect;
@property(retain, nonatomic) UIColor *textColor;
- (id)textInputTraits;
- (void)selectAllFromFieldEditor:(id)arg1;
- (void)_sanitizeText:(id)arg1;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (struct _NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (id)selectionView;
- (id)interactionAssistant;
- (BOOL)_isPasscodeStyle;
- (struct CGPoint)_originForTextFieldLabel:(id)arg1;
- (BOOL)_shouldObscureInput;
- (id)_fieldEditor;
- (id)textLabel;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth;
- (void)_updateLabel;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)setContentVerticalAlignment:(int)arg1;
- (id)shadowColor;
- (struct CGSize)shadowOffset;
- (void)setProgress:(float)arg1;
- (id)_scriptingInfo;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)tintColorDidChange;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_canDrawContent;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_windowBecameKey;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setShadowColor:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (BOOL)isEditable;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)resignFirstResponder;
- (id)undoManager;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)_backgroundView;
@property(nonatomic) id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)backgroundColor;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) BOOL deferBecomingResponder; // @dynamic deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL disablePrediction;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceEnableDictation;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;

@end


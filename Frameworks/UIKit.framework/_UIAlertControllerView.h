//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIAlertController, UIAlertControllerVisualStyle, UICollectionView, UILabel, UIView<UIAlertControllerBackgroundView>, _UIAlertControllerActionView, _UIAlertControllerCollectionViewFlowLayout, _UIAlertControllerShadowedScrollView, _UIKeyboardLayoutAlignmentView;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource, UIScrollViewDelegate>
{
    UIAlertController *_alertController;
    UIView *_roundedCornersView;
    UICollectionView *_actionCollectionView;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentViewControllerContainerView;
    _UIAlertControllerActionView *_discreteCancelActionView;
    UIView<UIAlertControllerBackgroundView> *_backdropView;
    _UIAlertControllerShadowedScrollView *_contentScrollView;
    UIView *_contentScrollViewContentView;
    UIView *_contentView;
    UIView *_foregroundView;
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertControllerVisualStyle *_visualStyle;
    int _layoutOrientation;
    BOOL _inPopover;
    BOOL _hasDimmingView;
    BOOL _showsCancelAction;
    BOOL _cancelActionIsDiscrete;
    BOOL _shouldHaveBackdropView;
    BOOL _alignsToKeyboard;
    NSMutableArray *_backdropViewConstraints;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewForegroundViewTopConstraints;
    NSMutableArray *_dimmingViewForegroundViewBottomConstraints;
    NSMutableArray *_dimmingViewConstraintsForAlertStyle;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_noDimmingViewConstraints;
    BOOL _hasCachedLargestActionDimension;
    struct CGSize _largestActionDimension;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_titleLabelTopAlignmentConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSLayoutConstraint *_backdropViewRightConstraint;
}

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;
@property BOOL alignsToKeyboard;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_reevaluateSuperviewSizingConstraints;
- (BOOL)_shouldTreatEmptyStringsAsNil;
- (void)_prepareBackdropViewConstraints;
- (BOOL)_hasAttributedMessage;
- (BOOL)_hasAttributedTitle;
- (void)_updateInsets;
- (void)_updateCornerRadius;
- (void)_updateBackdrop;
- (void)_updateVisualAltitude;
- (void)_updateLabelMaximumLines;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (BOOL)_actionLayoutIsVertical;
- (BOOL)_wantsHorizontalAlert;
- (id)defaultAction;
- (id)_orderedActionsForCollectionView;
- (id)_actionsForCollectionView;
- (BOOL)_shouldHaveCancelActionInCollectionView;
- (void)_actionLayoutDirectionChanged;
@property(retain) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property BOOL hasDimmingView;
@property(retain) NSLayoutConstraint *backdropViewBottomConstraint; // @synthesize backdropViewBottomConstraint=_backdropViewBottomConstraint;
- (void)updateDefaultAction;
@property(retain) NSLayoutConstraint *collectionViewTopAlignmentConstraint; // @synthesize collectionViewTopAlignmentConstraint=_collectionViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *messageLabelTopAlignmentConstraint; // @synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *titleLabelTopAlignmentConstraint; // @synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain) NSLayoutConstraint *backdropViewRightConstraint; // @synthesize backdropViewRightConstraint=_backdropViewRightConstraint;
@property BOOL shouldHaveBackdropView;
- (void)_removeDiscreteCancelActionView;
@property(retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (float)_marginBetweenContentAndDiscreteCancelAction;
- (BOOL)_hasDiscreteCancelAction;
@property(retain) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain) NSLayoutConstraint *collectionViewWidthConstraint; // @synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint;
- (struct CGSize)_collectionViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(struct CGSize)arg2;
@property(retain) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
- (float)_layoutWidthForHorizontalLayout:(BOOL)arg1;
- (BOOL)_canLayOutActionsHorizontally;
@property BOOL cancelActionIsDiscrete;
@property BOOL showsCancelAction;
- (struct CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1;
- (BOOL)_wantsHorizontalCollectionViewLayout;
- (struct CGSize)_minimumSizeForAllActions;
- (BOOL)hasDiscreteHorizontalCancelAction;
- (float)_idealLayoutWidth;
- (int)_numberOfActionsForCollectionView;
- (BOOL)_wantsHorizontalActionSheet;
- (float)_availableWidthForHorizontalLayout:(BOOL)arg1;
- (float)_verticalLayoutWidth;
- (BOOL)_horizontalLayoutCanUseFullWidth;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (float)_labelHorizontalInsets;
- (BOOL)_buttonsAreTopMost;
- (void)_invalidateFlowLayout;
- (void)_prepareDimmingViewConstraints;
- (void)_applyCollectionViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_prepareCancelView;
- (void)_prepareActionCollectionView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareContentScrollView;
- (void)_prepareContentView;
- (void)_prepareForegroundView;
- (void)_prepareViewsAndAddConstraints;
- (void)_updateCellStyle:(id)arg1;
- (BOOL)_hasMessage;
- (BOOL)_hasTitle;
@property BOOL inPopover;
- (void)_contentSizeChanged;
@property UIAlertController *alertController;
- (struct CGSize)_contentViewControllerSize;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
@property(retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
- (id)cancelAction;
- (void)_recomputeAlignedDescriptiveLabelTextWidth;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout *_flowLayout; // @synthesize _flowLayout;
- (void)_propertiesChanged;
- (void)_actionsChanged;
- (float)_idealWidth;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
- (id)contentViewController;
- (id)message;
@property int layoutOrientation;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)_updateStyle;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)setTintAdjustmentMode:(int)arg1;
- (int)tintAdjustmentMode;
- (id)title;
- (id)actions;
@property(readonly) UIView *_foregroundView; // @synthesize _foregroundView;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


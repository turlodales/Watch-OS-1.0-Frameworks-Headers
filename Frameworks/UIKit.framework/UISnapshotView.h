//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIStatusBarTinting.h"

@class NSMutableArray, NSString, UIColor, UIImageView;

@interface UISnapshotView : UIView <UIStatusBarTinting>
{
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentBeyondBounds;
    struct UIEdgeInsets _edgePadding;
    struct UIEdgeInsets _edgeInsets;
    struct CGPoint _contentOffset;
    UIColor *_edgePaddingColor;
    UIView *_imageView;
    NSMutableArray *_edgePaddingViews;
    struct CGRect _snapshotRect;
    UIImageView *_shadowView;
    unsigned int _disableEdgeAntialiasing:1;
    unsigned int _disableVerticalStretch:1;
    UIColor *_statusBarTintColor;
}

@property(retain, nonatomic) UIColor *edgePaddingColor; // @synthesize edgePaddingColor=_edgePaddingColor;
@property(nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) struct CGRect snapshotRect;
@property(nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;
@property(nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;
- (struct CGRect)_contentsCenterForEdgePadding:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;
- (void)_drawEdges:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;
- (void)_addEdgePaddingViewInRect:(struct CGRect)arg1;
- (void)_updateContentsRect;
- (struct UIEdgeInsets)_edgePadding;
- (void)_positionImageView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic, getter=_contentOffset, setter=_setContentOffset:) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct UIEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
- (void)captureSnapshotRect:(struct CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3;
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
- (void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic, getter=_snapshotView) UIView *snapshotView; // @synthesize snapshotView=_imageView;
@property(readonly, nonatomic, getter=_contentSize) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)setContentStretch:(struct CGRect)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, UIImageView, _UILegibilitySettings, _UILegibilitySettingsProvider;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver>
{
    SBFWallpaperSettings *_wallpaperSettings;
    UIImageView *_topGradientView;
    UIImageView *_bottomGradientView;
    UIView *_parallaxView;
    float _contentScaleFactor;
    int _variant;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    BOOL _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    BOOL _wantsRasterization;
    int _disallowRasterizationBlockCount;
    BOOL _filtersAverageColor;
    BOOL _continuousColorSamplingEnabled;
    BOOL _wallpaperAnimationEnabled;
    BOOL _parallaxEnabled;
    BOOL _suppressesGradients;
    id <SBFWallpaperViewLegibilityObserver> _legibilityObserver;
    UIView *_contentView;
    float _zoomFactor;
    float _contrast;
    float _parallaxFactor;
    id <SBFWallpaperViewInternalObserver> _internalObserver;
    float _parallaxAxisAdjustmentAngle;
}

+ (BOOL)_shouldScaleForParallax;
+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(nonatomic) float parallaxAxisAdjustmentAngle; // @synthesize parallaxAxisAdjustmentAngle=_parallaxAxisAdjustmentAngle;
@property(nonatomic) BOOL suppressesGradients; // @synthesize suppressesGradients=_suppressesGradients;
@property(nonatomic) id <SBFWallpaperViewInternalObserver> internalObserver; // @synthesize internalObserver=_internalObserver;
@property(nonatomic) float parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) BOOL wallpaperAnimationEnabled; // @synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled;
@property(nonatomic) BOOL continuousColorSamplingEnabled; // @synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled;
@property(nonatomic) BOOL filtersAverageColor; // @synthesize filtersAverageColor=_filtersAverageColor;
@property(nonatomic) id <SBFWallpaperViewLegibilityObserver> legibilityObserver; // @synthesize legibilityObserver=_legibilityObserver;
- (BOOL)luminanceInRectRequiresTreatments:(struct CGRect)arg1;
- (BOOL)wantsRasterization;
@property(readonly, nonatomic) UIImage *wallpaperImage;
- (BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(int)arg2 options:(id)arg3;
- (id)imageForBackdropParameters:(CDStruct_77932685)arg1 includeTint:(BOOL)arg2;
- (id)blurredImage;
- (void)setGeneratesBlurredImages:(BOOL)arg1;
@property(nonatomic) BOOL parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
- (float)contrastInRect:(struct CGRect)arg1;
- (float)cropZoomScale;
- (void)prepareToDisappear;
- (void)prepareToAppear;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(float)arg2;
- (struct CGRect)_bottomGradientTestRect;
- (float)gradientOpacityInRect:(struct CGRect)arg1 contrastWithinBoxesFactor:(float)arg2 allowLuminanceCheck:(BOOL)arg3;
- (struct CGRect)_topGradientTestRect;
- (float)_bottomGradientAlpha;
- (float)_topGradientAlpha;
- (BOOL)_shouldShowBottomGradient;
- (BOOL)_shouldShowTopGradient;
- (BOOL)contrastRequiresTreatments;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(float)arg2;
- (void)_notifyGeometryInvalidated;
- (void)_removeParallax;
- (void)_addParallax;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (void)_notifyBlursInvalidated;
- (void)_applyParallaxSettings;
- (void)_handleVisibilityChange;
- (id)_displayedImage;
- (id)_imageForBackdropParameters:(CDStruct_77932685)arg1 includeTint:(BOOL)arg2;
- (id)_blurredImage;
- (id)_blurReplacementImage;
- (void)_updateGeneratingBlurs;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(float)arg2;
- (float)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(float *)arg2 contrastBetweenBoxes:(float *)arg3;
- (id)_primaryColorOverride;
- (id)_wallpaperName;
- (void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2;
- (void)_cleanupAfterAnimatingGradients;
- (void)_handleVariantChange;
- (void)_updateGradientImage;
- (void)_updateGradientAlpha;
- (void)_prepareToAnimateGradients;
- (void)setVariant:(int)arg1 withAnimationFactory:(id)arg2 forced:(BOOL)arg3;
- (void)setVariant:(int)arg1 withAnimationFactory:(id)arg2;
- (void)_endDisallowRasterizationBlock;
- (void)_updateContentViewScale;
- (void)_beginDisallowRasterizationBlock;
- (void)_updateScaleFactor;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 variant:(int)arg2;
- (void)_updateRasterizationState;
- (void)_updateParallaxSettings;
- (id)_computeAverageColor;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (BOOL)supportsCropping;
- (struct CGRect)cropRect;
- (BOOL)_isVisible;
@property(nonatomic) float contrast; // @synthesize contrast=_contrast;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (float)contentScaleFactor;
- (void)setContentsRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)invalidate;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float zoomFactor; // @synthesize zoomFactor=_zoomFactor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

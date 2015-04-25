//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface ETPersonContentView : UIView
{
    UILabel *_label;
    UIImageView *_imageView;
    UIImage *_photo;
    int _style;
    BOOL _isHighlighted;
    BOOL _isPeripherySelection;
}

+ (id)_silhouetteImage1up;
+ (id)_silhouetteImageLongLook;
+ (id)_silhouetteImageNotificationCenter;
+ (id)_silhouetteImageQuickLook;
+ (id)_silhouetteImage12upCenter;
+ (id)_placeholderImageForStyle:(int)arg1;
+ (id)monogramFontForStyle:(int)arg1;
+ (CDStruct_b2fbf00d)_specValuesForStyle:(int)arg1;
+ (id)_dotImage;
@property(retain, nonatomic) UIImage *photo;
@property(nonatomic) BOOL isPeripherySelection; // @synthesize isPeripherySelection=_isPeripherySelection;
- (void)_updateColorsForCurrentState;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)setTintColor:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

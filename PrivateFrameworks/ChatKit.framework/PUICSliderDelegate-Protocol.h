//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICSlider;

@protocol PUICSliderDelegate <NSObject>

@optional
- (void)sliderDidEndCrownInteraction:(PUICSlider *)arg1;
- (void)sliderDidBeginCrownInteraction:(PUICSlider *)arg1;
- (void)slider:(PUICSlider *)arg1 didTapTouchTarget:(int)arg2;
@end

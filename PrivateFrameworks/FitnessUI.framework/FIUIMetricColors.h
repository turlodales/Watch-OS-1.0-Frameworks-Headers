//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface FIUIMetricColors : NSObject
{
    UIColor *_gradientLightColor;
    UIColor *_gradientDarkColor;
    UIColor *_adjustmentButtonBackgroundColor;
    UIColor *_nonGradientTextColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonDisabledTextColor;
    UIColor *_valueDisplayColor;
}

+ (id)systemGrayTextColor;
+ (id)clockColors;
+ (id)heartRateColors;
+ (id)sedentaryColors;
+ (id)briskColors;
+ (struct CGGradient *)newGradientForStartColor:(id)arg1 endColor:(id)arg2;
+ (id)metricColorsForGoalTypeIdentifier:(unsigned int)arg1;
+ (id)paceColors;
+ (id)keyColors;
+ (id)noMetricColors;
+ (id)distanceColors;
+ (id)calorieColors;
+ (id)elapsedTimeColors;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *valueDisplayColor; // @synthesize valueDisplayColor=_valueDisplayColor;
@property(retain, nonatomic) UIColor *buttonDisabledTextColor; // @synthesize buttonDisabledTextColor=_buttonDisabledTextColor;
@property(retain, nonatomic) UIColor *adjustmentButtonBackgroundColor; // @synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor;
@property(retain, nonatomic) UIColor *gradientDarkColor; // @synthesize gradientDarkColor=_gradientDarkColor;
@property(retain, nonatomic) UIColor *gradientLightColor; // @synthesize gradientLightColor=_gradientLightColor;
@property(retain, nonatomic) UIColor *nonGradientTextColor; // @synthesize nonGradientTextColor=_nonGradientTextColor;
- (void).cxx_destruct;

@end


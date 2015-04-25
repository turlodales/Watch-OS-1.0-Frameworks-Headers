//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter
{
    CIImage *inputImage;
    CIVector *inputNeutral;
    CIVector *inputTargetNeutral;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIVector *inputTargetNeutral; // @synthesize inputTargetNeutral;
@property(retain, nonatomic) CIVector *inputNeutral; // @dynamic inputNeutral;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@end

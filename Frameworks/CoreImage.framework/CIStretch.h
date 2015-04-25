//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIStretch : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint;
    CIVector *inputSize;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) CIVector *inputPoint; // @synthesize inputPoint;
- (void)setDefaults;
- (struct CGRect)computeDOD:(struct vec4)arg1;
@property(retain, nonatomic) CIVector *inputSize; // @synthesize inputSize;
- (id)_kernel;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@end

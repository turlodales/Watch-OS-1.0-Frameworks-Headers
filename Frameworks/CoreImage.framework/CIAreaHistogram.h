//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIContext, CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter
{
    CIImage *inputImage;
    CIVector *inputExtent;
    NSNumber *inputScale;
    NSNumber *inputCount;
    CIContext *_context;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
- (id)outputData;
- (void)dealloc;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
- (void)setDefaults;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_outputData:(BOOL)arg1;

@end


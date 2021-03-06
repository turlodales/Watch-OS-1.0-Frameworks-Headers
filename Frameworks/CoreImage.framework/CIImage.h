//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface CIImage : NSObject <NSCoding, NSCopying>
{
    void *_priv;
}

+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1 options:(id)arg2;
+ (id)noiseImagePadded;
+ (id)noiseImage;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1;
+ (id)emptyImage;
+ (id)imageWithContentsOfFile:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfURL:(id)arg1 options:(id)arg2;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
+ (id)imageWithInternalRepresentation:(void *)arg1;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartColorStatistics;
- (id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartToneStatistics;
- (id)imageByCroppingToRect:(struct CGRect)arg1;
- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)imageByApplyingOrientation:(int)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)properties;
- (id)initWithColor:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (struct CGRect)extent;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (struct CGPoint)calcIntersection:(struct CGPoint)arg1 slope1:(struct CGPoint)arg2 pt2:(struct CGPoint)arg3 slope2:(struct CGPoint)arg4;
- (id)autoRotateFilterFFT:(id)arg1 image:(struct CGImage *)arg2 inputRect:(struct CGRect)arg3;
- (id)smartBlackAndWhiteStatistics;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3;
- (id)autoAdjustmentFilters;
- (id)_dictForFeature:(id)arg1 scale:(float)arg2 imageHeight:(float)arg3;
- (id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2;
- (id)autoAdjustmentFiltersWithOptions:(id)arg1;
- (void)getAutocropRect:(id)arg1 rotateXfrm:(struct CGAffineTransform)arg2 inputImageRect:(struct CGRect)arg3 clipRect:(struct CGRect *)arg4;
- (id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 rgbRows:(id)arg3 inputRect:(struct CGRect)arg4 rotateCropRect:(struct CGRect *)arg5;
- (id)_scaleImageToMaxDimension:(unsigned int)arg1;
- (id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4;
- (struct CGRect)regionOfInterestForImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)TIFFRepresentation;
- (void)printTree;
- (id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2;
- (id)_imageByMatchingColorSpaceWorkingSpace:(struct CGColorSpace *)arg1;
- (id)_imageByMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg1;
- (id)_imageByApplyingBlur:(double)arg1;
- (id)_imageByApplyingGamma:(double)arg1;
- (id)_imageByUnpremultiplying;
- (id)_imageByPremultiplying;
- (id)imageByCompositingOverImage:(id)arg1;
- (id)imageByClampingToExtent;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 options:(id)arg2;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1 index:(unsigned long)arg2 options:(id)arg3;
- (struct CGAffineTransform)imageTransformForOrientation:(int)arg1;
- (id)initWithColorR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
- (id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)_initNaiveWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
- (id)_imageByMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg1;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void *)_internalRepresentation;
- (id)filteredImage:(id)arg1 keysAndValues:(id)arg2;

@end


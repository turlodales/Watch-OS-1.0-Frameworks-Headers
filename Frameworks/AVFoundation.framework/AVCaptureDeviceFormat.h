//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *mediaType;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) int autoFocusSystem;
- (int)supportedFormatsArrayIndex;
- (BOOL)needsPhotoPreviewDPCC;
- (BOOL)isHighResPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (int)rawBitDepth;
- (BOOL)supportsDynamicCrop;
- (BOOL)supportsLowLightBoost;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2;
- (BOOL)isExperimental;
@property(readonly, nonatomic) float videoZoomFactorUpscaleThreshold;
- (int)supportedStabilizationMethod;
@property(readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property(readonly, nonatomic) float videoFieldOfView;
- (CDStruct_1ef3fb1f)previewDimensions;
@property(readonly, nonatomic) CDStruct_1ef3fb1f highResolutionStillImageDimensions;
- (BOOL)supportsHighResolutionStillImageOutput;
- (BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (BOOL)supportsHighProfileH264;
- (id)vtScalingMode;
- (CDStruct_1ef3fb1f)sensorDimensions;
- (id)figCaptureSourceFormat;
- (BOOL)isSISSupported;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
@property(readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property(readonly, nonatomic) float maxISO;
@property(readonly, nonatomic) float minISO;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
- (id)AVCaptureSessionPresets;
- (BOOL)isDefaultActiveFormat;
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
- (BOOL)isPhotoFormat;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
- (BOOL)isVideoStabilizationModeSupported:(int)arg1;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property(readonly, nonatomic) float videoMaxZoomFactor;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BWFigCaptureDeviceVendor : NSObject
{
}

+ (BOOL)videoCaptureDeviceFirmwareIsLoaded;
+ (BOOL)activeDeviceEquals:(struct OpaqueFigCaptureDevice *)arg1;
+ (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice *)arg1;
+ (void)takeBackVideoDevice:(struct OpaqueFigCaptureDevice *)arg1;
+ (struct OpaqueFigCaptureStream *)copyStreamWithPosition:(int)arg1 forDevice:(struct OpaqueFigCaptureDevice *)arg2;
+ (struct OpaqueFigCaptureDevice *)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1;
+ (void)powerOnDefaultVideoDevice;
+ (void)_setupDeviceCloseTimer;
+ (void)initialize;

@end


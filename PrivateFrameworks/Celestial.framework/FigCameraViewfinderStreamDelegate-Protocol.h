//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigCameraViewfinderStream;

@protocol FigCameraViewfinderStreamDelegate <NSObject>

@optional
- (void)cameraViewfinderStream:(FigCameraViewfinderStream *)arg1 didCloseWithStatus:(long)arg2;
- (void)cameraViewfinderStreamDidOpen:(FigCameraViewfinderStream *)arg1;
@end


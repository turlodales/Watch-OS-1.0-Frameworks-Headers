//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface _MKPlaceAttributionLabel : NSObject
{
    UIImage *image;
    float textBaselineOffset;
    float imageBaselineOffset;
    NSString *imagePlaceholder;
}

- (void).cxx_destruct;
@property(retain) UIImage *image; // @synthesize image;
@property(retain) NSString *imagePlaceholder; // @synthesize imagePlaceholder;
@property float imageBaselineOffset; // @synthesize imageBaselineOffset;
@property float textBaselineOffset; // @synthesize textBaselineOffset;
- (id)attributionWithString:(id)arg1;

@end

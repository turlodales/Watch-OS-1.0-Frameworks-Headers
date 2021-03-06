//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@class CIColor;

@interface UICIColor : UIColor
{
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (id)CIColor;
- (id)initWithCIColor:(id)arg1;
- (id)_rgbColor;
- (void)setStroke;
- (void)setFill;
- (BOOL)getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)set;
- (BOOL)getWhite:(float *)arg1 alpha:(float *)arg2;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGColor *)CGColor;
- (void)dealloc;

@end


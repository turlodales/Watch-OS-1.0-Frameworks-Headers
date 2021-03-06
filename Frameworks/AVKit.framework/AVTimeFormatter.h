//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@interface AVTimeFormatter : NSFormatter
{
    int _style;
    unsigned int _fullWidth:1;
    double _formatTemplate;
}

- (id)stringForObjectValue:(id)arg1;
@property int style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
@property(getter=isFullWidth) BOOL fullWidth;
@property double formatTemplate;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUIPattern : NSObject
{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    float _alpha;
}

- (struct CGPattern *)pattern;
- (struct CGImage *)patternImageRef;
- (void)setPatternInContext:(struct CGContext *)arg1;
- (id)initWithImageRef:(struct CGImage *)arg1;
- (struct CGPattern *)_newPattern;
- (id)description;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
- (void)dealloc;

@end


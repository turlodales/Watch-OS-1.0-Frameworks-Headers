//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (NSStringDrawing)
+ (void)setHyphenationFactor:(float)arg1;
+ (BOOL)showsControlCharacters;
+ (void)setShowsControlCharacters:(BOOL)arg1;
+ (BOOL)showsInvisibleCharacters;
+ (void)setShowsInvisibleCharacters:(BOOL)arg1;
+ (void)setUsesScreenFonts:(BOOL)arg1;
+ (BOOL)usesScreenFonts;
+ (void)setTypesetterBehavior:(int)arg1;
+ (BOOL)usesFontLeading;
+ (float)hyphenationFactor;
+ (int)typesetterBehavior;
+ (float)defaultBaselineOffsetForFont:(id)arg1;
+ (float)defaultLineHeightForFont:(id)arg1;
+ (void)setUsesFontLeading:(BOOL)arg1;
- (void)drawInRect:(struct CGRect)arg1 withAttributes:(id)arg2;
- (struct CGSize)sizeWithAttributes:(id)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 withAttributes:(id)arg2;
@end

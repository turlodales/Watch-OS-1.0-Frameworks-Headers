//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValue.h"

@interface NSValue (NSValueUIGeometryExtensions)
+ (id)valueWithUIOffset:(struct UIOffset)arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)valueWithCGVector:(struct CGVector)arg1;
+ (id)valueWithCGPoint:(struct CGPoint)arg1;
+ (id)valueWithCGSize:(struct CGSize)arg1;
+ (id)valueWithCGRect:(struct CGRect)arg1;
- (struct UIOffset)UIOffsetValue;
- (struct CGVector)CGVectorValue;
- (struct UIEdgeInsets)UIEdgeInsetsValue;
- (struct CGPoint)CGPointValue;
- (struct CGRect)CGRectValue;
- (struct CGSize)CGSizeValue;
- (struct CGAffineTransform)CGAffineTransformValue;
@end


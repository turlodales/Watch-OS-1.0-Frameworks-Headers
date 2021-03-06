//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAShapeLayer.h"

@interface NLArcSegmentLayer : CAShapeLayer
{
    float _radius;
    int _numberOfSegments;
    float _arcLineWidth;
    float _percentageFull;
}

@property(nonatomic) float arcLineWidth; // @synthesize arcLineWidth=_arcLineWidth;
@property(nonatomic) float percentageFull; // @synthesize percentageFull=_percentageFull;
@property(nonatomic) int numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void)_regeneratePath;
- (id)actionForKey:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
@property(nonatomic) float radius; // @synthesize radius=_radius;

@end


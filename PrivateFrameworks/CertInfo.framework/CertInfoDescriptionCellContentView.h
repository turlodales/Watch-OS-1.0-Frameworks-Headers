//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView
{
    NSArray *_labelsAndValues;
    float _idealHeight;
    int _sizesCount;
    struct CGSize *_sizes;
}

- (void)_recalculateIdealHeight;
- (id)_valueFont;
- (void)setLabelsAndValues:(id)arg1;
- (id)_labelFont;
- (void).cxx_destruct;
- (float)rowHeight;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView
{
    BOOL _hidesWhenFullyTransparent;
    MPUBorderConfiguration *_borderConfiguration;
}

+ (float)requiredOutsetForDropShadow;
@property(nonatomic) BOOL hidesWhenFullyTransparent; // @synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent;
@property(readonly, nonatomic) struct UIEdgeInsets resizableImageCapInsets;
@property(copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // @synthesize borderConfiguration=_borderConfiguration;
@property(readonly, nonatomic) float requiredOutsetForDropShadow;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


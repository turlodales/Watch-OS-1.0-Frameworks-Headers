//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDate, NSLayoutConstraint, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell
{
    UIImageView *_pictureView;
    UILabel *_nameLabel;
    UILabel *_birthdateLabel;
    UIFont *_nameLabelFont;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageGapConstraint;
    BOOL _resetFormatters;
    UIImage *_picture;
    NSString *_name;
    NSDate *_birthdate;
}

@property(retain, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (float)calculatedHeight;
- (float)_scaledValueForSmallWidth:(float)arg1 bigWidth:(float)arg2;
- (void)updateSubviewsFromData;
- (void)_createConstraints;
@property(retain, nonatomic) UIImage *picture; // @synthesize picture=_picture;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)localeDidChange:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKNanoPlaceCardSectionData.h>

@class NSString;

@interface _MKNanoPlaceCardBusinessDataSource : _MKNanoPlaceCardSectionData
{
    NSString *_phoneNumber;
}

@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (int)numberOfRows;
- (id)title;
- (void)notifyDelegateForActionAtRow:(unsigned int)arg1;
- (id)cellForRow:(unsigned int)arg1 inTableView:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <_MKNanoPlaceCardBusinessDataDelegate> delegate;

@end


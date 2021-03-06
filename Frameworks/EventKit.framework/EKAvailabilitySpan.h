//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface EKAvailabilitySpan : NSObject
{
    int _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(int)arg3;

@end


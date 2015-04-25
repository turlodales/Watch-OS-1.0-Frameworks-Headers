//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface ICSDateValue : NSObject <NSCoding>
{
    int _year;
    int _month;
    int _day;
}

+ (id)dateFromICSUTF8String:(const char *)arg1;
+ (id)dateFromICSString:(id)arg1;
- (int)dateType;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)icsString;
- (id)components;
@property(readonly) int day; // @synthesize day=_day;
@property(readonly) int month; // @synthesize month=_month;
@property(readonly) int year; // @synthesize year=_year;
- (int)compare:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;

@end

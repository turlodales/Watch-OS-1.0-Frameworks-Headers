//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDateFormatter, NSString, NSTimer;

@interface IOSSHLTimeManager : NSObject
{
    NSDate *_currentTime;
    NSString *_currentTimeString;
    NSTimer *_timeItemTimer;
    NSDateFormatter *_timeItemDateFormatter;
}

+ (id)sharedInstance;
@property(readonly) NSDate *currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSDateFormatter *timeItemDateFormatter; // @synthesize timeItemDateFormatter=_timeItemDateFormatter;
@property(retain, nonatomic) NSTimer *timeItemTimer; // @synthesize timeItemTimer=_timeItemTimer;
@property(readonly) NSString *currentTimeString; // @synthesize currentTimeString=_currentTimeString;
- (void).cxx_destruct;
- (id)init;

@end


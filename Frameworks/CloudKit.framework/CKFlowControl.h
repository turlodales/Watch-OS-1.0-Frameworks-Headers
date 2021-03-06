//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface CKFlowControl : NSObject
{
    unsigned int _budgetCap;
    double _regenerationPerSecond;
    unsigned int _totalSamples;
    double _totalCost;
    NSDate *_lastExpenditure;
    double _budget;
    double _maximumThrottleTime;
}

+ (id)flowControlWithBudgetCap:(unsigned int)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;
- (void)regenerate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)attemptBudgetedExpenditureWithCost:(double)arg1;
- (BOOL)isLimited;
- (double)secondsUntilBudgetLimitationRemoved;
- (id)CKPropertiesDescription;
- (void)expendWithCost:(double)arg1;
@property(retain) NSDate *lastExpenditure; // @synthesize lastExpenditure=_lastExpenditure;
@property(nonatomic) double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property double regenerationPerSecond; // @synthesize regenerationPerSecond=_regenerationPerSecond;
@property unsigned int budgetCap; // @synthesize budgetCap=_budgetCap;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
@property double budget; // @synthesize budget=_budget;
- (id)initWithBudgetCap:(unsigned int)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class HDCodableSample, NSMutableArray;

@interface HDCodableWorkout : PBCodable <NSCopying>
{
    double _duration;
    double _goal;
    long long _goalType;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    long long _type;
    NSMutableArray *_events;
    HDCodableSample *_sample;
    struct {
        unsigned int duration:1;
        unsigned int goal:1;
        unsigned int goalType:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int type:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) double goal; // @synthesize goal=_goal;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasType;
@property(nonatomic) long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) double totalDistanceInCanonicalUnit; // @synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit;
@property(nonatomic) double totalEnergyBurnedInCanonicalUnit; // @synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit;
@property(nonatomic) BOOL hasGoal;
@property(nonatomic) BOOL hasGoalType;
@property(nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property(nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
- (id)eventsAtIndex:(unsigned int)arg1;
- (void)clearEvents;
- (unsigned int)eventsCount;
- (void)addEvents:(id)arg1;
- (id)decodedGoal;
- (unsigned int)decodedGoalType;
- (id)decodedTotalDistance;
- (id)decodedTotalEnergyBurned;
- (id)decodedWorkoutEvents;
@property(readonly, nonatomic) BOOL hasSample;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import "MPPProtobufferCoding.h"

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSString *_property;
    id _value;
    int _comparisonType;
}

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(int)arg3;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
@property(copy, nonatomic) NSString *property;
- (void).cxx_destruct;
@property(copy, nonatomic) id value;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
@property(nonatomic) int comparisonType;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


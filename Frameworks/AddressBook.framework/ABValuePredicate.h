//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABPredicate.h>

@class NSArray, NSObject;

@interface ABValuePredicate : ABPredicate
{
    int _property;
    long _comparison;
    id <NSObject> _value;
    NSArray *_orderedKeys;
    BOOL _dictionaryValue;
}

+ (id)stringForComparison:(id)arg1 withComparision:(long)arg2;
@property(nonatomic) long comparison; // @synthesize comparison=_comparison;
@property(nonatomic) int property; // @synthesize property=_property;
@property(copy, nonatomic) NSObject *value; // @synthesize value=_value;
- (BOOL)isValid;
- (id)init;
- (void)dealloc;
- (id)predicateFormat;
- (id)_ftsTokenizedTermStringForString:(id)arg1;
- (id)_ftsAllQueryStrings;
- (id)stringForComparison:(id)arg1;
- (id)_ftsTermStringForString:(id)arg1;
- (BOOL)_allowsLaxCheckingForFTS;
- (BOOL)_supportsFTSSearch;
- (BOOL)_shouldConsultIndexForKey:(id)arg1;
- (id)querySelectProperties;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;

@end

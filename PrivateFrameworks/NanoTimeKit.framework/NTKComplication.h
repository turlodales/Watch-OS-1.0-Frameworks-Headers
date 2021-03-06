//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NTKComplication : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _complicationType;
}

+ (id)allComplicationsOfType:(unsigned int)arg1;
+ (id)_allComplicationConfigurations;
+ (Class)_complicationClassForType:(unsigned int)arg1;
+ (id)nullComplication;
+ (id)defaultComplicationOfType:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
- (id)initWithDefaultConfiguration;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKey;
- (BOOL)appearsInDailySnapshot;
@property(readonly, nonatomic) unsigned int complicationType; // @synthesize complicationType=_complicationType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


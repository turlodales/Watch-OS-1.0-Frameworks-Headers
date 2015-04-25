//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@interface LSBestAppSuggestion : NSObject
{
    unsigned int _type;
    NSUUID *_uniqueIdentifier;
    NSDictionary *_options;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSDate *_lastUpdateTime;
    NSString *_originatingDeviceIdentifier;
    NSString *_originatingDeviceName;
    NSString *_originatingDeviceType;
    double _confidence;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) double confidence; // @synthesize confidence=_confidence;
@property(readonly, copy) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(readonly, copy) NSString *originatingDeviceName; // @synthesize originatingDeviceName=_originatingDeviceName;
@property(readonly, copy) NSString *originatingDeviceType; // @synthesize originatingDeviceType=_originatingDeviceType;
@property(copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)debugDescription;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *userActivityTypeIdentifier; // @dynamic userActivityTypeIdentifier;
@property(readonly, copy) NSString *originatingDeviceIdentifier; // @synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier;
@property(readonly, copy) NSDate *when; // @dynamic when;
- (id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 lastUpdateTime:(id)arg4 type:(unsigned int)arg5 deviceName:(id)arg6 deviceIdentifier:(id)arg7 deviceType:(id)arg8 options:(id)arg9;

@end

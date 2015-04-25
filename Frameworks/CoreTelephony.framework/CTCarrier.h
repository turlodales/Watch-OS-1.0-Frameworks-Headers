//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTCarrier : NSObject
{
    NSString *_carrierName;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_isoCountryCode;
    BOOL _allowsVOIP;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) BOOL allowsVOIP; // @synthesize allowsVOIP=_allowsVOIP;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(retain, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;

@end

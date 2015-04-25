//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _IOSSHLBatteryNotifySender;

@interface IOSSHLBatteryStatus : NSObject
{
    _IOSSHLBatteryNotifySender *_notifySender;
    _Bool _isOnAC;
    _Bool _isBatteryCharging;
    _Bool _supportsDetailedBatteryCapacity;
    _Bool _isConnectedToChargeIncapablePowerSource;
    _Bool _isConnectedToUnsupportedChargingAccessory;
    _Bool _hideACPower;
    float _batteryCapacity;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hideACPower; // @synthesize hideACPower=_hideACPower;
@property(nonatomic) _Bool isConnectedToUnsupportedChargingAccessory; // @synthesize isConnectedToUnsupportedChargingAccessory=_isConnectedToUnsupportedChargingAccessory;
@property(nonatomic) _Bool isConnectedToChargeIncapablePowerSource; // @synthesize isConnectedToChargeIncapablePowerSource=_isConnectedToChargeIncapablePowerSource;
@property(nonatomic) _Bool supportsDetailedBatteryCapacity; // @synthesize supportsDetailedBatteryCapacity=_supportsDetailedBatteryCapacity;
@property(nonatomic) float batteryCapacity; // @synthesize batteryCapacity=_batteryCapacity;
@property(nonatomic) _Bool isBatteryCharging; // @synthesize isBatteryCharging=_isBatteryCharging;
@property(nonatomic) _Bool isOnAC; // @synthesize isOnAC=_isOnAC;
- (void)_logPowerInformation:(int)arg1;
- (void)ACPowerChanged;
- (int)batteryCapacityAsPercentage;
- (void)updateBatteryState:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

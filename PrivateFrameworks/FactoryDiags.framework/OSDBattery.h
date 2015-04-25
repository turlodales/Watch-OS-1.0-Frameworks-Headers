//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OSDBattery : NSObject
{
    unsigned int _IOPMPowerSourceService;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void)setBatteryStatus:(int)arg1;
@property(readonly, getter=_getChargerType) __weak NSString *getChargerType;
@property(readonly, getter=_getBatteryManufacturer) __weak NSString *getBatteryManufacturer;
@property(readonly, getter=_getBatterySerialNumber) __weak NSString *getBatterySerialNumber;
@property(readonly, getter=_deviceIsCharging) BOOL deviceIsCharging;
@property(readonly, getter=_exactDeviceChargerConnected) BOOL exactDeviceChargerConnected;
@property(readonly, getter=_deviceChargerConnected) BOOL deviceChargerConnected;
@property(readonly, getter=_getRawBatteryVoltage) int getRawBatteryVoltage;
@property(readonly, getter=_getBatteryCycleCount) int getBatteryCycleCount;
@property(readonly, getter=_getBatteryDesignCapacity) int getBatteryDesignCapacity;
@property(readonly, getter=_getBatteryLevel) int getBatteryLevel;
- (void)setCharging:(BOOL)arg1 inflow:(BOOL)arg2;
@property(readonly, getter=_getChargerID) int getChargerID;
@property(readonly, getter=_getChargerCurrent) int getChargerCurrent;
@property(readonly, getter=_externalPowerConnected) BOOL externalPowerConnected;
- (_Bool)_readBoolProperty:(struct __CFString *)arg1;
- (int)_readIntegerProperty:(struct __CFString *)arg1;
@property(readonly, getter=_getBatteryMaxCapacity) int getBatteryMaxCapacity;
@property(readonly, getter=_getBatteryCurrentCapacity) int getBatteryCurrentCapacity;
@property(readonly, getter=_getIOPMPowerSourceService) unsigned int IOPMPowerSourceService;
@property(readonly, getter=_batteryID) __weak NSString *getBatteryID;
- (id)init;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FactoryTest/ControlBits.h>

#import "ControlBitsIPxInterface.h"

@class NSString;

@interface ControlBits_iPX_1v0 : ControlBits <ControlBitsIPxInterface>
{
}

+ (int)eraseControlBitsUponSysCfgWrite:(int)arg1;
+ (int)readControlBits:(unsigned char)arg1 status:(int *)arg2 failCount:(int *)arg3 secure:(char *)arg4;
+ (int)writeControlBits:(unsigned char)arg1 status:(int)arg2;
+ (int)writeControlBits:(unsigned char)arg1 ecid:(long long)arg2 status:(int)arg3 swVersion:(id)arg4;
+ (int)writeControlBits:(unsigned char)arg1 status:(int)arg2 swVersion:(id)arg3;
+ (id)readControlBits:(unsigned char)arg1;
+ (int)writeControlBits:(unsigned char)arg1 ecid:(long long)arg2 status:(int)arg3 swVersion:(id)arg4 error:(id *)arg5;
+ (int)_eraseControlBitInternal:(unsigned char)arg1 withSWVersion:(id)arg2;
+ (int)_writeControlBitsInternal:(unsigned char)arg1 withProcCtrl:(CDStruct_08b567e9 *)arg2 error:(id *)arg3;
+ (int)_readControlBits:(unsigned char)arg1 into:(CDStruct_08b567e9 *)arg2;
+ (unsigned int)_stationIdToOffset:(unsigned char)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceAdapter.h>

#import "CLGeomagneticModelProviderClientProtocol.h"

@interface CLGeomagneticModelProviderClientAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderClientProtocol>
{
}

+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)arg1;
- (id)initInSilo:(id)arg1;
- (struct CLGeomagneticModelProviderClient *)adaptee;
- (void)endService;
- (void)beginService;
- (BOOL)syncgetDoSync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)doAsync:(CDUnknownBlockType)arg1;

// Remaining properties
@property(nonatomic) BOOL valid;

@end

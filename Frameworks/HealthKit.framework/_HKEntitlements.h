//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _HKEntitlements : NSObject
{
}

+ (id)entitlementsWithConnection:(id)arg1;
+ (id)entitlementsWithApplicationIdentifier:(id)arg1;
+ (void)_setEntitlementsForCurrentTask:(id)arg1;
+ (id)entitlementsWithDictionary:(id)arg1;
+ (id)entitlementsForCurrentTask;
- (BOOL)hasEntitlement:(id)arg1;
- (id)applicationIdentifier;
- (id)stringForEntitlement:(id)arg1;
- (id)valueForEntitlement:(id)arg1;

@end


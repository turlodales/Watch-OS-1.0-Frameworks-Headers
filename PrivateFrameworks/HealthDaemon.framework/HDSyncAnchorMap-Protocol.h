//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol HDSyncAnchorMap <NSObject>
- (unsigned int)anchorCount;
- (void)enumerateAnchorsAndSyncEntitiesWithBlock:(void (^)(Class, long long, char *))arg1;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
@end


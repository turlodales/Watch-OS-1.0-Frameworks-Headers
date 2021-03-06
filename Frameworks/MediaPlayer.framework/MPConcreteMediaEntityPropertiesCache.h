//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPConcreteMediaEntityPropertiesCache : NSObject
{
    Class _dataProviderEntityClass;
    long long _identifier;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> *_propertiesQueue;
    id <MPMediaLibraryDataProvider> _dataProvider;
}

- (void)delete;
@property(readonly, nonatomic) __weak id <MPMediaLibraryDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void)invalidate;
- (void)dealloc;
- (id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3;
- (void)_onBarrierCacheValues:(id)arg1 persistValueInBackgroundBlock:(CDUnknownBlockType)arg2;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;
- (id)valueForProperty:(id)arg1 isCached:(char *)arg2;
@property(readonly, nonatomic) Class dataProviderEntityClass; // @synthesize dataProviderEntityClass=_dataProviderEntityClass;
- (void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;

@end


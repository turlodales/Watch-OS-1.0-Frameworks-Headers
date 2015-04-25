//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MPUDataSourceConfiguration : NSObject
{
    Class _dataSourceClass;
    NSString *_dataSourceCachingKey;
    CDUnknownBlockType _defaultQueryCreationBlock;
    int _entityType;
}

+ (id)configurationWithDataSourceClass:(Class)arg1;
@property(copy, nonatomic) CDUnknownBlockType defaultQueryCreationBlock; // @synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock;
@property(copy, nonatomic) NSString *dataSourceCachingKey; // @synthesize dataSourceCachingKey=_dataSourceCachingKey;
@property(readonly, nonatomic) Class dataSourceClass; // @synthesize dataSourceClass=_dataSourceClass;
- (id)initWithDataSourceClass:(Class)arg1;
- (void).cxx_destruct;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;

@end

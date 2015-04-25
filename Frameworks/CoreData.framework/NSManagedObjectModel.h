//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    id _dataForOptimization;
    id *_optimizationHints;
    id _localizationPolicy;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags {
        unsigned int _isInUse:1;
        unsigned int _isImmutable:1;
        unsigned int _isOptimizedForEncoding:1;
        unsigned int _reservedEntityDescription:29;
    } _managedObjectModelFlags;
}

+ (id)mergedModelFromBundles:(id)arg1;
+ (void)initialize;
+ (id)_newModelFromOptimizedEncoding:(id)arg1 error:(id *)arg2;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
+ (id)modelByMergingModels:(id)arg1;
+ (id)_modelPathsFromBundles:(id)arg1;
@property(retain) NSArray *entities;
@property(readonly, copy) NSDictionary *entitiesByName;
- (id)initWithContentsOfURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEditable;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)_versionIdentifiersAsArray;
- (id)_entitiesByVersionHash;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (id)_configurationsByName;
- (id)_precomputedKeysForEntity:(id)arg1;
- (void)_removeEntityNamed:(id)arg1;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (BOOL)_hasPrecomputedKeyOrder;
- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;
- (id)_optimizedEncoding:(id *)arg1;
- (void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned int)arg2;
- (BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
@property(readonly, copy) NSDictionary *entityVersionHashesByName;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
@property(readonly) NSArray *configurations;
- (BOOL)_isConfiguration:(id)arg1 inStyle:(unsigned int)arg2 compatibleWithStoreMetadata:(id)arg3;
- (id)_entityVersionHashesByNameInStyle:(unsigned int)arg1;
@property(retain) NSDictionary *localizationDictionary;
@property(copy) NSSet *versionIdentifiers;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (id)initWithContentsOfOptimizedURL:(id)arg1;
- (id)_initWithEntities:(id)arg1;
- (id)_modelForVersionHashes:(id)arg1;
- (void)_addVersionIdentifiers:(id)arg1;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (void)_setLocalizationPolicy:(id)arg1;
- (id)fetchRequestTemplateForName:(id)arg1;
@property(readonly, copy) NSDictionary *fetchRequestTemplatesByName;
- (id)_localizationPolicy;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (BOOL)_isOptimizedForEncoding;
- (void)_flattenProperties;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_addEntity:(id)arg1;
- (void)_removeEntity:(id)arg1;
- (id)_entityForName:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_throwIfNotEditable;
- (id)entitiesForConfiguration:(id)arg1;
- (id)versionHash;

@end

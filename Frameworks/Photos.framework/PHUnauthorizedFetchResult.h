//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString, PHFetchOptions;

@interface PHUnauthorizedFetchResult : PHFetchResult
{
    CDUnknownBlockType _fetchBlock;
    PHFetchOptions *_options;
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

- (id)fetchRequest;
- (id)containerIdentifier;
- (id)photoLibrary;
- (void).cxx_destruct;
@property(readonly, copy) PHFetchOptions *options; // @synthesize options=_options;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) CDUnknownBlockType fetchBlock; // @synthesize fetchBlock=_fetchBlock;
- (id)objectIDAtIndex:(unsigned int)arg1;
- (void)getMediaTypeCounts;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)initWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
- (BOOL)interestedInChange:(id)arg1;
- (id)changeHandlingValue;
- (id)changeHandlingKey;
- (int)collectionFetchType;
@property(readonly) NSOrderedSet *objectIDs; // @synthesize objectIDs=_objectIDs;
- (id)fetchedObjectIDs;
@property(readonly) NSArray *objects; // @synthesize objects=_objects;
- (id)fetchedObjects;

@end

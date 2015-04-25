//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"

@class NSArray, NSDictionary;

@interface DDOperation : NSOperation <NSCopying>
{
    id _container;
    BOOL _needContinuation;
    int _generationNumber;
    unsigned int _types;
    struct __DDScanQuery *_query;
    NSArray *_results;
    BOOL _isCurrentlyUsingTheScanner;
    BOOL _isDiscarded;
    int _tryCount;
    int _containerNotReadyTryCount;
    NSDictionary *_context;
}

+ (CDUnknownBlockType)urlificationBlockForTypes:(unsigned int)arg1;
+ (BOOL)_needsFullScannerForDetectionTypes:(unsigned int)arg1;
+ (struct __DDScanner *)_sharedScannerForTypes:(unsigned int)arg1;
@property int generationNumber; // @synthesize generationNumber=_generationNumber;
@property BOOL needContinuation; // @synthesize needContinuation=_needContinuation;
- (int)_createScanQuery;
@property int tryCount; // @synthesize tryCount=_tryCount;
@property BOOL isDiscarded; // @synthesize isDiscarded=_isDiscarded;
@property(nonatomic) unsigned int detectionTypes; // @synthesize detectionTypes=_types;
- (void)_setScanQuery:(struct __DDScanQuery *)arg1;
- (struct __DDScanQuery *)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (BOOL)_containerReadyForDetection;
- (void)_applyContainerRestrictionsToTypes;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (struct __DDScanQuery *)scanQuery;
- (BOOL)doURLificationOnDocument;
- (BOOL)needsToStartOver;
- (BOOL)containerIsReady;
- (BOOL)needsFullScanner;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;
- (void)dispatchScanQueryCreationWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)cleanup;
- (void)main;
@property(retain, nonatomic) id container; // @synthesize container=_container;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)cancel;
- (id)initWithContainer:(id)arg1;

@end

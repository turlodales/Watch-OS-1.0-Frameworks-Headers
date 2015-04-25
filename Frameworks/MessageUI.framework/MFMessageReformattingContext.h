//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMDocument, DOMNode, DOMRange, NSArray, NSMutableArray;

@interface MFMessageReformattingContext : NSObject
{
    DOMDocument *_document;
    DOMNode *_body;
    NSMutableArray *_changes;
    float _maximumWidth;
    float _meanWidth;
    float _widthDeviation;
    BOOL _hasAnyLeftFloat;
    NSArray *_rightFloats;
    BOOL _floatsNeedUpdate;
    BOOL _metricsNeedUpdate;
    BOOL _documentContainsAnyWebKitTransform;
    float _minimumRescalingFactor;
    DOMRange *_firstTextRange;
}

- (id)initWithDocument:(id)arg1;
@property(readonly, nonatomic) DOMDocument *document;
@property(readonly, nonatomic) DOMNode *body;
@property(readonly, nonatomic) float maximumWidth;
- (void)dealloc;
- (void)_rollBackChange:(id)arg1;
- (BOOL)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4;
- (BOOL)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_updateMetricsIfNecessary;
- (void)_updateFloatsIfNecessary;
@property(nonatomic) float minimumRescalingFactor; // @synthesize minimumRescalingFactor=_minimumRescalingFactor;
- (BOOL)resizeElement:(id)arg1 withScale:(float)arg2 verificationBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) DOMRange *firstTextRange; // @synthesize firstTextRange=_firstTextRange;
- (BOOL)rescaleElement:(id)arg1 withScale:(float)arg2;
- (struct CGRect)boundingBoxOf:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *rightFloats;
@property(readonly, nonatomic) BOOL hasAnyLeftFloat;
@property(readonly, nonatomic) float meanWidth;
@property(readonly, nonatomic) float widthDeviation;
@property(readonly, nonatomic) BOOL didChangeDocument;
- (void)rollBackAllChanges;
- (void)rollBackLastChangeForElement:(id)arg1;
@property(readonly, nonatomic) BOOL hasAnyRightFloat;

@end

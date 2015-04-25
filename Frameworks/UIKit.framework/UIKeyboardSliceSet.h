//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface UIKeyboardSliceSet : NSObject
{
    NSString *_ssid;
    NSMutableSet *_slices;
    struct CGRect _startRect;
    struct CGRect _endRect;
    float _leftWidth;
    float _rightWidth;
    float _mergePoint;
    NSMutableDictionary *_controlKeys;
}

+ (id)sliceSetWithDictionaryRepresenation:(id)arg1;
@property NSMutableDictionary *controlKeys; // @synthesize controlKeys=_controlKeys;
@property float mergePoint; // @synthesize mergePoint=_mergePoint;
@property float rightWidth; // @synthesize rightWidth=_rightWidth;
@property float leftWidth; // @synthesize leftWidth=_leftWidth;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
@property(retain) NSString *sliceSetID; // @synthesize sliceSetID=_ssid;
@property(readonly) NSMutableSet *slices; // @synthesize slices=_slices;
- (void)addSlice:(id)arg1;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
- (id)initWithSliceID:(id)arg1;
- (id)description;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMWebKitNamedFlow : DOMObject
{
}

- (id)getContent;
- (id)getRegions;
- (id)getRegionsByContent:(id)arg1;
@property(readonly) int firstEmptyRegionIndex;
@property(readonly) BOOL overset;
- (BOOL)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)finalize;
@property(readonly, copy) NSString *name;
- (void)dealloc;

@end


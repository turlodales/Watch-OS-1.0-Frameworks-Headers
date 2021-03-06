//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIPDFPage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject
{
    UIPDFPage *_page;
    unsigned int _pageIndex;
    struct CGSize _size;
    int _priority;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    BOOL _sendPending;
    BOOL _releaseWhenDone;
    int _lock;
}

@property BOOL releaseWhenDone; // @synthesize releaseWhenDone=_releaseWhenDone;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)sendImage;
- (void)renderImage;
- (void)releaseOperation;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)cancelOperationForTarget:(id)arg1;
- (void)cancelOperation;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize)arg2 queuePriority:(int)arg3;
- (BOOL)hasPage;
@property(readonly) unsigned int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly) int priority; // @synthesize priority=_priority;
@property(readonly, retain) UIImage *image; // @dynamic image;
@property UIPDFPageRenderOperation *operation; // @dynamic operation;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void)dealloc;
- (void)cancel;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLParallelRenderCommandEncoder.h"

@class MTLRenderPassDescriptor, NSString, _MTLCommandBuffer<MTLCommandBuffer>;

@interface _MTLParallelRenderCommandEncoder : NSObject <MTLParallelRenderCommandEncoder>
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    NSString *_label;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long _commandBuffersSize;
    unsigned long _commandBuffersCount;
    id *_commandBuffers;
    BOOL _retainedReferences;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned int)arg2;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (id)renderCommandEncoder;
- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


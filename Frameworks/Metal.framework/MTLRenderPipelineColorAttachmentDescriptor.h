//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;
}

@property(nonatomic) unsigned int pixelFormat;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) unsigned int writeMask;
@property(nonatomic) unsigned int alphaBlendOperation;
@property(nonatomic) unsigned int destinationAlphaBlendFactor;
@property(nonatomic) unsigned int sourceAlphaBlendFactor;
@property(nonatomic) unsigned int rgbBlendOperation;
@property(nonatomic) unsigned int destinationRGBBlendFactor;
@property(nonatomic) unsigned int sourceRGBBlendFactor;
@property(nonatomic, getter=isBlendingEnabled) BOOL blendingEnabled;
- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;

@end


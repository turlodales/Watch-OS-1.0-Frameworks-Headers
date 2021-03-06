//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;
}

+ (id)attachmentDescriptor;
@property(retain, nonatomic) id <MTLTexture> texture;
@property(nonatomic) unsigned int level;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
@property(nonatomic) unsigned int storeAction;
@property(nonatomic) unsigned int loadAction;
@property(nonatomic) unsigned int resolveDepthPlane;
@property(nonatomic) unsigned int resolveSlice;
@property(nonatomic) unsigned int resolveLevel;
@property(nonatomic) unsigned int depthPlane;
@property(nonatomic) unsigned int slice;
@property(retain, nonatomic) id <MTLTexture> resolveTexture;
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;

@end


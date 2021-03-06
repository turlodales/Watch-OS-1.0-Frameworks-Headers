//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MTLCompiler : NSObject
{
    NSString *_pluginPath;
    NSObject<OS_dispatch_queue> *_compilerQueue;
    struct MTLCompilerConnectionManager *_compilerConnectionManager;
    CDStruct_41a22ec7 _cacheUUID;
}

- (id).cxx_construct;
- (void)dealloc;
@property struct MTLCompilerConnectionManager *compilerConnectionManager; // @synthesize compilerConnectionManager=_compilerConnectionManager;
@property NSObject<OS_dispatch_queue> *compilerQueue; // @synthesize compilerQueue=_compilerQueue;
@property(readonly) CDStruct_41a22ec7 cacheUUID; // @synthesize cacheUUID=_cacheUUID;
@property(readonly, copy) NSString *pluginPath; // @synthesize pluginPath=_pluginPath;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 options:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileVertexFunction:(id)arg1 serializedVertexDescriptor:(id)arg2 stateData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileVertexFunction:(id)arg1 serializedVertexDescriptor:(id)arg2 stateData:(id)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithArch:(unsigned int)arg1 cacheUUID:(CDStruct_41a22ec7 *)arg2 pluginPath:(id)arg3;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithTargetData:(id)arg1 cacheUUID:(CDStruct_41a22ec7 *)arg2 pluginPath:(id)arg3;

@end


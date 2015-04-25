//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"

@class NSDictionary, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>
{
    id _reserved;
    unsigned int _isPresentationInstance:1;
    struct __C3DFXTechnique *_technique;
    NSMutableDictionary *_valueForSymbol;
    SCNOrderedDictionary *_animations;
}

+ (BOOL)supportsSecureCoding;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
+ (id)SCNJSExportProtocol;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)addAnimation:(id)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)valueForUndefinedKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (id)valueForSymbolNamed:(id)arg1;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void)_syncObjCAnimations;
- (void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (id)_symbolsAssignedValues;
- (struct __C3DFXTechnique *)techniqueRef;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique *)arg1;
- (id)scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

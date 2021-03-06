//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNAuthoringEnvironment, SCNNode;

@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment *_authoringEnvironment;
    SCNNode *_target;
}

- (BOOL)mouseMoved:(CDStruct_883c2785)arg1;
- (void)draw;
- (BOOL)mouseUp:(CDStruct_883c2785)arg1;
- (BOOL)mouseDown:(CDStruct_883c2785)arg1;
@property(nonatomic) SCNNode *target; // @synthesize target=_target;
- (BOOL)mouseDragged:(CDStruct_883c2785)arg1;
- (void)_setAuthoringEnvironment:(id)arg1;
@property(readonly) SCNAuthoringEnvironment *authoringEnvironment;

@end


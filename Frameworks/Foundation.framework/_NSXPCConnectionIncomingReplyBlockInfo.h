//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgress;

@interface _NSXPCConnectionIncomingReplyBlockInfo : NSObject
{
    CDUnknownBlockType _cleanupBlock;
    NSProgress *_progress;
}

@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void)dealloc;
@property(copy) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;

@end


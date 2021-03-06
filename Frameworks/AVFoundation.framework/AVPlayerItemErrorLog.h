//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying>
{
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly, nonatomic) unsigned int extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *events;
- (id)_errorLogArray;
- (id)initWithLogArray:(id)arg1;

@end


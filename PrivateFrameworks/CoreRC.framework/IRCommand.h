//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IRProtocol;

@interface IRCommand : NSObject
{
    BOOL _isRepeat;
    IRProtocol *_protocol;
    unsigned long long _payload;
    unsigned long long _timestamp;
}

- (id)initWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(BOOL)arg3;
@property(readonly, nonatomic) BOOL isRepeat; // @synthesize isRepeat=_isRepeat;
@property(readonly, nonatomic) IRProtocol *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long payload; // @synthesize payload=_payload;
- (id)init;
- (void)dealloc;

@end

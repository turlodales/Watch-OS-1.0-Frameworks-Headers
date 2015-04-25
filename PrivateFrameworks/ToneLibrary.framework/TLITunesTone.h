//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface TLITunesTone : NSObject
{
    BOOL _purchased;
    BOOL _ringtone;
    BOOL _protected;
    BOOL _private;
    NSString *_identifier;
    NSString *_name;
    NSString *_filePath;
    NSNumber *_pid;
    NSString *_artworkFile;
    unsigned int _duration;
    NSDictionary *_playbackProperties;
}

@property(nonatomic, getter=isPrivate) BOOL private; // @synthesize private=_private;
@property(copy, nonatomic) NSString *artworkFile; // @synthesize artworkFile=_artworkFile;
@property(nonatomic, getter=isRingtone) BOOL ringtone; // @synthesize ringtone=_ringtone;
@property(nonatomic, getter=isPurchased) BOOL purchased; // @synthesize purchased=_purchased;
- (void)_setPlaybackProperties:(id)arg1;
- (void)_setRingtone:(BOOL)arg1;
- (void)_setPrivate:(BOOL)arg1;
- (void)_setProtected:(BOOL)arg1;
- (void)_setArtworkFile:(id)arg1;
- (void)_setPid:(id)arg1;
- (void)_setPurchased:(BOOL)arg1;
- (void)_setFilePath:(id)arg1;
@property(copy, nonatomic) NSDictionary *playbackProperties; // @synthesize playbackProperties=_playbackProperties;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
@property(nonatomic, getter=isProtected) BOOL protected; // @synthesize protected=_protected;
@property(copy, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)_setDuration:(unsigned int)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
- (void)dealloc;
- (void)_setIdentifier:(id)arg1;
- (void)_setName:(id)arg1;

@end

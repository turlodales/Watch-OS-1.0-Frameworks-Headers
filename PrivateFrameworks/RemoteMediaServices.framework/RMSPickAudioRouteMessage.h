//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface RMSPickAudioRouteMessage : PBCodable <NSCopying>
{
    long long _macAddress;
    int _sessionIdentifier;
    struct {
        unsigned int macAddress:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasMacAddress;
@property(nonatomic) long long macAddress; // @synthesize macAddress=_macAddress;
@property(nonatomic) BOOL hasSessionIdentifier;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


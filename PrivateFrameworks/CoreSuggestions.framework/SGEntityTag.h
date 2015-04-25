//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SGEntityTag : NSObject <NSCopying>
{
    BOOL _indexed;
    BOOL _stored;
    NSString *_name;
}

+ (id)defaultDuration;
+ (id)allDay;
+ (id)testTag:(int)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)extraKey:(id)arg1;
+ (id)identity:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)url:(id)arg1;
+ (id)fromReply;
+ (id)fromForwardedMessage;
+ (id)hardName;
+ (id)human;
+ (id)inhuman;
+ (id)extractedEventCancellation;
+ (id)fromExtractedDomain;
+ (id)extractedSocial;
+ (id)extractedFood;
+ (id)extractedMovie;
+ (id)extractedTicket;
+ (id)extractedCarRental;
+ (id)extractedHotel;
+ (id)extractedTrain;
+ (id)extractedBus;
+ (id)extractedFlight;
+ (id)extractedEvent;
+ (id)resolveName:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (void)rememberPrefix:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
+ (id)remember:(id)arg1;
+ (void)initialize;
- (BOOL)isTemplateShortName;
- (BOOL)isExtraKey;
- (BOOL)isContactDetail;
- (BOOL)isUrl;
- (BOOL)isEqualToEntityTag:(id)arg1;
@property(readonly, nonatomic) BOOL indexed; // @synthesize indexed=_indexed;
@property(readonly, nonatomic) BOOL stored; // @synthesize stored=_stored;
- (id)initWithName:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3;
- (void).cxx_destruct;
- (id)value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

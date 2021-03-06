//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTMessageAddress.h"
#import "NSCopying.h"

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_digits;
    NSString *_countryCode;
    BOOL _isShortCode;
}

+ (_Bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (_Bool)isValidPhoneNumber:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
@property(readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) NSString *digits; // @synthesize digits=_digits;
@property BOOL isShortCode; // @synthesize isShortCode=_isShortCode;
- (int)numberOfDigitsForShortCodeNumber;
- (id)formatForCallingCountry:(id)arg1;
- (id)canonicalFormat;
- (id)encodedString;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;

@end


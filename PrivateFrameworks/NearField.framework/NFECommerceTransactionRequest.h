//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDecimalNumber, NSString;

@interface NFECommerceTransactionRequest : NSObject
{
    unsigned char _merchantCapabilities;
    NSString *_applicationIdentifier;
    NSData *_merchantData;
    NSString *_merchantIdentifier;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSDecimalNumber *_transactionAmount;
    NSDate *_transactionDate;
    unsigned int _unpredictableNumber;
}

+ (id)getCountryCodeTranslationTable;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) unsigned int unpredictableNumber; // @synthesize unpredictableNumber=_unpredictableNumber;
@property(nonatomic) unsigned char merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(retain, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) NSData *merchantData; // @synthesize merchantData=_merchantData;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (BOOL)currencyValueConversion:(id)arg1 output:(char *)arg2 maxLen:(int)arg3 fractionDigit:(int)arg4;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)asDictionary;
- (void)dealloc;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;

@end


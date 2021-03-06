//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSDSecKeySecurity : NSObject
{
    struct __SecKey *_secKey;
    unsigned long _keyBlockSize;
}

+ (struct __SecKey *)copySecKeyFromKeyData:(id)arg1 keyType:(int)arg2 error:(id *)arg3;
@property(nonatomic) unsigned long keyBlockSize; // @synthesize keyBlockSize=_keyBlockSize;
- (_Bool)verifyRawSignedFile:(id)arg1 signature:(id)arg2 signatureType:(int)arg3 error:(id *)arg4;
- (_Bool)rawSignFile:(id)arg1 outFilePath:(id)arg2 signatureType:(int)arg3 error:(id *)arg4;
- (id)decryptData:(id)arg1 encryptionType:(int)arg2 error:(id *)arg3;
- (id)encryptData:(id)arg1 encryptionType:(int)arg2 error:(id *)arg3;
- (id)initWithKeyData:(id)arg1 keySourceType:(int)arg2;
- (_Bool)verifyRawSignedData:(id)arg1 signature:(id)arg2 signatureType:(int)arg3 error:(id *)arg4;
- (id)rawSignData:(id)arg1 signatureType:(int)arg2 error:(id *)arg3;
@property(nonatomic) struct __SecKey *secKey; // @synthesize secKey=_secKey;
- (void)dealloc;

@end


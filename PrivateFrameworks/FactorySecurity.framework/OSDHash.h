//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSDHash : NSObject
{
    int _hashType;
}

+ (id)hashFile:(id)arg1 hashType:(int)arg2 error:(id *)arg3;
+ (id)hashData:(id)arg1 hashType:(int)arg2 error:(id *)arg3;
- (id)hashFile:(id)arg1 error:(id *)arg2;
- (id)hashData:(id)arg1 error:(id *)arg2;
- (id)initWithHashType:(int)arg1;
@property(nonatomic) int hashType; // @synthesize hashType=_hashType;
- (id)init;

@end


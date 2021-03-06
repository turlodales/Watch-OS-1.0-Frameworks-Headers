//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)arg1;
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2;
- (id)stringByExpandingTildeInPath;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)stringByDeletingLastPathComponent;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastPathComponent;
- (id)stringByStandardizingPath;
- (BOOL)isAbsolutePath;
- (id)pathComponents;
- (id)stringByResolvingSymlinksInPath;
- (unsigned int)length;
- (id)stringByAppendingPathComponent:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqualToString:(id)arg1;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;

@end


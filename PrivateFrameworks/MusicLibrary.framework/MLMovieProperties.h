//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary, NSString;

@interface MLMovieProperties : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;
}

@property(copy, nonatomic) NSString *studioName;
@property(copy, nonatomic) NSArray *screenwriters;
@property(copy, nonatomic) NSArray *producers;
@property(copy, nonatomic) NSArray *directors;
@property(copy, nonatomic) NSString *copyrightWarning;
@property(copy, nonatomic) NSArray *castMembers;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)copyMoviePropertiesDictionary;
- (id)initWithMoviePropertiesDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


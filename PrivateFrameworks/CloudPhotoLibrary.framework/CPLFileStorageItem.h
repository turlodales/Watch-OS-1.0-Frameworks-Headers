//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying>
{
    BOOL _original;
    BOOL _markedForDelete;
    CPLResourceIdentity *_identity;
    NSDate *_lastAccessDate;
}

@property(readonly, nonatomic) CPLResourceIdentity *identity; // @synthesize identity=_identity;
- (id)initWithIdentity:(id)arg1 original:(BOOL)arg2 markedForDelete:(BOOL)arg3 lastAccessDate:(id)arg4;
@property(readonly, nonatomic) NSDate *lastAccessDate; // @synthesize lastAccessDate=_lastAccessDate;
@property(readonly, nonatomic, getter=isMarkedForDelete) BOOL markedForDelete; // @synthesize markedForDelete=_markedForDelete;
@property(readonly, nonatomic, getter=isOriginal) BOOL original; // @synthesize original=_original;
- (void).cxx_destruct;
- (BOOL)getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class DBManager;

@interface CallDBManager : CHLogger
{
    DBManager *fDBManager;
}

+ (id)create;
+ (BOOL)bootUp;
+ (id)dataStoreName;
+ (id)_create:(BOOL)arg1;
+ (id)modelURL;
+ (int)isBootUpRequired;
- (id)createManagedObjectContext;
- (id)initWithDBManager:(id)arg1;
- (void).cxx_destruct;

@end

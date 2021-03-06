//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABUIPerson, NSArray;

@interface ABAbstractPropertyGroup : NSObject
{
    NSArray *_people;
    id <ABStyleProvider> _styleProvider;
    BOOL _hasChanges;
    ABUIPerson *_preinsertedPerson;
}

@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
- (int)property;
- (BOOL)canSave;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
@property(retain, nonatomic) ABUIPerson *preinsertedPerson; // @synthesize preinsertedPerson=_preinsertedPerson;
- (void)updateRecord;
- (void)reloadFromModel;

@end


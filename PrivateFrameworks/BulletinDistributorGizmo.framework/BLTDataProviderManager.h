//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBDataProviderConnection, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BLTDataProviderManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProviders;
    BBDataProviderConnection *_connection;
    id <BLTBulletinActionResponder> _responseDelegate;
}

@property(retain, nonatomic) NSMutableDictionary *dataProviders; // @synthesize dataProviders=_dataProviders;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)addBulletin:(id)arg1 publicationDate:(id)arg2 localSectionID:(id)arg3 sectionDisplayName:(id)arg4 attachment:(id)arg5 attachmentType:(int)arg6 forDestinations:(unsigned int)arg7 updateType:(unsigned int)arg8 updateAttachment:(BOOL)arg9;
- (id)initWithConnection:(id)arg1 responseDelegate:(id)arg2;
- (void)withdrawAllBulletins;
- (id)_dataProviderForSectionID:(id)arg1 localSectionID:(id)arg2 withSectionDisplayName:(id)arg3 sectionIcon:(id)arg4;
@property(retain, nonatomic) BBDataProviderConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BLTBulletinActionResponder> responseDelegate; // @synthesize responseDelegate=_responseDelegate;

@end


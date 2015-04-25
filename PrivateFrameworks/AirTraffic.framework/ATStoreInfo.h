//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ATStoreInfo : NSObject
{
    NSMutableDictionary *_downloadDictionary;
    NSMutableDictionary *_assetDictionary;
    NSNumber *_adamID;
    NSNumber *_DSID;
    NSNumber *_collectionID;
    NSNumber *_versionID;
    NSNumber *_drmFree;
    NSNumber *_sagaID;
    NSNumber *_matchStatus;
    NSNumber *_redownloadStatus;
    NSString *_appleID;
    NSString *_storefrontID;
    NSString *_XID;
    NSString *_flavor;
    NSString *_dimensions;
    NSString *_podcastEpisodeGUID;
}

@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain, nonatomic) NSString *podcastEpisodeGUID; // @synthesize podcastEpisodeGUID=_podcastEpisodeGUID;
@property(retain, nonatomic) NSNumber *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain, nonatomic) NSString *dimensions; // @synthesize dimensions=_dimensions;
@property(retain, nonatomic) NSString *flavor; // @synthesize flavor=_flavor;
@property(retain, nonatomic) NSString *XID; // @synthesize XID=_XID;
@property(retain, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(retain, nonatomic) NSNumber *redownloadStatus; // @synthesize redownloadStatus=_redownloadStatus;
@property(retain, nonatomic) NSNumber *matchStatus; // @synthesize matchStatus=_matchStatus;
@property(retain, nonatomic) NSNumber *sagaID; // @synthesize sagaID=_sagaID;
@property(retain, nonatomic) NSNumber *drmFree; // @synthesize drmFree=_drmFree;
@property(retain, nonatomic) NSNumber *versionID; // @synthesize versionID=_versionID;
@property(readonly) NSDictionary *assetDictionary; // @synthesize assetDictionary=_assetDictionary;
@property(readonly) NSDictionary *downloadDictionary; // @synthesize downloadDictionary=_downloadDictionary;
- (void).cxx_destruct;
- (id)init;

@end

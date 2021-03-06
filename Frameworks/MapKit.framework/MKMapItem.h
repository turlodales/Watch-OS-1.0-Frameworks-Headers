//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOURLSerializable.h"

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapRegion, GEOPDFlyover, GEOPlace, MKMapItemMetadata, MKPlacemark, NSData, NSString, NSURL, _MKMapItemPhotosAttribution, _MKMapItemPlaceAttribution, _MKMapItemReviewsAttribution;

@interface MKMapItem : NSObject <GEOURLSerializable>
{
    BOOL _isCurrentLocation;
    NSString *_extSessionGuid;
    BOOL _isPlaceHolder;
    id <GEOMapItemPrivate> _geoMapItem;
    _MKMapItemPlaceAttribution *_attribution;
    _MKMapItemPhotosAttribution *_photosAttribution;
    _MKMapItemReviewsAttribution *_reviewsAttribution;
    MKMapItemMetadata *_metadata;
    GEOPlace *_place;
}

+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)_itemWithAddressBookRef:(void *)arg1 geoMapItem:(id)arg2;
+ (id)mapItemsFromURL:(id)arg1 options:(id *)arg2;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)mapItemForCurrentLocation;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
- (id)initWithAddressDictionary:(id)arg1;
@property(readonly, nonatomic) MKMapItemMetadata *metadata; // @synthesize metadata=_metadata;
- (id)sharingURL;
@property(nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(readonly, nonatomic, getter=_geoMapItem) id <GEOMapItemPrivate> geoMapItem;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, nonatomic, getter=_reviewsAttribution) _MKMapItemReviewsAttribution *reviewsAttribution; // @synthesize reviewsAttribution=_reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) _MKMapItemPhotosAttribution *photosAttribution; // @synthesize photosAttribution=_photosAttribution;
@property(readonly, nonatomic, getter=_attribution) _MKMapItemPlaceAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned int openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncement;
@property(readonly, nonatomic, getter=_hasFlyoverAnnouncementMessage) BOOL hasFlyoverAnnouncement;
@property(readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property(readonly, nonatomic, getter=_hasSessionGUID) BOOL hasSessionGUID;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeAsData) NSData *placeAsData;
- (id)_urlForWritingAReview;
- (id)_urlForReviewWithUID:(id)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
- (id)_urlForPhotoWithUID:(id)arg1;
@property(readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property(readonly, nonatomic, getter=_takesReservations) BOOL takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) BOOL hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) BOOL goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) BOOL hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) BOOL hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) BOOL hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property(readonly, nonatomic, getter=_sessionGUID) CDStruct_4bcfbbae sessionGUID;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
@property(readonly, nonatomic) GEOPlace *place; // @synthesize place=_place;
@property(readonly, nonatomic, getter=_sequenceNumber) unsigned int sequenceNumber;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
@property(copy, nonatomic) NSString *phoneNumber;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, getter=_hasDisplayableAmenities) BOOL hasDisplayableAmenities;
- (id)_mapsDataString;
@property(readonly, getter=_isEmptyContactMapItem) BOOL isEmptyContactMapItem;
@property(readonly, nonatomic) NSString *formattedNumberOfReviewsIncludingProvider;
@property(readonly, nonatomic) NSString *formattedNumberOfReviews;
@property(readonly, nonatomic) BOOL isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
@property(copy, nonatomic) NSString *extSessionGuid; // @synthesize extSessionGuid=_extSessionGuid;
- (id)_reviewsAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_photoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_infoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
@property(readonly, nonatomic, getter=_reviewsDisplayName) NSString *reviewsDisplayName;
@property(readonly, nonatomic, getter=_hasLocalizedOperatingHours) BOOL hasLocalizedOperatingHours;
@property(readonly, nonatomic, getter=_shortAddress) NSString *shortAddress;
@property(readonly, nonatomic, getter=_formattedTelephone) NSString *formattedTelephone;
@property(readonly, nonatomic, getter=_hasFormattedTelephone) BOOL hasFormattedTelephone;
@property(readonly, nonatomic, getter=_geoFenceMapRegion) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic, getter=_displayMapRegion) GEOMapRegion *displayMapRegion;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3;
- (id)initWithPlace:(id)arg1 sessionGuid:(id)arg2;
- (id)_getBusiness;
- (id)initWithPlace:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (void)_setRecord:(void *)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4;
- (id)thumbnailWithSize:(struct CGSize)arg1 annotationView:(id)arg2;
- (id)_mk_nano_formattedSingleLineAddress;
- (id)_mk_nano_addressDictionary;
@property(readonly, nonatomic) NSString *yelpID;
- (id)_mk_nano_placecardIcon;
@property(readonly, nonatomic, getter=_priceRangeString) NSString *priceRangeString;
@property(readonly, nonatomic, getter=_firstLocalizedCategoryName) NSString *firstLocalizedCategoryName;
@property(readonly, nonatomic, getter=_localizedOperatingHours) NSString *localizedOperatingHours;
- (id)_mk_nano_formattedMultiLineAddress;
@property(readonly, nonatomic, getter=_geoAddress) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_coordinate) CDStruct_c3b9c2ee coordinate;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
@property(readonly, nonatomic) MKPlacemark *placemark;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


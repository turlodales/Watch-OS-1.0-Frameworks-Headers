//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, MKSearchCompletion, NSDate, NSMutableArray, NSString, NSTimer;

@interface City : NSObject
{
    id <CityUpdaterDelegate> _delegate;
    NSString *_updateTimeString;
    NSMutableArray *_dayForecasts;
    NSMutableArray *_hourlyForecasts;
    BOOL _autoUpdate;
    BOOL _isDay;
    BOOL _isLocalWeatherCity;
    BOOL _isHourlyDataCelsius;
    BOOL _dataCelsius;
    BOOL _isUpdating;
    BOOL _isRequestedByFrameworkClient;
    BOOL _lockedForDemoMode;
    NSString *_temperature;
    NSDate *_updateTime;
    unsigned int _conditionCode;
    NSString *_name;
    NSString *_locationID;
    NSString *_state;
    unsigned int _observationTime;
    unsigned int _sunsetTime;
    unsigned int _sunriseTime;
    unsigned int _moonPhase;
    unsigned int _uvIndex;
    float _precipitationPast24Hours;
    NSString *_link;
    NSString *_deeplink;
    CLLocation *_location;
    int _secondsFromGMT;
    unsigned int _lastUpdateDetail;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    int _pressureRising;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    int _lastUpdateStatus;
    NSString *_fullName;
    MKSearchCompletion *_searchCompletion;
    int _updateInterval;
    NSTimer *_autoUpdateTimer;
}

+ (id)descriptionForWeatherUpdateDetail:(unsigned int)arg1;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) NSTimer *autoUpdateTimer; // @synthesize autoUpdateTimer=_autoUpdateTimer;
@property(retain, nonatomic) MKSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(nonatomic) BOOL lockedForDemoMode; // @synthesize lockedForDemoMode=_lockedForDemoMode;
@property(nonatomic) BOOL isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property(nonatomic) int pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) BOOL isHourlyDataCelsius; // @synthesize isHourlyDataCelsius=_isHourlyDataCelsius;
@property(nonatomic) float precipitationPast24Hours; // @synthesize precipitationPast24Hours=_precipitationPast24Hours;
@property(nonatomic, setter=setUVIndex:) unsigned int uvIndex; // @synthesize uvIndex=_uvIndex;
@property(nonatomic) BOOL isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
- (void)_generateLocalizableStrings;
- (int)precipitationForecast;
- (id)naturalLanguageDescription;
- (BOOL)containsLatitude:(float)arg1 longitude:(float)arg2;
- (BOOL)populateWithDataFromCity:(id)arg1;
@property(copy, nonatomic) NSString *woeid;
- (id)cityAndState;
- (BOOL)isUpdatingOrNoData;
- (void)finishedUpdating:(int)arg1 statusDetail:(unsigned int)arg2;
- (void)addHourlyForecast:(id)arg1;
- (void)addDayForecast:(id)arg1;
- (void)clearForecasts;
- (void)localWeatherDidBeginUpdate;
@property(nonatomic) BOOL isDay;
- (void)setAutoUpdate:(BOOL)arg1;
- (void)disassociateWithDelegate:(id)arg1;
- (void)associateWithDelegate:(id)arg1;
- (int)locationOfTime:(int)arg1;
- (int)primaryConditionForRange:(struct _NSRange)arg1;
- (id)naturalLanguageDescriptionWithDescribedCondition:(out int *)arg1;
- (float)distanceToLocation:(id)arg1;
- (float)distanceToLatitude:(float)arg1 longitude:(float)arg2;
@property(nonatomic) float feelsLike; // @synthesize feelsLike=_feelsLike;
@property(nonatomic) float humidity; // @synthesize humidity=_humidity;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(nonatomic) int lastUpdateStatus; // @synthesize lastUpdateStatus=_lastUpdateStatus;
@property(nonatomic, getter=isDataCelsius) BOOL dataCelsius; // @synthesize dataCelsius=_dataCelsius;
@property(nonatomic) unsigned int sunriseTime; // @synthesize sunriseTime=_sunriseTime;
@property(nonatomic) unsigned int sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) unsigned int observationTime; // @synthesize observationTime=_observationTime;
- (void)setDayForecasts:(id)arg1;
@property(nonatomic) int secondsFromGMT; // @synthesize secondsFromGMT=_secondsFromGMT;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
- (BOOL)_isUpdating;
- (void)discardDataIfNeeded;
@property(nonatomic) unsigned int lastUpdateDetail; // @synthesize lastUpdateDetail=_lastUpdateDetail;
- (id)dayForecasts;
@property(nonatomic) BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
- (int)timeDigit;
- (int)weatherDataAge;
- (id)windDirectionAsString:(float)arg1;
- (void)_clearAutoUpdateTimer;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
- (void)setHourlyForecasts:(id)arg1;
- (id)hourlyForecasts;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(nonatomic) float windChill; // @synthesize windChill=_windChill;
@property(nonatomic) unsigned int moonPhase; // @synthesize moonPhase=_moonPhase;
@property(nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) unsigned int conditionCode; // @synthesize conditionCode=_conditionCode;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) float longitude;
@property(nonatomic) float latitude;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
- (id)updateTimeString;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (id)displayName;
- (void)update;
@property(nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) id <CityUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (void)dealloc;

@end

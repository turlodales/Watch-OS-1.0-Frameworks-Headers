//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSArray, NSString, NSUserDefaults;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate>
{
    BOOL _isCelsius;
    NSString *_UUID;
    NSString *_serviceHost;
    BOOL _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    NSUserDefaults *_userGroupPrefs;
    BOOL _userGroupPrefsLockedWhenInit;
    NSString *_twcURLString;
}

+ (id)serviceDebuggingPath;
+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(nonatomic) BOOL userGroupPrefsLockedWhenInit; // @synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit;
@property(copy, nonatomic) NSString *twcURLString; // @synthesize twcURLString=_twcURLString;
@property(nonatomic) id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void)_clearCachedObjects;
- (BOOL)serviceDebugging;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)_cacheDirectoryPath;
- (id)twcLogoURL;
- (id)serviceHost;
- (void)setDefaultSelectedCity:(unsigned int)arg1;
- (int)loadDefaultSelectedCity;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned int)arg2;
- (id)loadSavedCityAtIndex:(int)arg1;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (id)localWeatherCity;
@property(copy, nonatomic) NSString *yahooWeatherURLString;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned int)arg2;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(BOOL)arg2;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(BOOL)arg3;
- (id)_translatedLegacyCloudCities;
- (id)loadSavedCities;
- (id)_cloudCitiesFromLegacyCloudCities:(id)arg1;
- (id)_cloudCityFromALCity:(id)arg1 name:(id)arg2;
- (BOOL)_legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2;
- (BOOL)_areDefaultCities:(id)arg1;
- (void)saveToUbiquitousStore;
- (void)setActiveCity:(unsigned int)arg1;
- (int)loadActiveCity;
- (id)_defaultCities;
- (BOOL)_defaultsAreValid;
- (id)_ppt_addFakeTestCities;
- (void)saveToDiskWithCities:(id)arg1;
- (id)preferencesDictionaryForCity:(id)arg1;
- (BOOL)isLocalWeatherEnabled;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (BOOL)_defaultsCurrent;
- (void)registerTemperatureUnits;
- (void)synchronizeStateToDiskDoNotify:(BOOL)arg1;
- (void)setCelsius:(BOOL)arg1;
- (BOOL)readTemperatureUnits;
- (void)synchronizeStateToDisk;
- (void)initOnPrefLoad;
- (BOOL)_getGroupDefaultsFromURLInApp:(id)arg1;
- (BOOL)_checkAndPerformMigrationIfNeeded;
- (BOOL)performMigration;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (BOOL)_ensurePrefsLoaded;
- (BOOL)isCelsius;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (void)resetLocale;
- (id)UUID;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


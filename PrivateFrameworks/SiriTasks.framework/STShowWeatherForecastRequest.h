//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriRequest.h"

@class AFCity, NSArray, STWeatherCurrentConditions, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest
{
    STWeatherCurrentConditions *_currentConditions;
    NSArray *_hourlyForecasts;
    AFCity *_city;
    STWeatherUnits *_units;
    int _forecastType;
}

+ (BOOL)supportsSecureCoding;
- (id)units;
- (int)forecastType;
- (id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(int)arg5;
- (id)hourlyForecasts;
- (id)currentConditions;
- (id)createResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)city;

@end

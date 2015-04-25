//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSDDAFilterData.h"
#import "OSDDAScalarData.h"
#import "OSDDAVectorData.h"

@interface OSDPhosphorousData : NSObject <OSDDAFilterData, OSDDAScalarData, OSDDAVectorData>
{
    float pressure;
    float temperature;
    double timestamp;
}

+ (id)dataWithVectorDictionary:(id)arg1;
@property(nonatomic) float pressure; // @synthesize pressure;
@property(nonatomic) float temperature; // @synthesize temperature;
- (id)scalarData;
- (id)filterData;
- (id)vectorData;
@property(nonatomic) double timestamp; // @synthesize timestamp;
- (id)init;

@end

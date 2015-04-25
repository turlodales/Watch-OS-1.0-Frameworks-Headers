//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CIBurstActionClassifier : NSObject
{
    BOOL hasBeenScaled;
    double testVector[7];
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    struct __SVMParameters *_svmParameters;
}

- (id)init;
@property float testMaxRegistrationErrorSkewness; // @synthesize testMaxRegistrationErrorSkewness;
@property float testMinRegionOfInterestSize; // @synthesize testMinRegionOfInterestSize;
@property float testAverageRegistrationErrorSkewness; // @synthesize testAverageRegistrationErrorSkewness;
@property float testMaxInnerDistance; // @synthesize testMaxInnerDistance;
@property float testInOutRatio; // @synthesize testInOutRatio;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; // @synthesize testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property float testMeanPeakRegistrationError; // @synthesize testMeanPeakRegistrationError;
@property float testMaxPeakRegistrationError; // @synthesize testMaxPeakRegistrationError;
@property float testMaxRegistrationErrorIntegral; // @synthesize testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance; // @synthesize testAverageCameraTravelDistance;
- (BOOL)isBurstAction;
- (id)initWithVersion:(int)arg1;
- (float)predictResult;
- (void)scaleVector;
- (double)computeKernelValueWithSupportVector:(const struct CIBurstSupportVector *)arg1;
@property struct __SVMParameters *svmParameters; // @synthesize svmParameters=_svmParameters;

@end

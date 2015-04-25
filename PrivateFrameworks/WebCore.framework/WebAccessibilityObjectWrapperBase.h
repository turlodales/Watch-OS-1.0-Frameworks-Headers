//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebAccessibilityObjectWrapperBase : NSObject
{
    struct AccessibilityObject *m_object;
}

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)arg1;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityMathPostscriptPairs;
- (id)ariaLandmarkRoleDescription;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (struct CGPath *)convertPathToScreenSpace:(struct Path *)arg1;
- (id)accessibilityHelpText;
- (id)accessibilityDescription;
- (id)accessibilityTitle;
- (BOOL)titleTagShouldBeUsedInDescriptionField;
- (struct AccessibilityObject *)accessibilityObject;
- (BOOL)updateObjectBackingStore;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (BOOL)fileUploadButtonReturnsValueInTitle;
- (void)accessibilityPostedNotification:(id)arg1;
- (id)initWithAccessibilityObject:(struct AccessibilityObject *)arg1;
- (id)attachmentView;
- (void)detach;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIAppearance.h>

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance
{
    UITraitCollection *_traitCollection;
}

+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;
+ (BOOL)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;
+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)arg1;
- (void)dealloc;

@end

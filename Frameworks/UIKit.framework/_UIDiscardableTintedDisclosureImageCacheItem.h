//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDiscardableContent.h"

@class UIColor, UIImage;

@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent>
{
    UIImage *_tintedImage;
    UIColor *_tintColor;
    struct {
        unsigned int isDiscarded:1;
        unsigned int isPressed:1;
        unsigned int useCount;
    } _flags;
}

@property(readonly, nonatomic) UIImage *tintedImage; // @synthesize tintedImage=_tintedImage;
- (id)initWithPressed:(BOOL)arg1 tintColor:(id)arg2;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (id)_tintedDisclosureImage:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

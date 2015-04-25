//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLThumbnailOperation, UIImage;

@interface QLThumbnailView : UIView
{
    QLThumbnailOperation *_thumbnailOperation;
    UIImage *_image;
    int _pageNumber;
    BOOL _alwaysVisible;
    struct CGRect unselectedFrame;
    struct CGRect _unselectedFrame;
}

@property int pageNumber; // @synthesize pageNumber=_pageNumber;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;
@property(retain) QLThumbnailOperation *thumbnailOperation;
@property BOOL alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;

@end

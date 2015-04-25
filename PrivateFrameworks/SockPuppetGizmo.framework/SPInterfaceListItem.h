//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView<SPInterfaceItem>;

@interface SPInterfaceListItem : NSObject
{
    BOOL _selectable;
    BOOL _needsLayout;
    BOOL _fixedRowHeight;
    UIView<SPInterfaceItem> *_view;
    NSString *_rowName;
    float _rowHeight;
}

@property(retain, nonatomic) NSString *rowName; // @synthesize rowName=_rowName;
@property(nonatomic) BOOL fixedRowHeight; // @synthesize fixedRowHeight=_fixedRowHeight;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
- (void).cxx_destruct;
@property(nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
@property(retain, nonatomic) UIView<SPInterfaceItem> *view; // @synthesize view=_view;
@property(nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;

@end

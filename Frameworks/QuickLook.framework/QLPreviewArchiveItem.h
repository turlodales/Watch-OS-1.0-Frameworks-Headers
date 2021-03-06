//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewUIItem.h"

@class NSArray, NSError, NSMutableArray, NSOperation, NSOperationQueue, NSString, NSURL, QLPreviewThumbnailGenerator, UIDocumentInteractionController, UIImage;

@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem>
{
    UIDocumentInteractionController *_archiveController;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
    NSString *_path;
    NSURL *_unarchivedURL;
    NSOperation *_unarchiveOperation;
    NSOperationQueue *_unarchiveOperationQueue;
    NSMutableArray *_completionBlocks;
    NSError *_unarchivingError;
    int _previewItemIndex;
    int _UIItemIndex;
    int _level;
    NSURL *_rootUnzippingURL;
    NSArray *_subItems;
}

@property(readonly) BOOL isFolder;
@property(readonly) UIImage *icon;
- (void)cleanup;
@property(readonly) NSURL *previewItemURL;
- (id)initWithPath:(id)arg1;
@property int level; // @synthesize level=_level;
@property(readonly) NSString *path;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property int UIItemIndex; // @synthesize UIItemIndex=_UIItemIndex;
- (id)unarchivingError;
@property(readonly) BOOL unarchived;
- (void)unarchiveWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain) NSURL *rootUnzippingURL; // @synthesize rootUnzippingURL=_rootUnzippingURL;
@property(copy) NSArray *subItems; // @synthesize subItems=_subItems;
@property int previewItemIndex; // @synthesize previewItemIndex=_previewItemIndex;
- (id)initWithArchiveController:(id)arg1 path:(id)arg2;
- (void)cancelIconUpdate;
- (void)updateIconWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)isPromisedItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end


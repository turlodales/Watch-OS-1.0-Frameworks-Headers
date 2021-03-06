//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSData, NSString, NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable>
{
}

+ (id)imageResourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)imageResource;
@property(copy, nonatomic) NSURL *resourceUrl;
@property(nonatomic) double pointWidth;
@property(nonatomic) double pointHeight;
@property(nonatomic) double pixelWidth;
@property(nonatomic) double pixelHeight;
- (id)encodedClassName;
@property(copy, nonatomic) NSData *imageData;
@property(nonatomic) double scaleFactor;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


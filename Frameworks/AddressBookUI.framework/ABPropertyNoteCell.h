//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertyCell.h>

@class UILabel, UITextView;

@interface ABPropertyNoteCell : ABPropertyCell
{
    UITextView *_textView;
    UILabel *_labelLabel;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)valueView;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void)textViewEditingDidEnd:(id)arg1;
- (void)textViewChanged:(id)arg1;
- (float)bottomBaselineConstant;
- (void)setValueTextAttributes:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)labelView;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)performDefaultAction;

@end


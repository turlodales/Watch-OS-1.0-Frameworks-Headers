//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer
{
    struct RetainPtr<UITouch> _touch;
}

- (void)_processTouches:(id)arg1 state:(int)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationInView:(id)arg1;

@end

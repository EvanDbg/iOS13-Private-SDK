//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"


@class UIButton, UIColor;

__attribute__((visibility("hidden")))
@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate>
{
    NSUInteger _hardEdge;
    UIView *_hardEdgeLine;
    UIButton *_delegate;
}

@property(nonatomic) UIButton *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
@property NSUInteger hardEdge;
@property(nonatomic) UIColor *borderColor;
@property double borderWidth;
- (void)layoutSubviews;
- (CGRect)_frameForLine;
- (id)init;

@end


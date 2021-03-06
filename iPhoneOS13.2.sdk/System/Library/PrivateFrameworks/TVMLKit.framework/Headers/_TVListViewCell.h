//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIVisualEffectView, _UIFloatingContentView;
@protocol _TVListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
    BOOL _visualEffectViewBackgroundEnabled;
    BOOL _disabled;
    BOOL _shouldAppearSelected;
    _UIFloatingContentView *_floatingView;
    id <_TVListViewCellDelegate> _delegate;
}

@property(nonatomic) BOOL shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <_TVListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) BOOL visualEffectViewBackgroundEnabled; // @synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled;
// - (void).cxx_destruct;
- (void)_updateSelectedBackgroundColor;
- (NSUInteger)_floatingViewControlState;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (BOOL)canBecomeFocused;
- (void)setBackgroundColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)_descendantsShouldHighlight;
- (id)initWithFrame:(CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, SKUIColorScheme, SKUISegmentedControl;

__attribute__((visibility("hidden")))
@interface SKUIPillsControl : UIControl
{
    SKUIColorScheme *_colorScheme;
    UIEdgeInsets _contentInset;
    long long _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_titles;
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(nonatomic) long long maximumNumberOfVisiblePills; // @synthesize maximumNumberOfVisiblePills=_maximumNumberOfVisiblePills;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
// - (void).cxx_destruct;
- (void)_segmentedControlAction:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long selectedIndex;
@property(readonly, nonatomic) CGRect selectedPillFrame;
- (void)reloadPills;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end


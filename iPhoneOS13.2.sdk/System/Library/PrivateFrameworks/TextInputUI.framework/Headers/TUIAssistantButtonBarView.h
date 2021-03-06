//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/TUIButtonBarViewProvider-Protocol.h>

@class NSArray, NSMutableOrderedSet, _UIButtonBarButtonVisualProvider;
@protocol TUIAssistantButtonBarViewDelegate, _UIButtonBarAppearanceDelegate;

@interface TUIAssistantButtonBarView : UIView <TUIButtonBarViewProvider>
{
    BOOL _constrainedHorizontally;
    NSArray *_buttonGroups;
    _UIButtonBarButtonVisualProvider *_visualProvider;
    double _minimumInterItemSpace;
    double _minimumInterGroupSpace;
    long long _buttonAlignment;
    id <TUIAssistantButtonBarViewDelegate> _delegate;
    double _horizontalMargins;
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIView *_buttonContainer;
    double _effectiveInterItemSpacing;
    NSMutableOrderedSet *_groupViews;
}

@property(retain, nonatomic) NSMutableOrderedSet *groupViews; // @synthesize groupViews=_groupViews;
@property(nonatomic) double effectiveInterItemSpacing; // @synthesize effectiveInterItemSpacing=_effectiveInterItemSpacing;
@property(retain, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(nonatomic) __weak id <_UIButtonBarAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) double horizontalMargins; // @synthesize horizontalMargins=_horizontalMargins;
@property(nonatomic) __weak id <TUIAssistantButtonBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL constrainedHorizontally; // @synthesize constrainedHorizontally=_constrainedHorizontally;
@property(nonatomic) long long buttonAlignment; // @synthesize buttonAlignment=_buttonAlignment;
@property(nonatomic) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property(nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property(retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(retain, nonatomic) NSArray *buttonGroups; // @synthesize buttonGroups=_buttonGroups;
// - (void).cxx_destruct;
- (void)_didTapButtonBarButton:(id)arg1 withEvent:(id)arg2;
- (id)_itemViewForSender:(id)arg1;
- (void)preferredSizeDidChangeForButtonBarItem:(id)arg1;
- (CGSize)preferredSizeForButtonBarItem:(id)arg1;
- (CGSize)_preferredTitleSizeForBarButtonItem:(id)arg1;
- (void)configureButtonBarItemView:(id)arg1 forItem:(id)arg2 group:(id)arg3;
- (void)validateButtonGroups;
- (void)layoutSubviews;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)_containsFlexibleGroupViews;
- (void)_uncollapseAllGroupsForNewSizeIfNecessary:(CGSize)arg1;
- (void)_collapseGroupsIfNecessaryForWidth:(double)arg1;
- (id)_allVisibleBarItemViews;
- (id)_uncollapsedGroupViews;
- (id)_visibleGroups;
- (id)_visibleGroupViews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (UIEdgeInsets)_insetsForHorizontalMargin;
- (double)_interItemSpacingThatFits:(CGSize)arg1 forGroupSize:(CGSize)arg2;
- (CGSize)_totalGroupSizeThatFits:(CGSize)arg1;
- (void)_updateBarButtonItemHiddenState;
- (id)_groupViewForBarButtonItemGroup:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end


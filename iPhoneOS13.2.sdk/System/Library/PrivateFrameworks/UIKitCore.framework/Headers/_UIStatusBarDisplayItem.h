//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarActionable-Protocol.h>
#import <UIKitCore/_UIStatusBarPrioritized-Protocol.h>

@class NSString, UIView, _UIStatusBarAction, _UIStatusBarDisplayItemPlacement, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol UILayoutItem, _UIStatusBarDisplayable;

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized, _UIStatusBarActionable>
{
    BOOL _enabled;
    BOOL _background;
    BOOL _floating;
    BOOL _needsAddingToLayout;
    UIView<_UIStatusBarDisplayable> *_view;
    _UIStatusBarAction *_action;
    _UIStatusBarIdentifier *_identifier;
    _UIStatusBarItem *_item;
    UIView *_highlightView;
    double _alpha;
    double _viewAlpha;
    double _baselineOffset;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    long long _overriddenVerticalAlignment;
    _UIStatusBarRegion *_region;
    UIView *_containerView;
    id <UILayoutItem> _layoutItem;
    _UIStatusBarDisplayItemPlacement *_placement;
    UIEdgeInsets _actionInsets;
    CGAffineTransform _transform;
    CGAffineTransform _viewTransform;
}

@property(nonatomic) BOOL needsAddingToLayout; // @synthesize needsAddingToLayout=_needsAddingToLayout;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) id <UILayoutItem> layoutItem; // @synthesize layoutItem=_layoutItem;
@property(nonatomic) BOOL floating; // @synthesize floating=_floating;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak _UIStatusBarRegion *region; // @synthesize region=_region;
@property(nonatomic) long long overriddenVerticalAlignment; // @synthesize overriddenVerticalAlignment=_overriddenVerticalAlignment;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // @synthesize overriddenStyleAttributes=_overriddenStyleAttributes;
@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(nonatomic) CGAffineTransform viewTransform; // @synthesize viewTransform=_viewTransform;
@property(nonatomic) CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) double viewAlpha; // @synthesize viewAlpha=_viewAlpha;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic, getter=isBackground) BOOL background; // @synthesize background=_background;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) __weak _UIStatusBarItem *item; // @synthesize item=_item;
@property(readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) UIEdgeInsets actionInsets; // @synthesize actionInsets=_actionInsets;
@property(retain, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) long long priority;
@property(nonatomic) CGRect absoluteFrame;
- (void)_updateComputedTransform;
- (void)_updateComputedAlpha;
@property(readonly, nonatomic) BOOL visible;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <_UIStatusBarDisplayable> displayable;
@property(readonly, nonatomic) UIView<_UIStatusBarDisplayable> *view; // @synthesize view=_view;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/SBFluidSwitcherScrollProviding-Protocol.h>

@class NSString, SBGridLayoutSwitcherModifier, _SBInlineGridFloorSwitcherModifier;
@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBInlineGridSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding>
{
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBInlineGridFloorSwitcherModifier *_floorModifier;
    NSUInteger _initialScrollAxis;
    CGSize _initialCardSize;
    double _initialCardScale;
    BOOL _hasScrolledToInitialAppLayoutForTransitionIntoSwitcher;
    NSUInteger _ongoingAppLayoutRemovals;
    BOOL _floating;
    BOOL _overlay;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    NSString *_bundleIdentifier;
}

@property(readonly, nonatomic, getter=isOverlay) BOOL overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic, getter=isFloating) BOOL floating; // @synthesize floating=_floating;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) double cardScale;
@property(readonly, nonatomic) CGSize fixedCardSize;
@property(readonly, nonatomic) NSUInteger scrollAxis;
- (double)effectiveHorizontalSpacing;
- (NSUInteger)numberOfRows;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)gridLayoutModifier;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 scrollAxis:(NSUInteger)arg2 fixedCardSize:(CGSize)arg3 cardScale:(double)arg4 floating:(BOOL)arg5 overlay:(BOOL)arg6;

@end


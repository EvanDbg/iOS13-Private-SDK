//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UILegacyFocusRegion-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UITableViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer>
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (BOOL)_isTransparentFocusRegion;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (BOOL)canBecomeFocused;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (CGRect)_focusRegionFrame;
- (id)_focusRegionFocusSystem;
@property(readonly, copy) NSString *description;

@end


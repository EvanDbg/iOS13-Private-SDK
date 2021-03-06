//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIFocusSystem, UIScreen, _UIFocusRegion, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

@protocol _UIFocusRegionSearchContext <NSObject>
@property(readonly, nonatomic) _UIFocusSearchInfo *searchInfo;
@property(readonly, nonatomic) id <_UIFocusMapArea> searchArea;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property(readonly, nonatomic) __weak UIScreen *screen;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem;
- (void)addRegionsInContainers:(NSArray *)arg1;
- (void)addRegionsInContainer:(id <_UIFocusRegionContainer>)arg1;
- (void)addRegions:(NSArray *)arg1;
- (void)addRegion:(_UIFocusRegion *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusDebugQuickLookImageDrawing-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying>
{
    NSMutableArray *_mutableOccludingRegions;
    _UIFocusRegion *_originalRegion;
    CGRect _frame;
}

+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(BOOL)arg3;
+ (id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2;
+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1;
@property(retain, nonatomic, getter=_originalRegion, setter=_setOriginRegion:) _UIFocusRegion *originalRegion; // @synthesize originalRegion=_originalRegion;
@property(nonatomic, setter=_setFrame:) CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic, getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:) NSMutableArray *mutableOccludingRegions; // @synthesize mutableOccludingRegions=_mutableOccludingRegions;
// - (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef )arg2;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
@property(readonly, nonatomic, getter=_debugAssociatedObject) __weak id debugAssociatedObject;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)_visibleSubregionsWhenOccludedByRegion:(id)arg1;
- (void)_addOccludingRegion:(id)arg1;
- (id)_occludingRegions;
- (id)_subregionWithFrame:(CGRect)arg1;
- (id)_resizeToRect:(CGRect)arg1;
- (NSUInteger)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1;
- (NSUInteger)_effectiveFocusableBoundariesForHeading:(NSUInteger)arg1;
- (long long)_preferredDistanceComparisonType;
- (NSUInteger)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (NSUInteger)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2;
- (BOOL)_shouldUseNextFocusedItemForLinearSorting;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (id)_defaultFocusItem;
- (BOOL)_shouldCropRegionToSearchArea;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_canOccludeRegionsBelow;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end


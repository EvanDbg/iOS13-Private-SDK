//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper
{
    NSMutableDictionary *mNodeInfoMap;
    BOOL mIsLayered;
}

// - (void).cxx_destruct;
- (CGSize)sizeForNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
// - (struct ODIHRangeVector )mapRangesForNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(NSUInteger)arg4;
- (void)copyInfoForNode:(id)arg1 depth:(int)arg2;
// - (CGRect)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector )arg1;
- (CGRect)boundsForNode:(id)arg1;
- (id)infoForNode:(id)arg1;
- (void)setUpLayers;

@end


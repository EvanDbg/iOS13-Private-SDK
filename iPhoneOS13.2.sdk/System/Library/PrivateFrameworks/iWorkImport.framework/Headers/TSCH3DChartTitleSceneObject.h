//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
{
}

+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;
+ (id)partWithChartInfo:(id)arg1;
+ (CGSize)labelWrapSizeForScene:(id)arg1;
+ (BOOL)setLabelWrapBounds:(const box_80622335 )arg1 forScene:(id)arg2;
+ (CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id )arg2;
- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;
- (BOOL)isAnnotated;
- (void)renderLabels:(id)arg1;
- (void)renderAnnotatedLabels:(id)arg1;
- (void)p_renderLabel:(id)arg1;

@end


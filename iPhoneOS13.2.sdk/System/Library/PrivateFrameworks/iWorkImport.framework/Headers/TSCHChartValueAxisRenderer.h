//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartAxisRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer
{
    NSUInteger mEditingLabelIndex;
}

- (void)drawIntoLayer:(int)arg1 inContext:(CGContextRef )arg2 visible:(CGRect)arg3;
- (id)labelStringForAxis:(id)arg1 index:(NSUInteger)arg2;
- (double)unitSpaceValueForAxis:(id)arg1 index:(NSUInteger)arg2;
- (id)labelsLayoutItem;
- (id)transparencyLayers;
- (id)valueAxisLayoutItem;

@end


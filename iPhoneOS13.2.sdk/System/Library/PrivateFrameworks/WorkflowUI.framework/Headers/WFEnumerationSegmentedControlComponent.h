//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponent.h>

@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent
{
    WFEnumerationParameter *_parameter;
    id /* CDUnknownBlockType */ _updateBlock;
}

+ (double)estimatedWidthWithSegments:(id)arg1;
+ (double)perSegmentWidthWithSegments:(id)arg1;
+ (double)minimumWidthForSegmentWithTitle:(id)arg1;
//  (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4;
// - (void).cxx_destruct;
- (void)segmentedControlSelectedSegmentChanged:(id)arg1;

@end


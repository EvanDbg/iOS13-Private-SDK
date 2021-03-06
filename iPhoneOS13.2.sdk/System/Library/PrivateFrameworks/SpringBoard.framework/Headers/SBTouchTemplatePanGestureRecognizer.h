//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePanGestureRecognizer : SBTouchTemplateGestureRecognizer
{
    BOOL _recognizesHorizontalPanning;
    BOOL _recognizesVerticalPanning;
}

+ (id)defaultTemplates;
@property(nonatomic) BOOL recognizesVerticalPanning; // @synthesize recognizesVerticalPanning=_recognizesVerticalPanning;
@property(nonatomic) BOOL recognizesHorizontalPanning; // @synthesize recognizesHorizontalPanning=_recognizesHorizontalPanning;
- (BOOL)_directionallyAcceptMotion;
- (CGPoint)_convertPortraitPoint:(CGPoint)arg1 toOrientation:(long long)arg2;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (BOOL)hasSignificantMotionToBegin;
- (double)_arcSize;
- (double)_arcCenter;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end


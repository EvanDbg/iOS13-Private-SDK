//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXColumnLayout;
@protocol SXDocumentLayout;

@protocol SXColumnCalculator <NSObject>
- (SXColumnLayout *)columnLayoutWithConstrainedViewportSize:(CGSize)arg1 viewportSize:(CGSize)arg2 documentLayout:(id <SXDocumentLayout>)arg3;
- (SXColumnLayout *)columnLayoutWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id <SXDocumentLayout>)arg3 contentScaleFactor:(double)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HKInteractiveChartCurrentValueView, NSAttributedString, NSString, UIColor;

@protocol HKInteractiveChartCurrentValueViewDataSource 
- (UIColor *)secondaryTextColorForCurrentValueView:(HKInteractiveChartCurrentValueView *)arg1;
- (UIColor *)textColorForCurrentValueView:(HKInteractiveChartCurrentValueView *)arg1;
- (NSString *)secondaryStringForCurrentValueView:(HKInteractiveChartCurrentValueView *)arg1;
- (NSAttributedString *)attributedValueStringForCurrentValueView:(HKInteractiveChartCurrentValueView *)arg1;
- (NSAttributedString *)attributedTitleStringForCurrentValueView:(HKInteractiveChartCurrentValueView *)arg1;
- (_Bool)pendingData;
@end

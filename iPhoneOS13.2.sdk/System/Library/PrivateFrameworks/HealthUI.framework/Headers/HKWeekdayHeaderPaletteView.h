//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView
{
    NSMutableArray *_weekdayLabels;
}

+ (double)preferredHeight;
+ (id)weekdayFont;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithFrame:(CGRect)arg1 shouldSupportRTL:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end


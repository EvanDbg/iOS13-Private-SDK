//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView
{
    BOOL _needsTopBorder;
    BOOL _needsBottomBorder;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

+ (double)preferredHeight;
+ (id)identifier;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) BOOL needsBottomBorder; // @synthesize needsBottomBorder=_needsBottomBorder;
@property(nonatomic) BOOL needsTopBorder; // @synthesize needsTopBorder=_needsTopBorder;
// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STUsageCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface STMostUsedCell : STUsageCell
{
    UIImageView *_allowanceIconView;
}

@property(readonly, nonatomic) UIImageView *allowanceIconView; // @synthesize allowanceIconView=_allowanceIconView;
// - (void).cxx_destruct;
- (void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end


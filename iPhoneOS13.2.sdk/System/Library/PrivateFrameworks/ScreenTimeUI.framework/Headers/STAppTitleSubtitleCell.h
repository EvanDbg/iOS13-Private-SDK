//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

__attribute__((visibility("hidden")))
@interface STAppTitleSubtitleCell : PSTableCell
{
    BOOL _hasSubtitle;
}

+ (long long)cellStyle;
@property(nonatomic) BOOL hasSubtitle; // @synthesize hasSubtitle=_hasSubtitle;
- (void)_didFetchAppInfoOrIcon:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) BOOL isAppCell;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/SearchUIDetailedViewDelegate-Protocol.h>

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>
{
}

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void)footnoteButtonPressed;
- (void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2;
- (void)setFeedbackDelegate:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end


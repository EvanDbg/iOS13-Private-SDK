//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIDetailedView;

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController
{
    SearchUIDetailedView *_detailedView;
}

@property(retain, nonatomic) SearchUIDetailedView *detailedView; // @synthesize detailedView=_detailedView;
// - (void).cxx_destruct;
- (void)setCardSectionRowModel:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;
- (double)spacing;

@end


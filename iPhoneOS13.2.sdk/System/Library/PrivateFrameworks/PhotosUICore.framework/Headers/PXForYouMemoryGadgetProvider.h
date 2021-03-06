//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSDate, PXMemoriesFeedWidgetDataSourceManager;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    BOOL _hasGeneratedGadgets;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSDate *_cachedPriorityDate;
}

+ (NSUInteger)maxMemoriesToFetch;
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(nonatomic) BOOL hasGeneratedGadgets; // @synthesize hasGeneratedGadgets=_hasGeneratedGadgets;
@property(retain, nonatomic) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
// - (void).cxx_destruct;
- (void)resetPriorityDate;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (BOOL)supportsDynamicRanking;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKSource;

__attribute__((visibility("hidden")))
@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController
{
    HKSource *_source;
}

@property(retain, nonatomic) HKSource *source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (void)deleteAllSourceData;
- (void)deleteSource;
- (void)deleteAllStoredData;
- (BOOL)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;
@property(readonly, nonatomic) BOOL sourceHasData;
@property(readonly, nonatomic) BOOL sourceIsInstalled;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDSleepListDataProvider : WDSampleListDataProvider
{
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}

// - (void).cxx_destruct;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)deleteAllData;
- (void)removeObjectAtIndex:(NSUInteger)arg1 forSection:(NSUInteger)arg2 sectionRemoved:(BOOL )arg3;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)objectAtIndex:(NSUInteger)arg1 forSection:(NSUInteger)arg2;
- (id)_sleepSampleAtIndex:(NSUInteger)arg1 section:(NSUInteger)arg2;
- (NSUInteger)numberOfObjectsForSection:(NSUInteger)arg1;
- (id)titleForSection:(NSUInteger)arg1;
- (NSUInteger)numberOfSections;
- (long long)cellStyle;
- (id)_sleepDataDictionaryFromSamples:(id)arg1;
- (void)_callUpdateHandler;
- (id)sampleTypes;

@end


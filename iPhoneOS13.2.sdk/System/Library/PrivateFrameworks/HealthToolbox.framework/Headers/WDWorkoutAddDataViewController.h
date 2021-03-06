//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDAddDataViewController.h>

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>
#import <HealthToolbox/WDAddDataManualEntrySpinnerDataSource-Protocol.h>

@class HKQuantityType, NSArray, WDAddDataManualEntryItem, WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDWorkoutAddDataViewController : WDAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>
{
    NSArray *_workoutActivityTypePairs;
    HKQuantityType *_distanceType;
    NSArray *_sectionsWithDistance;
    NSArray *_sectionsWithoutDistance;
    WDAddDataManualEntrySpinner *_activityTypeEntryItem;
    WDAddDataManualEntryItem *_distanceEntryItem;
    WDAddDataManualEntryItem *_activeEnergyEntryItem;
    WDAddDataManualEntryItem *_dateRangeEntryItem;
}

// - (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (void)_updateCurrentDistanceTypeWithActivityType:(NSUInteger)arg1;
- (id)_sectionsForDistanceType:(id)arg1;
- (NSUInteger)_selectedActivityType;
- (NSUInteger)_activityTypeForIndex:(long long)arg1;
- (id)_activityTypeDescriptionForIndex:(long long)arg1;
- (long long)_indexOfActivityType:(NSUInteger)arg1;
- (id)_generateSortedActivityTypes;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (void)saveHKObjectWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_activeEnergyDisplayName;
- (id)_distanceDisplayName;
- (id)_unitForDistanceType:(id)arg1;
- (id)_displayTypeForDistanceType:(id)arg1;
- (id)_displayTypeForIdentifier:(long long)arg1;
- (id)_quantityFromEntryItem:(id)arg1 unit:(id)arg2;
- (id)_totalEnergyBurned;
- (id)_totalDistance;
- (void)unitPreferencesDidChange:(id)arg1;
- (void)dealloc;
- (void)_createEntryItems;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end


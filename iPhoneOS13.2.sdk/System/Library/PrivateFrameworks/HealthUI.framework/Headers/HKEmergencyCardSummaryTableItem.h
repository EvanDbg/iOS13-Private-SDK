//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem
{
    HKMedicalIDPersonSummaryCell *_cell;
}

// - (void).cxx_destruct;
- (UIEdgeInsets)separatorInset;
- (void)setData:(id)arg1;
- (id)_cell;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (BOOL)hasPresentableData;
- (void)timeZoneDidChange:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (id)initInEditMode:(BOOL)arg1;

@end


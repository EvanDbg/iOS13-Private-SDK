//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKMedicalIDData.h>

@interface _HKMedicalIDData (HKMedicalIDAddressBookBridge)
+ (id)contactKeysToLoadForMedicalID;
- (id)_contactKeysToFetch;
- (BOOL)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;
- (BOOL)_updateExistingEmergencyContacts;
- (BOOL)updateEmergencyContacts;
- (void)loadDataFromCNContact:(id)arg1;
@end


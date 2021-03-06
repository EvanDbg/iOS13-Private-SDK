//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalContactsProviderProtocol-Protocol.h>

@class CNContact, CNContactStore, CNReputationStore, NSArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol>
{
    CNContact *_meContact;
    CNContactStore *_store;
    CNReputationStore *_reputationStore;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSString *_testMeContactIdentifer;
    NSMutableSet *_delegates;
    NSArray *_unitTestEmails;
}

+ (id)birthdayStringForContactName:(id)arg1 eventDate:(id)arg2 birthDate:(id)arg3 lunarCalendar:(id)arg4;
+ (BOOL)isCalendarIslamic:(id)arg1;
+ (BOOL)birthdayIsYearless:(id)arg1;
+ (BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;
+ (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;
+ (id)reputationForHandle:(id)arg1 inStore:(id)arg2;
+ (id)defaultProvider;
@property(retain) NSArray *unitTestEmails; // @synthesize unitTestEmails=_unitTestEmails;
@property(retain) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(retain) NSString *testMeContactIdentifer; // @synthesize testMeContactIdentifer=_testMeContactIdentifer;
@property(retain) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain) CNReputationStore *reputationStore; // @synthesize reputationStore=_reputationStore;
@property(retain) CNContactStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1;
- (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1;
- (BOOL)urlMatchesOneOfMyEmails:(id)arg1;
- (BOOL)matchesOneOfMyEmails:(id)arg1;
- (id)myEmailAddresses;
- (id)myEmailAddress;
- (id)myAddressForLabel:(id)arg1;
- (id)myWorkAddress;
- (id)myHomeAddress;
- (id)myFullName;
- (id)myNameWithStyle:(long long)arg1;
- (id)myShortDisplayName;
- (BOOL)contactIdentifierIsMe:(id)arg1;
- (void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2;
- (id)myAvatarEncodedString;
- (id)contactsFromContactIdentifiers:(id)arg1 withKeys:(id)arg2;
- (id)unifiedContactMatchingName:(id)arg1 email:(id)arg2 url:(id)arg3 keysToFetch:(id)arg4;
- (id)unifiedContactWithIdentifier:(id)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)unifiedContactWithPhoneNumber:(id)arg1;
- (id)unifiedContactWithEmailAddress:(id)arg1;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;
- (id)unifiedMeContact;
- (void)setTestMeContactIdentifier:(id)arg1;
- (id)_fetchedUnifiedMeContact;
- (id)_meWithKeys:(id)arg1;
- (void)_setLastHistoryToken:(id)arg1;
- (id)_lastHistoryToken;
- (void)_syncContacts;
- (void)meCardChanged:(id)arg1;
- (void)contactsChanged:(id)arg1;
- (id)contactStore;
- (void)setMeCardEmailsForUnitTesting:(id)arg1;
@property(retain) CNContact *meContact;
- (void)deregisterForContactChangeNotifications:(id)arg1;
- (void)registerForContactChangeNotifications:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;

@end


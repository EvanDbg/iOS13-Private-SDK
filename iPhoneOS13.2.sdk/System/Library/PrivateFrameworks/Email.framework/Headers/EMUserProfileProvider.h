//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMUserProfileProvider-Protocol.h>

@class CNContactStore, NSDictionary, NSMutableArray, NSSet;
@protocol OS_dispatch_queue;

@interface EMUserProfileProvider : NSObject <EMUserProfileProvider>
{
//    struct os_unfair_lock_s _cacheLock;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    int _outstandingCacheRefreshes;
    NSDictionary *_cache;
    NSMutableArray *_knownToBeMyEmail;
    NSMutableArray *_knownToNotBeMyEmail;
    CNContactStore *_contactStore;
}

+ (BOOL)doesAddressList:(id)arg1 containAddressInSet:(id)arg2;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) NSMutableArray *knownToNotBeMyEmail; // @synthesize knownToNotBeMyEmail=_knownToNotBeMyEmail;
@property(readonly, nonatomic) NSMutableArray *knownToBeMyEmail; // @synthesize knownToBeMyEmail=_knownToBeMyEmail;
@property(retain, nonatomic) NSDictionary *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (id)_contactEmailAddresses;
- (id)_accountsEmailAddresses;
- (void)_contactsChanged:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)waitForOutstandingCacheRefreshes;
- (void)refreshCachedValues;
- (BOOL)_isMyEmailAddressContainedInAddressStrings:(id)arg1;
- (BOOL)isMyEmailAddressContainedInAddressList:(id)arg1;
@property(readonly, copy) NSSet *allEmailAddresses;
- (id)contactWithKeysToFetch:(id)arg1;
- (id)contact;
@property(readonly, copy) NSSet *contactEmailAddresses;
@property(readonly, copy) NSSet *accountsEmailAddresses;
- (id)init;

@end


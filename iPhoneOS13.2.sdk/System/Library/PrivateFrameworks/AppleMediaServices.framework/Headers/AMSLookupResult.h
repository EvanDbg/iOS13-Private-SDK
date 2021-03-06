//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLResult.h>

@class NSArray, NSDate, NSDictionary;

@interface AMSLookupResult : AMSURLResult
{
    NSDictionary *_response;
    NSDate *_expirationDate;
}

@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
// - (void).cxx_destruct;
- (void)_enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)valueForProperty:(id)arg1;
- (id)itemForKey:(id)arg1;
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;
@property(readonly, nonatomic) NSArray *allItems;
- (id)initWithResult:(id)arg1 dictionary:(id)arg2;

@end


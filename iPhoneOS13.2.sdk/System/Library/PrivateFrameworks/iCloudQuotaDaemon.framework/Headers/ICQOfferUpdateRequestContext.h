//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface ICQOfferUpdateRequestContext : NSObject
{
    BOOL _zeroAction;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    NSString *_buttonId;
    NSString *_offerId;
}

@property(nonatomic, getter=isZeroAction) BOOL zeroAction; // @synthesize zeroAction=_zeroAction;
@property(retain, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(copy, nonatomic) NSString *buttonId; // @synthesize buttonId=_buttonId;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;

@end


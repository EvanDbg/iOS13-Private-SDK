//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, NSAttributedString, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem
{
}

+ (long long)dataType;
- (BOOL)isValidWithError:(id )arg1;
@property(readonly, nonatomic) BOOL isShippingEditable;
- (id)errors;
@property(readonly, nonatomic) NSString *shippingType;
@property(readonly, nonatomic) CNContact *shippingAddress;
@property(readonly, nonatomic) NSAttributedString *formattedAddressString;
- (id)_shippingName;

@end


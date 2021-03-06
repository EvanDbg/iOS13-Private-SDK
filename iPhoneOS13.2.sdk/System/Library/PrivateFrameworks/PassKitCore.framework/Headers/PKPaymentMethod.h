//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CNContact, NSString, PKDisbursementVoucher, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_displayName;
    NSString *_network;
    NSUInteger _type;
    PKPaymentPass *_paymentPass;
    CNContact *_billingAddress;
    PKRemotePaymentInstrument *_remoteInstrument;
    NSString *_peerPaymentQuoteIdentifier;
    PKDisbursementVoucher *_disbursementVoucher;
    NSString *_bindToken;
}

+ (BOOL)supportsSecureCoding;
+ (long long)version;
+ (id)paymentMethodWithProtobuf:(id)arg1;
@property(copy, nonatomic) NSString *bindToken; // @synthesize bindToken=_bindToken;
@property(retain, nonatomic) PKDisbursementVoucher *disbursementVoucher; // @synthesize disbursementVoucher=_disbursementVoucher;
@property(copy, nonatomic) NSString *peerPaymentQuoteIdentifier; // @synthesize peerPaymentQuoteIdentifier=_peerPaymentQuoteIdentifier;
@property(retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument; // @synthesize remoteInstrument=_remoteInstrument;
@property(copy, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(copy, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBindToken:(id)arg1;
- (id)initWithDisbursementVoucher:(id)arg1;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(BOOL)arg3;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2;
- (id)protobuf;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureResult, NSString;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetResult : NSObject
{
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

@property(retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain, nonatomic) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain, nonatomic) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
// - (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class PKAccount, PKInstallmentPlan, PKPaymentPass;

@interface PKDashboardTransactionInstallmentItem : NSObject <PKDashboardItem>
{
    PKInstallmentPlan *_installmentPlan;
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
}

@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) PKInstallmentPlan *installmentPlan; // @synthesize installmentPlan=_installmentPlan;
// - (void).cxx_destruct;

@end


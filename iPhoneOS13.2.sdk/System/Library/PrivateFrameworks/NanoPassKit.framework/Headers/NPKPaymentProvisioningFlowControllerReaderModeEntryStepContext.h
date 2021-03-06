//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, NSString, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext
{
    NSString *_title;
    NSString *_subtitle;
    NSArray *_setupFields;
    PKPaymentSetupProduct *_product;
}

@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSArray *setupFields; // @synthesize setupFields=_setupFields;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end


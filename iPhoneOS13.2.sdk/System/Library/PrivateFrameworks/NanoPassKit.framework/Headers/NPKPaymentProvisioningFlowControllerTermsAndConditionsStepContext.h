//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSURL;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext
{
    _Bool _allowNonSecureHTTP;
    NSURL *_termsURL;
}

@property(nonatomic) _Bool allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
@property(retain, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

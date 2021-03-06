//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentDocumentSubmissionController.h>

#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class PKPeerPaymentAccountResolutionController, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService;

@interface PKPeerPaymentDocumentSubmissionController : PKPaymentDocumentSubmissionController <PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentWebService *_webService;
    PKPeerPaymentIdentityVerificationResponse *_identityVerificationResponse;
    PKPeerPaymentAccountResolutionController *_accountResolutionController;
}

@property(retain, nonatomic) PKPeerPaymentAccountResolutionController *accountResolutionController; // @synthesize accountResolutionController=_accountResolutionController;
@property(retain, nonatomic) PKPeerPaymentIdentityVerificationResponse *identityVerificationResponse; // @synthesize identityVerificationResponse=_identityVerificationResponse;
@property(retain, nonatomic) PKPeerPaymentWebService *webService; // @synthesize webService=_webService;
// - (void).cxx_destruct;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)contactApplePressed;
- (void)uploadID;
- (id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4;

@end


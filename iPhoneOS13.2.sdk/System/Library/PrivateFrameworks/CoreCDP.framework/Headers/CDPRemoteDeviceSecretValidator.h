//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject
{
    id <CDPRemoteDeviceSecretValidatorProtocol> _validator;
}

// - (void).cxx_destruct;
- (void)_executeSyncOnMainThreadIfNeeded:(CDUnknownBlockType)arg1;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (NSUInteger)supportedEscapeOfferMask;
- (void)cancelValidationWithError:(id)arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(NSUInteger)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 validator:(id)arg2;

@end


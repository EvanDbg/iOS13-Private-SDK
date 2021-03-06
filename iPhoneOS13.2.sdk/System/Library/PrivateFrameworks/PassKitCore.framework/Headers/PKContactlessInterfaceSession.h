//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@class NSArray, NSObject, PKFieldProperties, PKPaymentApplication, PKPaymentPass, PKTransitAppletHistory;
@protocol OS_dispatch_queue, PKContactlessInterfaceSessionDelegate;

@interface PKContactlessInterfaceSession : PKPaymentSession
{
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedValueAddedServicePasses;
    NSArray *_activatedHostCards;
    NSArray *_valueAddedServiceTransactions;
    PKFieldProperties *_fieldProperties;
    PKFieldProperties *_fieldPropertiesToLookup;
    NSUInteger _transactionStartTime;
    _Atomic BOOL _fieldPresent;
    BOOL _handlingExpress;
    NSUInteger _expressActivity;
    BOOL _felicaStateChanged;
    NSUInteger _state;
    id <PKContactlessInterfaceSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2;
@property(readonly, nonatomic) PKFieldProperties *fieldProperties; // @synthesize fieldProperties=_fieldProperties;
@property(readonly, nonatomic) NSArray *activatedValueAddedServicePasses; // @synthesize activatedValueAddedServicePasses=_activatedValueAddedServicePasses;
// - (void).cxx_destruct;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
@property(nonatomic) __weak id <PKContactlessInterfaceSessionDelegate> delegate;
@property(readonly, nonatomic) BOOL persistentCardEmulationQueued;
@property(readonly, nonatomic) BOOL fieldPresent;
@property(readonly, nonatomic) NSUInteger state;
@property(readonly, nonatomic) PKTransitAppletHistory *transitAppletState;
@property(readonly, nonatomic) PKPaymentPass *activatedPaymentPass;
@property(readonly, nonatomic) PKPaymentApplication *activatedPaymentApplication;
- (BOOL)paymentApplicationSupportsAutomaticAuthorization:(id)arg1;
- (BOOL)resetPersistentCardEmulation;
- (BOOL)queuePersistentCardEmulation;
- (void)resetExpressState;
- (BOOL)stopCardEmulation;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(BOOL)arg2;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (BOOL)activateValueAddedServicePasses:(id)arg1;
- (BOOL)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;

@end


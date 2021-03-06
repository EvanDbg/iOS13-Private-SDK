//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKDSPContext;

@interface PKDeviceScorer : NSObject
{
    double _deviceScoreTimeout;
    PKDSPContext *_context;
}

+ (BOOL)deviceScoringSupported;
@property(readonly, copy, nonatomic) PKDSPContext *context; // @synthesize context=_context;
@property(nonatomic) double deviceScoreTimeout; // @synthesize deviceScoreTimeout=_deviceScoreTimeout;
// - (void).cxx_destruct;
- (void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1;
- (id)init;

@end


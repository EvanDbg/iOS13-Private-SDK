//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <JetEngine/AMSURLBagContract-Protocol.h>

@protocol AMSMescalBagContract <AMSURLBagContract>
@property(nonatomic, readonly) id mescalSetupURL;
@property(nonatomic, readonly) id mescalCertificateURL;

@optional
@property(nonatomic, readonly) id mescalSignSapResponses;
@property(nonatomic, readonly) id mescalSignSapRequests;
@property(nonatomic, readonly) id mescalSignedActions;
@property(nonatomic, readonly) id mescalPrimingURL;
@end


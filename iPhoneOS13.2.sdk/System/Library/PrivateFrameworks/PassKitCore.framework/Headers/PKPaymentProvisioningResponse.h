//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse
{
    BOOL _willProvisionWithAuthenticationDisabled;
    NSURL *_passURL;
    NSArray *_moreInfoURLs;
    NSString *_ownershipToken;
    NSString *_ownershipTokenIdentifier;
}

@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *ownershipToken; // @synthesize ownershipToken=_ownershipToken;
@property(readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled; // @synthesize willProvisionWithAuthenticationDisabled=_willProvisionWithAuthenticationDisabled;
@property(readonly, copy, nonatomic) NSArray *moreInfoURLs; // @synthesize moreInfoURLs=_moreInfoURLs;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


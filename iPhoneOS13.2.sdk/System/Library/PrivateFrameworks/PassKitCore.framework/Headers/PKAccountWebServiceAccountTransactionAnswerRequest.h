//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSDictionary, NSString, NSURL;

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_transactionIdentifier;
    NSDictionary *_answers;
}

@property(copy, nonatomic) NSDictionary *answers; // @synthesize answers=_answers;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end


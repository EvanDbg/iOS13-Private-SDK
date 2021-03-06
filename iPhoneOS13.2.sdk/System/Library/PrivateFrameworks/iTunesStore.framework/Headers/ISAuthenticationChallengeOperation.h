//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation
{
    ISAuthenticationChallenge *_challenge;
    NSURLCredential *_credential;
}

+ (id)operationWithChallenge:(id)arg1;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
@property(retain) ISAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;
- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;
- (void)run;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (void)dealloc;

@end


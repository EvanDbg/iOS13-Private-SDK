//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationProvider-Protocol.h>

@class NSURL;

@interface ASAuthorizationSingleSignOnProvider : NSObject <ASAuthorizationProvider>
{
    NSURL *_url;
}

+ (id)authorizationProviderWithIdentityProviderURL:(id)arg1;
+ (id)new;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)createRequest;
@property(readonly, nonatomic) BOOL canPerformAuthorization;
- (id)initWithURL:(id)arg1;
- (id)init;

@end


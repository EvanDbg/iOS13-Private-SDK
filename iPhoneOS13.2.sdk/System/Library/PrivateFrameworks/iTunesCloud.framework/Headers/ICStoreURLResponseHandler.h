//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICURLResponseHandler.h>

@interface ICStoreURLResponseHandler : ICURLResponseHandler
{
}

+ (void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2;
- (void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ASPasswordCredentialIdentity, NSArray;

@protocol _ASCredentialProviderExtensionContextProtocol <NSObject>
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(NSArray *)arg1;
@end


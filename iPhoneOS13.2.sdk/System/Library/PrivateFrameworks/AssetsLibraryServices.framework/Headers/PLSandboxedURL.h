//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@interface PLSandboxedURL : NSURL
{
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonPLSandboxedURLInitialize;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(BOOL)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier
{
    NSString *_identifierString;
}

+ (BOOL)supportsSecureCoding;
+ (id)namespace;
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAuthenticated;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifierString:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end


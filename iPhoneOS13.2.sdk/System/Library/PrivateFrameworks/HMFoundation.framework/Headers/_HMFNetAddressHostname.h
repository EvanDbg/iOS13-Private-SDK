//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFNetAddressInternal.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMFNetAddressHostname : HMFNetAddressInternal
{
    NSString *_hostname;
}

+ (id)normalizedHostname:(id)arg1;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
// - (void).cxx_destruct;
- (id)addressString;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithHostname:(id)arg1;
- (id)init;

@end


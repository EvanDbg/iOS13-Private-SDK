//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData;

@interface _PFDQDECallSite : NSObject <NSCopying>
{
    NSData *_addresses;
    NSArray *_symbols;
}

+ (id)currentCallSite;
+ (void)initialize;
// - (void).cxx_destruct;
- (id)backtraceWithPrefix:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAddresses:(id)arg1;

@end


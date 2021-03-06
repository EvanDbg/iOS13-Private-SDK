//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SGSearchableItemIdTriple : NSObject <NSCopying>
{
    NSString *_bundleId;
    NSString *_domainId;
    NSString *_uniqueId;
}

+ (id)searchableItemIdTripleWithBundleId:(id)arg1 domainId:(id)arg2 uniqueId:(id)arg3;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
// - (void).cxx_destruct;
- (id)init;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSearchableItemIdTriple:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 uniqueId:(id)arg3;

@end


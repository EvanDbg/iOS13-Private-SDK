//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding>
{
    NSUInteger _addr;
//     struct malloc_statistics_t _statistics;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSUInteger sizeAllocated;
@property(readonly, nonatomic) NSUInteger sizeInUse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)initWithMallocZone:(struct _malloc_zone_t )arg1;

@end


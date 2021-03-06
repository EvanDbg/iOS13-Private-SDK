//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FISimpleHistogram : NSObject
{
    long long _bucketCount;
   struct {
        long long _field1;
        double _field2;
    } _buckets;
}

- (BOOL)isEqual:(id)arg1;
- (id)descriptionArray;
- (id)debugDescription;
- (long long)numberOfValuesInBucketAtIndex:(long long)arg1;
- (void)addValue:(double)arg1 toBucketAtIndex:(long long)arg2;
- (double)valueForBucketAtIndex:(long long)arg1;
- (long long)bucketCount;
- (void)dealloc;
- (id)initWithNumberOfBuckets:(long long)arg1;

@end


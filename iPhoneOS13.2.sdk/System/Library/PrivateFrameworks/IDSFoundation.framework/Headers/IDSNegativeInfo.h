//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface IDSNegativeInfo : NSObject <NSCopying>
{
    double _time;
    long long _count;
}

@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTime:(double)arg1 count:(long long)arg2;

@end


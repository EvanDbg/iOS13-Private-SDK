//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject
{
    long long _context;
    HKStatistics *_statistics;
}

@property(retain, nonatomic) HKStatistics *statistics; // @synthesize statistics=_statistics;
@property(nonatomic) long long context; // @synthesize context=_context;
- (id)debugDescription;
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;

@end

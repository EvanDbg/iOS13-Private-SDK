//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, PPLocalLocationStore, PPLocation;

@interface PPLocationCache : NSObject
{
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

// - (void).cxx_destruct;
- (void)invalidate;
- (void)_refresh;
- (id)homeOrWorkAddresses;
- (id)locationForWork;
- (id)locationForHome;
- (id)initWithLocationStore:(id)arg1;
- (id)init;

@end


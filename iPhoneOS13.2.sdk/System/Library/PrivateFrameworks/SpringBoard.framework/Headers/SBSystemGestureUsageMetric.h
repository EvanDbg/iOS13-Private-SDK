//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSMutableDictionary;

@interface SBSystemGestureUsageMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    NSMutableDictionary *_typeToMetric;
    NSUInteger _currentLocation;
}

@property(nonatomic) NSUInteger currentLocation; // @synthesize currentLocation=_currentLocation;
// - (void).cxx_destruct;
- (BOOL)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (id)init;

@end


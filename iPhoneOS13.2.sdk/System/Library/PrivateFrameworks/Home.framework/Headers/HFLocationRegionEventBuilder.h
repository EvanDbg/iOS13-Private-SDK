//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFEventBuilder.h>

#import <Home/HFLocationEventBuilder-Protocol.h>

@class CLCircularRegion, NSString;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder>
{
    CLCircularRegion *_region;
}

@property(copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isRegionAtHome:(id)arg1;
- (id)buildNewEventFromCurrentState;
@property(readonly, nonatomic) NSUInteger eventType;
- (id)initWithEvent:(id)arg1;

@end


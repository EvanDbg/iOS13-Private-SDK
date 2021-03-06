//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFProgrammableSwitchItemProvider : HFItemProvider
{
    id /* CDUnknownBlockType */ _filter;
    HMHome *_home;
    NSMutableSet *_programmableSwitchAccessoryItems;
}

@property(retain, nonatomic) NSMutableSet *programmableSwitchAccessoryItems; // @synthesize programmableSwitchAccessoryItems=_programmableSwitchAccessoryItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFNetworkConfigurationGroupItemProvider, HMHome;

@interface HUNetworkConfigurationItemListModule : HFItemModule
{
    HMHome *_home;
    HFNetworkConfigurationGroupItemProvider *_networkConfigurationGroupItemProvider;
}

@property(retain, nonatomic) HFNetworkConfigurationGroupItemProvider *networkConfigurationGroupItemProvider; // @synthesize networkConfigurationGroupItemProvider=_networkConfigurationGroupItemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)networkConfigurationGroupItemForProfile:(id)arg1;
- (BOOL)isItemNetworkConfigurationGroupItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;

@end


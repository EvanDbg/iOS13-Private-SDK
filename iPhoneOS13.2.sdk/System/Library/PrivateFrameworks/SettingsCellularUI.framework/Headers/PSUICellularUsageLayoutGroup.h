//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSCellularManagementCache, PSDataUsageStatisticsCache, PSListController, PSUICallTimeGroup, PSUICarrierSpaceManager, PSUICellularUsageContentSpecifiers, PSUIResetStatisticsGroup, PSUITotalCellularUsageSubgroup;
@protocol PSAppCellularUsageSpecifierDelegate, PSBillingPeriodSelectorSpecifierDelegate;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageLayoutGroup : NSObject
{
    PSCellularManagementCache *_managementCache;
    PSDataUsageStatisticsCache *_statisticsCache;
    PSUICarrierSpaceManager *_carrierSpaceManager;
    PSListController *_hostController;
    id <PSBillingPeriodSelectorSpecifierDelegate> _billingCycleDelegate;
    id <PSAppCellularUsageSpecifierDelegate> _policySpecifierDelegate;
    NSString *_groupSpecifierTitle;
    NSArray *_savedHeaderSpecifiers;
    PSUICellularUsageContentSpecifiers *_savedContentSpecifiers;
    PSUITotalCellularUsageSubgroup *_totalUsageSubgroup;
    PSUICallTimeGroup *_callTimeGroup;
    PSUIResetStatisticsGroup *_resetStatisticsGroup;
}

@property(retain, nonatomic) PSUIResetStatisticsGroup *resetStatisticsGroup; // @synthesize resetStatisticsGroup=_resetStatisticsGroup;
@property(retain, nonatomic) PSUICallTimeGroup *callTimeGroup; // @synthesize callTimeGroup=_callTimeGroup;
@property(retain, nonatomic) PSUITotalCellularUsageSubgroup *totalUsageSubgroup; // @synthesize totalUsageSubgroup=_totalUsageSubgroup;
@property(retain) PSUICellularUsageContentSpecifiers *savedContentSpecifiers; // @synthesize savedContentSpecifiers=_savedContentSpecifiers;
@property(retain) NSArray *savedHeaderSpecifiers; // @synthesize savedHeaderSpecifiers=_savedHeaderSpecifiers;
@property(retain, nonatomic) NSString *groupSpecifierTitle; // @synthesize groupSpecifierTitle=_groupSpecifierTitle;
@property(nonatomic) __weak id <PSAppCellularUsageSpecifierDelegate> policySpecifierDelegate; // @synthesize policySpecifierDelegate=_policySpecifierDelegate;
@property(nonatomic) __weak id <PSBillingPeriodSelectorSpecifierDelegate> billingCycleDelegate; // @synthesize billingCycleDelegate=_billingCycleDelegate;
@property(retain, nonatomic) PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) PSUICarrierSpaceManager *carrierSpaceManager; // @synthesize carrierSpaceManager=_carrierSpaceManager;
@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(retain, nonatomic) PSCellularManagementCache *managementCache; // @synthesize managementCache=_managementCache;
// - (void).cxx_destruct;
- (void)refreshOrderingOfContentSpecifiers;
- (id)contentSpecifiers;
- (id)headerSpecifiers;
- (id)initWithGroupSpecifierTitle:(id)arg1 hostController:(id)arg2 managementCache:(id)arg3 statisticsCache:(id)arg4 carrierSpaceManager:(id)arg5 billingCycleDelegate:(id)arg6 policySpecifierDelegate:(id)arg7;

@end


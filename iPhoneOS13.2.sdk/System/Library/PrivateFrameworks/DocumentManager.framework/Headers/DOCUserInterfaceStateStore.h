//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DOCUserInterfaceStateStore : NSObject
{
    NSMutableDictionary *_uiStateMap;
}

+ (id)sharedStore;
@property(retain) NSMutableDictionary *uiStateMap; // @synthesize uiStateMap=_uiStateMap;
// - (void).cxx_destruct;
- (id)docUserDefaults;
- (id)_sortedInterfaceStateKeys;
- (void)_pruneOldState;
- (void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg1;
- (void)purgeStateForConfiguration:(id)arg1;
- (void)updateInterfaceState:(id)arg1 forConfiguration:(id)arg2;
- (id)mostRecentInterfaceStateForConfiguration:(id)arg1;
- (id)interfaceStateForConfiguration:(id)arg1;
- (id)init;

@end


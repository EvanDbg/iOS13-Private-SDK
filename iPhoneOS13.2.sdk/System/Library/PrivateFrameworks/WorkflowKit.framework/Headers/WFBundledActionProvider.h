//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionProvider.h>

@interface WFBundledActionProvider : WFActionProvider
{
}

- (void)deleteCache;
- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)bundledURL;
- (id)cacheURL;
- (id)cacheDirectoryURL;
- (id)currentVersion;
- (id)createAllAvailableActions;
- (void)createActionsForRequests:(id)arg1;
- (id)availableActionIdentifiers;
- (id)actionDefinitionsWithIdentifiers:(id)arg1;

@end


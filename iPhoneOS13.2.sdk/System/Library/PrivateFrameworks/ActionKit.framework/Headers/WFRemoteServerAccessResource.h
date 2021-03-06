//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource
{
    NSArray *_requestedURLs;
}

+ (Class)perWorkflowStateClass;
+ (BOOL)isSystemResource;
@property(copy, nonatomic) NSArray *requestedURLs; // @synthesize requestedURLs=_requestedURLs;
// - (void).cxx_destruct;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)requestedEntries;
- (NSUInteger)globalLevelStatus;
- (id)icon;
- (id)name;

@end


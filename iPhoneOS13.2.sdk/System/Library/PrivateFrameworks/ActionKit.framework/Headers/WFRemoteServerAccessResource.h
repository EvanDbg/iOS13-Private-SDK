//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource
{
    NSArray *_requestedURLs;
}

+ (Class)perWorkflowStateClass;
+ (_Bool)isSystemResource;
@property(copy, nonatomic) NSArray *requestedURLs; // @synthesize requestedURLs=_requestedURLs;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)requestedEntries;
- (unsigned long long)globalLevelStatus;
- (id)icon;
- (id)name;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFSendEmailAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (NSUInteger)globalLevelStatus;
- (id)associatedAppIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKRequestPerformingProtocol-Protocol.h>

@class CATTaskClient;

@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol>
{
    CATTaskClient *_taskClient;
}

@property(readonly, nonatomic) CATTaskClient *taskClient; // @synthesize taskClient=_taskClient;
// - (void).cxx_destruct;
- (id)operationForRequest:(id)arg1;
- (id)initWithTaskClient:(id)arg1;

@end


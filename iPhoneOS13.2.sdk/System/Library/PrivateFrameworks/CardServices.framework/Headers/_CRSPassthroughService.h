//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardServices/CRSCardServing-Protocol.h>
#import <CardServices/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface _CRSPassthroughService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (BOOL)canSatisfyCardRequest:(id)arg1;
- (NSUInteger)servicePriorityForRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end


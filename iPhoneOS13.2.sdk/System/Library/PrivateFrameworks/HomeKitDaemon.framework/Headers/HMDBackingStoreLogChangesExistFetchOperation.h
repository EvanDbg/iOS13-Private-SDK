//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@interface HMDBackingStoreLogChangesExistFetchOperation : HMDBackingStoreOperation
{
    id /* CDUnknownBlockType */ _fetchBlock;
    long long _maskValue;
    long long _compareValue;
}

@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchBlock; // @synthesize fetchBlock=_fetchBlock;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithNeedsPushTo:(NSUInteger)arg1 result:(CDUnknownBlockType)arg2;

@end


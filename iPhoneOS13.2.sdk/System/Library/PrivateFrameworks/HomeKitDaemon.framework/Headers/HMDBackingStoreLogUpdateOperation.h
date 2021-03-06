//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSArray;

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation
{
    NSArray *_values;
    long long _maskValue;
    long long _setValue;
}

@property(nonatomic) long long setValue; // @synthesize setValue=_setValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithRowIDs:(id)arg1 failedPushedTo:(NSUInteger)arg2;
- (id)initWithRowIDs:(id)arg1 successfullyPushedTo:(NSUInteger)arg2;
- (id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3;

@end


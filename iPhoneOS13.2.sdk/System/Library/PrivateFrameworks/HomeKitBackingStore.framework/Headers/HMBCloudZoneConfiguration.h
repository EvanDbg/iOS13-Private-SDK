//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMBCloudZoneConfiguration : HMFObject
{
    _Bool _shouldRebuildOnManateeKeyLoss;
    _Bool _shouldSuppressDelegateCallbacksOnInitialFetch;
}

@property _Bool shouldSuppressDelegateCallbacksOnInitialFetch; // @synthesize shouldSuppressDelegateCallbacksOnInitialFetch=_shouldSuppressDelegateCallbacksOnInitialFetch;
@property _Bool shouldRebuildOnManateeKeyLoss; // @synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;

@end

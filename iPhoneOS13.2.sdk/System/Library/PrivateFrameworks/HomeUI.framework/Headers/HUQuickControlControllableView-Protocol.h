//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUIntrinsicSizeDescriptor, HUQuickControlViewProfile;

@protocol HUQuickControlControllableView <NSObject>
@property(copy, nonatomic) HUQuickControlViewProfile *profile;
@property(retain, nonatomic) id value;
- (HUIntrinsicSizeDescriptor *)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg1;
- (id)initWithProfile:(HUQuickControlViewProfile *)arg1;

@optional
@property(nonatomic) NSUInteger reachabilityState;
@property(retain, nonatomic) id secondaryValue;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject
{
    NSUInteger _type;
    HMDevice *_customDevice;
}

+ (id)customDeviceWithHMDevice:(id)arg1;
+ (id)currentDevice;
+ (id)FMFDevice;
@property(readonly, nonatomic) HMDevice *customDevice; // @synthesize customDevice=_customDevice;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithType:(NSUInteger)arg1 customDevice:(id)arg2;

@end


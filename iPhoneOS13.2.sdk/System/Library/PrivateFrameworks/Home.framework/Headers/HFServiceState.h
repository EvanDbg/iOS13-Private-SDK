//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFServiceState : NSObject
{
}

+ (id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2;
+ (Class)stateClassForServiceDescriptor:(id)arg1;
+ (id)optionalCharacteristicTypes;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
@property(readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
- (id)initWithBatchReadResponse:(id)arg1;

@end


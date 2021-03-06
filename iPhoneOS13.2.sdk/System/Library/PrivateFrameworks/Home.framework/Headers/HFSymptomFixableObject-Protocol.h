//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessoryVendor-Protocol.h>
#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFSymptomsHandlerVendor-Protocol.h>

@class HMSymptomsHandler, NSSet, NSUUID;

@protocol HFSymptomFixableObject <NSObject, HFSymptomsHandlerVendor, HFAccessoryVendor, HFHomeKitObject>
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@end


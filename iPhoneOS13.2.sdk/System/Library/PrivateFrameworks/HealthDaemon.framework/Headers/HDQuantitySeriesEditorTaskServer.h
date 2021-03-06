//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKQuantitySeriesSampleEditorTaskServerInterface-Protocol.h>

@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface>
{
    HKQuantitySample *_quantitySample;
}

+ (BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id )arg3;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
// - (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_commitRemovedDatums:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end


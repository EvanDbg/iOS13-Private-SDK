//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSError, RTScenarioTrigger, RTVisit;

@protocol RTFrameworkProtocol <NSObject>
- (void)onVehicleEvents:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onLeechedLowConfidenceVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onLeechedVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
@end


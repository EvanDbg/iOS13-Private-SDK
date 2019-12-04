//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CLLocation, MNLocation, NSDate, NSError;

@protocol MNLocationRecorder 
- (void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(NSDate *)arg4;
- (void)recordVehicleHeading:(double)arg1 timestamp:(NSDate *)arg2;
- (void)recordVehicleSpeed:(double)arg1 timestamp:(NSDate *)arg2;
- (void)recordInitialCourse:(double)arg1;
- (void)recordLocationUpdateResume;
- (void)recordLocationUpdatePause;
- (void)recordError:(NSError *)arg1;
- (void)recordLocation:(MNLocation *)arg1 rawLocation:(MNLocation *)arg2;
- (void)recordLocation:(CLLocation *)arg1 correctedLocation:(CLLocation *)arg2;
@end

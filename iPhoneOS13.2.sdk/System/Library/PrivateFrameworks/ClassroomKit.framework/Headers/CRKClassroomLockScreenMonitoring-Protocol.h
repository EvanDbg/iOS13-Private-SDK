//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol CRKClassroomLockScreenMonitoring <NSObject>
+ (id)sharedMonitor;
@property(readonly, nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(NSString *)arg1 passcode:(NSString *)arg2;
@end


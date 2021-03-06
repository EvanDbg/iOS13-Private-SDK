//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKFeatureDataStoreProtocol-Protocol.h>

@interface CRKFeatureDataStore_iOS : NSObject <CRKFeatureDataStoreProtocol>
{
}

+ (NSUInteger)crkBoolTypeFromMCBoolType:(int)arg1;
+ (id)sharedDataStore;
@property(nonatomic, getter=isClassroomInstructorRoleEnabled) BOOL classroomInstructorRoleEnabled;
@property(nonatomic, getter=isClassroomStudentRoleEnabled) BOOL classroomStudentRoleEnabled;
@property(readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) BOOL classroomRequestPermissionToLeaveClassesForced;
@property(readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) BOOL classroomAutomaticClassJoiningForced;
@property(readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) BOOL classroomUnpromptedScreenObservationForced;
- (void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4;
- (NSUInteger)effectiveValueForSetting:(id)arg1 configurationUUID:(id)arg2 outAsk:(BOOL )arg3;
- (NSUInteger)boolRestrictionForFeature:(id)arg1;
- (void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3;
- (NSUInteger)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL )arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSNumber, NSString;

@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext
{
    NSString *_childName;
    NSNumber *_childDSID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *childDSID; // @synthesize childDSID=_childDSID;
@property(copy, nonatomic) NSString *childName; // @synthesize childName=_childName;
// - (void).cxx_destruct;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(CDUnknownBlockType)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 familyMember:(id)arg2 requestedResourceName:(id)arg3;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 childDSID:(id)arg3 requestedResourceName:(id)arg4;

@end


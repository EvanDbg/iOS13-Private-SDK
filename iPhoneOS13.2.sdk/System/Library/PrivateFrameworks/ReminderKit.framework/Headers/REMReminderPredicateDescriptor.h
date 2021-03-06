//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, REMObjectID;

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding>
{
    BOOL _completed;
    long long _type;
    REMObjectID *_listID;
    REMObjectID *_parentReminderID;
    NSArray *_objectIDs;
    NSDate *_startingDueDate;
    NSDate *_endingDueDate;
    NSArray *_descriptors;
}

+ (BOOL)supportsSecureCoding;
+ (id)predicateDescriptorForRemindersWithCompleted:(BOOL)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateBetween:(id)arg1 and:(id)arg2;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)arg1;
+ (id)predicateDescriptorForRemindersWithObjectIDs:(id)arg1;
+ (id)predicateDescriptorForRemindersWithParentReminderID:(id)arg1;
+ (id)predicateDescriptorForRemindersWithListID:(id)arg1;
+ (id)orPredicateDescriptorWithDescriptors:(id)arg1;
+ (id)andPredicateDescriptorWithDescriptors:(id)arg1;
@property(retain, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSDate *endingDueDate; // @synthesize endingDueDate=_endingDueDate;
@property(retain, nonatomic) NSDate *startingDueDate; // @synthesize startingDueDate=_startingDueDate;
@property(retain, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
@property(retain, nonatomic) REMObjectID *parentReminderID; // @synthesize parentReminderID=_parentReminderID;
@property(retain, nonatomic) REMObjectID *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;

@end


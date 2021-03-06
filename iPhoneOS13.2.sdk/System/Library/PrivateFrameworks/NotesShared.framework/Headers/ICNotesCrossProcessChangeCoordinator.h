//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject
{
    NSPersistentStoreCoordinator *_sourceCoordinator;
    NSManagedObjectContext *_destinationContext;
}

@property(retain, nonatomic) NSManagedObjectContext *destinationContext; // @synthesize destinationContext=_destinationContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator; // @synthesize sourceCoordinator=_sourceCoordinator;
// - (void).cxx_destruct;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void)postAccountDidChangeNotification;
- (void)registerForAccountNotifications;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)postCrossProcessNotificationName:(id)arg1;
- (void)dealloc;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BYBuddyDaemonMigrationSourceClient;

@interface BYMigrationSourceController : NSObject
{
    BYBuddyDaemonMigrationSourceClient *_migrationSourceClient;
}

@property(retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient; // @synthesize migrationSourceClient=_migrationSourceClient;
- (void)setFileTransferSession:(id)arg1;
- (void)launchSetupForMigration:(id)arg1;
- (id)init;

@end

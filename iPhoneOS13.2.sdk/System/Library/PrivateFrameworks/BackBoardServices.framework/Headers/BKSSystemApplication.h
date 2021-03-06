//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSSystemApplicationClientDelegate-Protocol.h>

@class BKSSystemApplicationClient;
@protocol BKSSystemApplicationDelegate, OS_dispatch_queue;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BKSSystemApplicationClient *_client;
    id <BKSSystemApplicationDelegate> _delegate;
    BOOL _waitForDataMigration;
    double _systemIdleSleepInterval;
}

@property(nonatomic) double systemIdleSleepInterval; // @synthesize systemIdleSleepInterval=_systemIdleSleepInterval;
@property(nonatomic) BOOL waitForDataMigration; // @synthesize waitForDataMigration=_waitForDataMigration;
@property(nonatomic) __weak id <BKSSystemApplicationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)clientIsAliveForWatchdog:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)finishBooting;
- (void)start;
- (void)bootstrap;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end


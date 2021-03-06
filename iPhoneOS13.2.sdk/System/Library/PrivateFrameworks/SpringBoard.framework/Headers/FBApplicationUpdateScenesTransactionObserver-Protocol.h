//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class FBApplicationProcess, FBApplicationUpdateScenesTransaction, FBScene;

@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>

@optional
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willUpdateScene:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didCreateScene:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didLaunchProcess:(FBApplicationProcess *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willLaunchProcess:(FBApplicationProcess *)arg2;
@end


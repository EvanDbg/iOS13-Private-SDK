//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBLockScreenActionProvider-Protocol.h>

@class NSString, SBFLockScreenActionContext;

@interface CSSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider>
{
    SBFLockScreenActionContext *_lockScreenActionContext;
}

@property(retain, nonatomic) SBFLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
- (void)invalidateLockScreenActionContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

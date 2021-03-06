//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAlertItemPresenter-Protocol.h>
#import <SpringBoard/SBLockScreenActionProvider-Protocol.h>

@class SBSharedModalAlertItemPresenter;

@interface SBLockedModalAlertItemPresenter : NSObject <SBAlertItemPresenter, SBLockScreenActionProvider>
{
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;
}

// - (void).cxx_destruct;
- (id)lockScreenActionContext;
- (void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)canPresentMultipleAlertItemsSimultaneously;
- (BOOL)presentsAlertItemsModally;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1;

@end


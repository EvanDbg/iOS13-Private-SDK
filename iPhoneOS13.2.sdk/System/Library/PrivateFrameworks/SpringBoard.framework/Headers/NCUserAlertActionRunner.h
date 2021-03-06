//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationActionRunner-Protocol.h>

@class SBAlertItem;

@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>
{
    BOOL _shouldForwardAction;
    SBAlertItem *_alertItem;
}

@property(readonly, nonatomic) __weak SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(nonatomic) BOOL shouldForwardAction; // @synthesize shouldForwardAction=_shouldForwardAction;
// - (void).cxx_destruct;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithSBAlertItem:(id)arg1;

@end


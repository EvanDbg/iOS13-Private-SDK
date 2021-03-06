//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject
{
    id /* CDUnknownBlockType */ _sessionStartCallback;
    HMFTimer *_handleOpenRequestResponseTimer;
    HMFTimer *_sendCloseEventTimer;
}

@property(retain) HMFTimer *sendCloseEventTimer; // @synthesize sendCloseEventTimer=_sendCloseEventTimer;
@property(retain) HMFTimer *handleOpenRequestResponseTimer; // @synthesize handleOpenRequestResponseTimer=_handleOpenRequestResponseTimer;
@property(readonly) id /* CDUnknownBlockType */ sessionStartCallback; // @synthesize sessionStartCallback=_sessionStartCallback;
// - (void).cxx_destruct;
@property(readonly) BOOL shouldCloseSessionWithTimeoutReason;
- (id)initWithSessionStartCallback:(CDUnknownBlockType)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3;

@end


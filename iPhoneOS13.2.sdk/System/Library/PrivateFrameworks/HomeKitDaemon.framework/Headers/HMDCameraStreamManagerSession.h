//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMFMessage, HMFTimer, NSNumber, NSString;
@protocol HMDCameraStreamControlManagerProtocol;

@interface HMDCameraStreamManagerSession : HMFObject
{
    id <HMDCameraStreamControlManagerProtocol> _streamControlManager;
    HMDCameraStreamSessionID *_sessionID;
    NSString *_destinationID;
    HMFTimer *_streamSetupTimer;
    NSString *_streamShowingAppIdentifier;
    NSNumber *_slotIdentifier;
    HMFMessage *_currentMessage;
}

@property(retain, nonatomic) HMFMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(retain, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property(readonly, nonatomic) NSString *streamShowingAppIdentifier; // @synthesize streamShowingAppIdentifier=_streamShowingAppIdentifier;
@property(readonly, nonatomic) HMFTimer *streamSetupTimer; // @synthesize streamSetupTimer=_streamSetupTimer;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) id <HMDCameraStreamControlManagerProtocol> streamControlManager; // @synthesize streamControlManager=_streamControlManager;
// - (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamShowingAppIdentifier:(id)arg3 controlManager:(id)arg4 setupWaitPeriod:(NSUInteger)arg5 error:(id )arg6;

@end


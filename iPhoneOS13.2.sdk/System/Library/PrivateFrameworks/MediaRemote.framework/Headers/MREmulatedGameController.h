//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController, MRGameControllerDaemonProxy;
@protocol MREmulatedGameControllerDelegate;

@interface MREmulatedGameController : NSObject
{
    MRGameControllerDaemonProxy *_remote;
    int _profile;
    double _buttonAUpDelay;
    id <MREmulatedGameControllerDelegate> _delegate;
    GCController *_controller;
}

@property(retain, nonatomic) GCController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <MREmulatedGameControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double buttonAUpDelay; // @synthesize buttonAUpDelay=_buttonAUpDelay;
@property(readonly, nonatomic) int profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)_handleGameControllerDidChange:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end


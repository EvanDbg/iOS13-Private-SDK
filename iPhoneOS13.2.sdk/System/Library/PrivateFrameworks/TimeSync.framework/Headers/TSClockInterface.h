//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/TSClockClient-Protocol.h>

@class TSClock;
@protocol OS_dispatch_queue;

@interface TSClockInterface : NSObject <TSClockClient>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    /* void * CDUnknownFunctionPointerType _lockStateCallback */;
    void _lockStateRefcon;
    /* void * CDUnknownFunctionPointerType _masterChangeCallback */;
    void _masterChangeRefcon;
    /* void * CDUnknownFunctionPointerType _gptpGrandmasterCallback */;
    void _gptpGrandmasterRefcon;
    /* void * CDUnknownFunctionPointerType _gptpGrandmasterPortCallback */;
    void _gptpGrandmasterPortRefcon;
    /* void * CDUnknownFunctionPointerType _gptpLocalPortCallback */;
    void _gptpLocalPortRefcon;
    TSClock *_clock;
}

@property(retain, nonatomic) TSClock *clock; // @synthesize clock=_clock;
- (void)dealloc;
- (void)didChangeLocalPortWithGrandmasterID:(NSUInteger)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(NSUInteger)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)setgPTPLocalPortNotificationCallback:(/* void * CDUnknownFunctionPointerType */)arg1 refcon:(void )arg2;
- (void)setgPTPGrandmasterIDAndPortNotificationCallback:(/* void * CDUnknownFunctionPointerType */)arg1 refcon:(void )arg2;
- (void)setgPTPGrandmasterNotificationCallback:(/* void * CDUnknownFunctionPointerType */)arg1 refcon:(void )arg2;
- (void)setMasterChangeNotificationCallback:(/* void * CDUnknownFunctionPointerType */)arg1 refcon:(void )arg2;
- (void)setLockStateNotificationCallback:(/* void * CDUnknownFunctionPointerType */)arg1 refcon:(void )arg2;
- (id)initWithClockIdentifier:(NSUInteger)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMAVDaemonListener : NSObject
{
    NSMutableArray *_handlers;
    BOOL _setupComplete;
    BOOL _postedSetupComplete;
}

@property(readonly, nonatomic) BOOL isSetupComplete; // @synthesize isSetupComplete=_setupComplete;
// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)_noteDisconnected;
- (id)init;

@end


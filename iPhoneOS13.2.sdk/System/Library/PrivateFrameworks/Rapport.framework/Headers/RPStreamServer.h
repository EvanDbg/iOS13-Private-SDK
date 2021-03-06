//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPStreamServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id _selfRef;
    NSMutableDictionary *_streamSessions;
    unsigned int _streamFlags;
    id /* CDUnknownBlockType */ _invalidationHandler;
    id <RPMessageable> _messenger;
    id /* CDUnknownBlockType */ _streamAcceptHandler;
    id /* CDUnknownBlockType */ _streamPrepareHandlerEx;
    id /* CDUnknownBlockType */ _streamPrepareHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ streamPrepareHandler; // @synthesize streamPrepareHandler=_streamPrepareHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ streamPrepareHandlerEx; // @synthesize streamPrepareHandlerEx=_streamPrepareHandlerEx;
@property(nonatomic) unsigned int streamFlags; // @synthesize streamFlags=_streamFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ streamAcceptHandler; // @synthesize streamAcceptHandler=_streamAcceptHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
// - (void).cxx_destruct;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end


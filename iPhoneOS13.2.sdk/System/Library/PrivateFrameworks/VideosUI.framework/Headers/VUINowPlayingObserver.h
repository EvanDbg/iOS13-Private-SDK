//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUINowPlayingObservation;
@protocol OS_dispatch_queue, VUINowPlayingObserverDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObserver : NSObject
{
    BOOL _observing;
    VUINowPlayingObservation *_latestObservation;
    id <VUINowPlayingObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSUInteger _updateObservationContext;
}

@property(nonatomic) NSUInteger updateObservationContext; // @synthesize updateObservationContext=_updateObservationContext;
@property(nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(nonatomic) __weak id <VUINowPlayingObserverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_notifyDelegateLatestObservationDidChange:(id)arg1;
- (void)_updateLatestObservationWithBundleIdentifier:(id)arg1 playbackState:(unsigned int)arg2;
- (void)_updateLatestObservation;
- (void)_stopObserving;
- (void)_startObserving;
@property(retain, nonatomic) VUINowPlayingObservation *latestObservation; // @synthesize latestObservation=_latestObservation;
- (void)_handleNowPlayingAppIsPlayingDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingAppDidChangeNotification:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (id)init;

@end


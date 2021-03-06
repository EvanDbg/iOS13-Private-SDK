//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackProgressObserverFactory-Protocol.h>

@protocol SVVideoDurationObserverFactory, SVVideoPeriodicTimeObserverFactory;

@interface SVVideoPlaybackProgressObserverFactory : NSObject <SVVideoPlaybackProgressObserverFactory>
{
    id <SVVideoPeriodicTimeObserverFactory> _periodicTimeObserverFactory;
    id <SVVideoDurationObserverFactory> _durationObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoDurationObserverFactory> durationObserverFactory; // @synthesize durationObserverFactory=_durationObserverFactory;
@property(readonly, nonatomic) id <SVVideoPeriodicTimeObserverFactory> periodicTimeObserverFactory; // @synthesize periodicTimeObserverFactory=_periodicTimeObserverFactory;
// - (void).cxx_destruct;
- (id)createPlaybackProgressObserverForVideo:(id)arg1;
- (id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

__attribute__((visibility("hidden")))
@interface ISLivePhotoSeekBehavior : ISBehavior
{
    BOOL _isSeeking;
    BOOL _needsSeek;
    BOOL _needsTransitionToVideo;
    id /* CDUnknownBlockType */ _seekCompletionHandler;
//     CDStruct_1b6d18a9 _seekTime;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ seekCompletionHandler; // @synthesize seekCompletionHandler=_seekCompletionHandler;
// @property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
// - (void).cxx_destruct;
- (long long)behaviorType;
- (void)_handleDidSeekToSeekTime:(BOOL)arg1;
- (void)_callSeekCompletionHandler:(BOOL)arg1;
- (void)_seekIfNeeded;
- (void)activeDidChange;
// - (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2;

@end


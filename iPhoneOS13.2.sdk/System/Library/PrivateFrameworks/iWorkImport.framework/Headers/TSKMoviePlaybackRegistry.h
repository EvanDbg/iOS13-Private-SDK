//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSUMutablePointerSet;

__attribute__((visibility("hidden")))
@interface TSKMoviePlaybackRegistry : NSObject
{
    TSUMutablePointerSet *_playingObjectPointerSet;
    NSString *_savedAudioCategory;
    NSString *_savedAudioMode;
    NSUInteger _savedAudioCategoryOptions;
}

+ (id)sharedMoviePlaybackRegistry;
// - (void).cxx_destruct;
- (void)objectDidEndMoviePlayback:(id)arg1;
- (void)objectWillBeginMoviePlayback:(id)arg1;
- (id)init;

@end


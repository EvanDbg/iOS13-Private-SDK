//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class CLLocation;

@protocol MapsSuggestionsPreloadableSource <MapsSuggestionsSource>
- (_Bool)suggestionsEntriesAtLocation:(CLLocation *)arg1 period:(struct NSDateInterval *)arg2 handler:(void (^)(struct NSArray *, NSError *))arg3;
@end

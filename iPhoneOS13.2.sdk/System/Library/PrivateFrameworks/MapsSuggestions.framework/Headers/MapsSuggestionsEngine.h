//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOAutomobileOptions, MapsSuggestionsManager, MapsSuggestionsShortcutManager, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject>
{
    MapsSuggestionsManager *_entryManager;
    MapsSuggestionsShortcutManager *_shortcutManager;
    NSObject<OS_dispatch_queue> *_optionsSerialQueue;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
}

+ (id)defaultCachePath;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
// - (void).cxx_destruct;
- (void)reset;
- (void)startDemoMode;
- (void)setFakeSource:(id)arg1;
- (id)fakeSource;
- (id)strategy;
- (id)manager;
- (id)routine;
- (id)shortcutManager;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)loadStorageFromFile:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (BOOL)loadStorageFromFile:(id)arg1;
- (BOOL)saveStorageToFile:(id)arg1;
- (void)hintRefreshOfType:(long long)arg1;
- (void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (void)addAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (NSArray *)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(NSUInteger)arg3 transportType:(int)arg4;
- (BOOL)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(NSUInteger)arg3 transportType:(int)arg4 callback:(CDUnknownBlockType)arg5 onQueue:(id)arg6;
- (NSArray *)topSuggestionsForSink:(id)arg1 count:(NSUInteger)arg2 transportType:(int)arg3;
- (BOOL)topSuggestionsForSink:(id)arg1 count:(NSUInteger)arg2 transportType:(int)arg3 callback:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (BOOL)detachSink:(id)arg1;
- (void)attachSink:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initWithEntryManager:(id)arg1 shortcutManager:(id)arg2;

@end


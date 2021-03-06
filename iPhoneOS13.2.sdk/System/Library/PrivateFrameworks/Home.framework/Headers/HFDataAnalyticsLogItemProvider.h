//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>


@class NAFuture, NSMapTable, NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableSet *_logItems;
    NSMapTable *_logEntryUniqueIdentifierToLogItemMap;
    NAFuture *_logFetchFuture;
}

+ (BOOL)prefersNonBlockingReloads;
@property(retain, nonatomic) NAFuture *logFetchFuture; // @synthesize logFetchFuture=_logFetchFuture;
@property(readonly, nonatomic) NSMapTable *logEntryUniqueIdentifierToLogItemMap; // @synthesize logEntryUniqueIdentifierToLogItemMap=_logEntryUniqueIdentifierToLogItemMap;
@property(readonly, nonatomic) NSMutableSet *logItems; // @synthesize logItems=_logItems;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;

@end


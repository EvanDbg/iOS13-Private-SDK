//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioSyncRequest.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest : RadioSyncRequest
{
    NSDictionary *_matchDictionary;
    long long _persistentID;
    NSMutableDictionary *_stationDictionary;
    NSString *_stationHashForSkipHistoryCopying;
}

// - (void).cxx_destruct;
- (void)startWithAddStationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)matchDictionary;
- (id)changeList;
- (id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2;
- (id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2;
- (id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2;
- (id)initWithStationDictionary:(id)arg1;
- (id)initWithStation:(id)arg1;
- (id)init;

@end


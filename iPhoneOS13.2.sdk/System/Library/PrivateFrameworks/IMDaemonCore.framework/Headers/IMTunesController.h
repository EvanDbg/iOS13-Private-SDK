//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IMTunesController : NSObject
{
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableDictionary *_playerInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

+ (id)sharedTunesController;
@property(nonatomic) NSMutableDictionary *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(readonly, nonatomic) NSString *messageFormat;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_playerChangedNotification:(id)arg1;
- (void)_playerChanged:(id)arg1;
- (void)_updateMessage;
@property(readonly, nonatomic) BOOL isEnabled;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelGenericObject, MPModelPlayEvent, NSData, NSNumber, NSString;
@protocol MPCReportingIdentityPropertiesLoading;

@interface MPCReportingPlaybackEventSource : NSObject
{
    _Bool _shouldReportPlayEventsToStore;
    id <MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
    long long _equivalencySourceAdamID;
    double _eventDuration;
    unsigned long long _overrideItemType;
    NSString *_lyricsID;
    MPModelGenericObject *_itemGenericObject;
    NSNumber *_privateListeningEnabled;
    NSNumber *_siriInitiated;
    NSData *_trackInfo;
    MPModelPlayEvent *_modelPlayEvent;
    NSString *_featureName;
    NSData *_jingleTimedMetadata;
    NSData *_recommendationData;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}

@property(copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property(copy, nonatomic) NSData *jingleTimedMetadata; // @synthesize jingleTimedMetadata=_jingleTimedMetadata;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property(copy, nonatomic) NSData *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) _Bool shouldReportPlayEventsToStore; // @synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore;
@property(copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @synthesize siriInitiated=_siriInitiated;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property(retain, nonatomic) MPModelGenericObject *itemGenericObject; // @synthesize itemGenericObject=_itemGenericObject;
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(nonatomic) unsigned long long overrideItemType; // @synthesize overrideItemType=_overrideItemType;
@property(nonatomic) double eventDuration; // @synthesize eventDuration=_eventDuration;
@property(nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property(retain, nonatomic) id <MPCReportingIdentityPropertiesLoading> identityPropertiesLoader; // @synthesize identityPropertiesLoader=_identityPropertiesLoader;
- (id)initWithAVItem:(id)arg1;
- (id)init;

@end

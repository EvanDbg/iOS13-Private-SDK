//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVMediaInfo.h>

@class IKAppContext, TVPPlaylist;

__attribute__((visibility("hidden")))
@interface VUIMediaInfo : TVMediaInfo
{
    BOOL _hasProgress;
    BOOL _showsSecondaryVideoView;
    BOOL _automaticPlaybackStart;
    BOOL _automaticPlaybackStop;
    BOOL _restrictionsAlreadyUnlocked;
    BOOL _shouldDelayLoadingImage;
    BOOL _allowsPictureInPicture;
    BOOL _overridesStartTimeWithResumeTime;
    TVPPlaylist *_tvpPlaylist;
    NSUInteger _playbackStartReason;
    NSUInteger _playbackStopReason;
    NSUInteger _playbackContext;
    IKAppContext *_appContext;
    double _playbackDelayInterval;
}

@property(nonatomic) BOOL overridesStartTimeWithResumeTime; // @synthesize overridesStartTimeWithResumeTime=_overridesStartTimeWithResumeTime;
@property(nonatomic) double playbackDelayInterval; // @synthesize playbackDelayInterval=_playbackDelayInterval;
@property(nonatomic) BOOL allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(nonatomic) NSUInteger playbackContext; // @synthesize playbackContext=_playbackContext;
@property(nonatomic) BOOL shouldDelayLoadingImage; // @synthesize shouldDelayLoadingImage=_shouldDelayLoadingImage;
@property(nonatomic) BOOL restrictionsAlreadyUnlocked; // @synthesize restrictionsAlreadyUnlocked=_restrictionsAlreadyUnlocked;
@property(nonatomic) NSUInteger playbackStopReason; // @synthesize playbackStopReason=_playbackStopReason;
@property(nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop; // @synthesize automaticPlaybackStop=_automaticPlaybackStop;
@property(nonatomic) NSUInteger playbackStartReason; // @synthesize playbackStartReason=_playbackStartReason;
@property(nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart; // @synthesize automaticPlaybackStart=_automaticPlaybackStart;
@property(nonatomic) BOOL showsSecondaryVideoView; // @synthesize showsSecondaryVideoView=_showsSecondaryVideoView;
@property(retain, nonatomic) TVPPlaylist *tvpPlaylist; // @synthesize tvpPlaylist=_tvpPlaylist;
@property(readonly, nonatomic) BOOL hasProgress; // @synthesize hasProgress=_hasProgress;
// - (void).cxx_destruct;
- (id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2;
- (id)_tvpMediaTypeFromPlayableType:(id)arg1 isRental:(BOOL)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2;
- (id)_auxMediaItemFromVideosPlayable:(id)arg1;
- (id)_storeMediaItemsFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;
- (void)_updatePlaybackStartReason;
- (void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPlaybackContext:(NSUInteger)arg1 videosPlayables:(id)arg2 imageProxies:(id)arg3 storeDictionary:(id)arg4;
- (id)init;
- (long long)_videoDynamimcRangeFromMPColorCapability:(long long)arg1;
- (long long)_videoResolutionFromMPVideoQuality:(long long)arg1;
- (id)_storeMediaItemFromMPMediaItem:(id)arg1;
- (id)_playlistFromMPMediaItems:(id)arg1;
- (id)initWithPlaybackContext:(NSUInteger)arg1 mpMediaItems:(id)arg2;
- (id)_playlistForVUIMediaItems:(id)arg1;
- (id)initWithPlaybackContext:(NSUInteger)arg1 vuiMediaItems:(id)arg2;
- (id)initWithBackgroundImageDictionary:(id)arg1;

@end


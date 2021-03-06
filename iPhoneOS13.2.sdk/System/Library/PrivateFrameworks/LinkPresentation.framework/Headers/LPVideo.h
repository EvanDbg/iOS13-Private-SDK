//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/AVAssetResourceLoaderDelegate-Protocol.h>
#import <LinkPresentation/LPAsynchronousResource-Protocol.h>

@class AVAsset, AVURLAsset, LPVideoProperties, NSData, NSItemProvider, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding>
{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    NSItemProvider *_itemProvider;
    LPVideo *_videoLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    CGSize _intrinsicSize;
    AVURLAsset *_asset;
    id _mediaServicesResetNotificationHandler;
    LPVideoProperties *_properties;
    NSURL *_streamingURL;
    NSURL *_youTubeURL;
    NSString *_MIMEType;
    NSURL *_fileURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, retain, nonatomic) NSURL *youTubeURL; // @synthesize youTubeURL=_youTubeURL;
@property(readonly, retain, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;
// - (void).cxx_destruct;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)_uninstallMediaServicesResetNotificationHandler;
- (void)_installMediaServicesResetNotificationHandler;
@property(readonly, nonatomic) AVAsset *_asset;
@property(readonly, retain, nonatomic) NSItemProvider *_itemProvider;
- (void)loadAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)needsAsynchronousLoad;
@property(readonly, nonatomic) CGSize _intrinsicSize;
- (BOOL)_shouldEncodeData;
- (void)_mapDataFromFileURL;
@property(readonly, copy, nonatomic) LPVideoProperties *properties;
@property(readonly, nonatomic) BOOL hasAudio;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) NSUInteger _encodedSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithItemProvider:(id)arg1 properties:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1 properties:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initWithStreamingURL:(id)arg1 hasAudio:(BOOL)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3;
- (id)_initWithVideo:(id)arg1;
- (id)init;

@end


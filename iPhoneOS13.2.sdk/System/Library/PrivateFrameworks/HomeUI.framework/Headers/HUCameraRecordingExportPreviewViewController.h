//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class AVPlayerLooper, AVQueuePlayer, HMCameraClip, HMCameraClipFetchVideoAssetContextOperation, HMCameraProfile, HUCameraRecordingPlayerView, NSOperationQueue, NSURL, UIActivityIndicatorView, UIButton, UILabel, UITextView;

@interface HUCameraRecordingExportPreviewViewController : UIViewController <UITextViewDelegate>
{
    BOOL _hasVideoPreview;
    HMCameraClip *_cameraClip;
    HMCameraProfile *_cameraProfile;
    NSURL *_exportURL;
    HMCameraClipFetchVideoAssetContextOperation *_videoDownloadOperation;
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_looper;
    HUCameraRecordingPlayerView *_playerView;
    UILabel *_descriptionLabel;
    UIButton *_submitButton;
    UITextView *_learnMoreTextView;
    id /* CDUnknownBlockType */ _completionHandler;
    id _queuePlayerObserver;
    UIActivityIndicatorView *_loadingIndicatorView;
    NSOperationQueue *_backgroundSessionQueue;
}

@property(retain, nonatomic) NSOperationQueue *backgroundSessionQueue; // @synthesize backgroundSessionQueue=_backgroundSessionQueue;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) id queuePlayerObserver; // @synthesize queuePlayerObserver=_queuePlayerObserver;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UITextView *learnMoreTextView; // @synthesize learnMoreTextView=_learnMoreTextView;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) HUCameraRecordingPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
@property(nonatomic) __weak AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(nonatomic) BOOL hasVideoPreview; // @synthesize hasVideoPreview=_hasVideoPreview;
@property(retain, nonatomic) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation; // @synthesize videoDownloadOperation=_videoDownloadOperation;
@property(retain, nonatomic) NSURL *exportURL; // @synthesize exportURL=_exportURL;
@property(nonatomic) __weak HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(nonatomic) __weak HMCameraClip *cameraClip; // @synthesize cameraClip=_cameraClip;
// - (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange *)arg3 interaction:(long long)arg4;
- (void)prepareRecordingForExport;
- (void)_stripAndTruncateRecording;
- (void)_displayFailureToSubmitAlert;
- (void)cancelSubmission;
- (void)submitCurrentClip;
- (void)didDismissPrivacyViewController;
- (void)showPrivacyInformation;
- (void)_addConstraints;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)playVideoFile;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_loadLoadingInterface;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_loadPreviewInterface;
- (void)viewDidLoad;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


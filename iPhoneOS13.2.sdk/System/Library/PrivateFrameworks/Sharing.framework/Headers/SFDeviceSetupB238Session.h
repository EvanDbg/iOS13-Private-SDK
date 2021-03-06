//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/AVAudioPlayerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, AVAudioPlayer, AVAudioSession, HMAccessory, HMHome, NSArray, NSDictionary, NSMutableArray, NSSet, NSString, RPCompanionLinkClient, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, SFSession, SSAccount, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate>
{
    BOOL _activateCalled;
    RPCompanionLinkClient *_companionLinkClient;
    BOOL _invalidateCalled;
    NSUInteger _startTicks;
    int _proxSetupActiveToken;
    BOOL _audioProgress;
    AVAudioSession *_audioSession;
    AVAudioPlayer *_audioPlayerStart;
    AVAudioPlayer *_audioPlayerStep;
    id /* CDUnknownBlockType */ _audioPlayerCompletion;
    BOOL _preflightEnabled;
    int _preflightWiFiState;
    int _preflightiCloudState;
    BOOL _preventAppleWiFi;
    ACAccountStore *_iCloudAccountStore;
    ACAccount *_iCloudAccount;
    NSString *_iCloudUserID;
    int _iCloudAccountState;
    BOOL _homeiCloudEnabled;
    int _preflightiTunesState;
    SSAccount *_iTunesAccount;
    BOOL _iTunesSignInSkip;
    NSString *_iTunesUserID;
    BOOL _appleMusicEnabled;
    int _appleMusicState;
    BOOL _appleMusicForce;
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;
    int _preflightAppleMusicState;
    int _preflightMiscState;
    BOOL _locationEnabled;
    BOOL _locationDecided;
    BOOL _siriEnabled;
    BOOL _prefStereoPairEnabled;
    BOOL _prefStereoWait;
    NSArray *_potentialStereoCounterparts;
    HMAccessory *_stereoCounterpartAccessory;
    int _stereoPairUserInputState;
    int _stereoPairRole;
    SFSession *_sfSession;
    BOOL _sfSessionSecured;
    int _sfSessionState;
    int _preAuthState;
    BOOL _preAuthStartedProgress;
    unsigned int _siriFlags;
    NSArray *_siriLanguageCodes;
    long long _siriLanguageIndex;
    BOOL _siriLanguagePicked;
    int _siriLanguageState;
    NSString *_siriPreferredLanguage;
    BOOL _siriPasscodeEnabled;
    BOOL _siriPasscodeInitDone;
    BOOL _siriPasscodeSecured;
    int _siriPasscodeState;
    unsigned int _pairSetupFlags;
    int _pairSetupState;
    double _pairSetupSecs;
    int _recognizeVoiceEnabled;
    int _recognizeVoiceState;
    int _recognizeVoiceStepState;
    int _personalRequestsState;
    int _personalRequestsChoice;
    BOOL _siriForEveryoneAnswered;
    int _siriForEveryoneState;
    int _siriDataSharing;
    int _termsState;
    BOOL _termsAgreed;
    int _shareSettingsState;
    BOOL _shareSettingsAgreed;
    int _authKitTrustState;
    int _basicConfigState;
    NSUInteger _basicConfigStartTicks;
    double _basicConfigSecs;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    double _wifiSetupStepSecs;
    double _wifiBonjourTestSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    NSUInteger _trSetupConfigurationStartTicks;
    double _trSetupConfigurationSecs;
    BOOL _trNeedsNetwork;
    NSSet *_trUnauthServices;
    int _trActivationState;
    NSUInteger _trActivationStartTicks;
    double _trActivationSecs;
    int _trAuthenticationState;
    NSUInteger _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    double _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    BOOL _hasExistingHomePod;
    int _multiUserEnableState;
    int _multiUserEnableStepState;
    int _finishState;
    NSUInteger _finishStartTicks;
    double _finishSecs;
    double _iTunesWaitSecs;
    double _mediaSystemWaitSecs;
    double _totalSecs;
    BOOL _prefBonjourTest;
    BOOL _prefForceSiriGreeting;
    BOOL _prefLEDPasscodeEnabled;
    BOOL _prefMultiUser;
    BOOL _hasMultipleUsers;
    BOOL _liveOn;
    BOOL _pauseAfterPreAuth;
    unsigned char _stereoCounterpartColor;
    BOOL _touchRemoteEnabled;
    int _bonjourTestState;
    NSDictionary *_additionalMetrics;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    NSUInteger _peerFeatureFlags;
    NSDictionary *_preAuthResponse;
    UIViewController *_presentingViewController;
    NSUInteger _testFlags;
    id /* CDUnknownBlockType */ _preAuthHandler;
    id /* CDUnknownBlockType */ _progressHandler;
    id /* CDUnknownBlockType */ _promptForAppleMusicHandler;
    id /* CDUnknownBlockType */ _promptForHomeHandler;
    id /* CDUnknownBlockType */ _promptForHomeiCloudHandler;
    id /* CDUnknownBlockType */ _promptForiTunesSignInHandler;
    id /* CDUnknownBlockType */ _promptForLocationEnableHandler;
    id /* CDUnknownBlockType */ _promptForPersonalRequestsHandler;
    id /* CDUnknownBlockType */ _promptForPINHandler;
    id /* CDUnknownBlockType */ _promptForRoomHandler;
    id /* CDUnknownBlockType */ _promptForSiriEnableHandler;
    id /* CDUnknownBlockType */ _promptForTermsHandler;
    id /* CDUnknownBlockType */ _promptToInstallHomeAppHandler;
    id /* CDUnknownBlockType */ _promptToShareSettingsHandler;
    id /* CDUnknownBlockType */ _promptForSiriLanguageHandler;
    id /* CDUnknownBlockType */ _promptForStereoRoleHandler;
    id /* CDUnknownBlockType */ _promptForStereoMultipleHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForStereoMultipleHandler; // @synthesize promptForStereoMultipleHandler=_promptForStereoMultipleHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForStereoRoleHandler; // @synthesize promptForStereoRoleHandler=_promptForStereoRoleHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForSiriLanguageHandler; // @synthesize promptForSiriLanguageHandler=_promptForSiriLanguageHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptToShareSettingsHandler; // @synthesize promptToShareSettingsHandler=_promptToShareSettingsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptToInstallHomeAppHandler; // @synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForTermsHandler; // @synthesize promptForTermsHandler=_promptForTermsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForSiriEnableHandler; // @synthesize promptForSiriEnableHandler=_promptForSiriEnableHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPersonalRequestsHandler; // @synthesize promptForPersonalRequestsHandler=_promptForPersonalRequestsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForLocationEnableHandler; // @synthesize promptForLocationEnableHandler=_promptForLocationEnableHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForiTunesSignInHandler; // @synthesize promptForiTunesSignInHandler=_promptForiTunesSignInHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForHomeiCloudHandler; // @synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForAppleMusicHandler; // @synthesize promptForAppleMusicHandler=_promptForAppleMusicHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ preAuthHandler; // @synthesize preAuthHandler=_preAuthHandler;
@property(nonatomic) BOOL touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(nonatomic) NSUInteger testFlags; // @synthesize testFlags=_testFlags;
@property(readonly, nonatomic) unsigned char stereoCounterpartColor; // @synthesize stereoCounterpartColor=_stereoCounterpartColor;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSDictionary *preAuthResponse; // @synthesize preAuthResponse=_preAuthResponse;
@property(nonatomic) NSUInteger peerFeatureFlags; // @synthesize peerFeatureFlags=_peerFeatureFlags;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(nonatomic) BOOL pauseAfterPreAuth; // @synthesize pauseAfterPreAuth=_pauseAfterPreAuth;
@property(nonatomic) BOOL liveOn; // @synthesize liveOn=_liveOn;
@property(readonly, nonatomic) BOOL hasMultipleUsers; // @synthesize hasMultipleUsers=_hasMultipleUsers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) int bonjourTestState; // @synthesize bonjourTestState=_bonjourTestState;
@property(copy, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
// - (void).cxx_destruct;
- (void)audioSessionInterrupted:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)_setupAudio;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (BOOL)_recognizeVoiceAlreadyEnabled;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_playLocalSoundID:(int)arg1 remoteSoundID:(int)arg2;
- (void)_logMetrics;
- (void)_homeKitUpdateiCloudSwitchState:(BOOL)arg1;
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;
- (void)_runFinishRequest;
- (int)_runFinishStart;
- (void)_runMultiUserEnableEnableSettingStart:(id)arg1 privateSettings:(BOOL)arg2;
- (void)_runMultiUserEnableHome;
- (int)_runMultiUserEnable;
- (int)_runHomeKitSetup;
- (int)_runCDPSetup:(BOOL)arg1;
- (int)_runTRAuthentication;
- (int)_runTRActivation;
- (int)_runTRSetupConfiguration;
- (int)_runWiFiSetup;
- (int)_runTRSessionStart;
- (int)_runAppleMusic;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (int)_runBasicConfig;
- (int)_runPairSetup;
- (void)_runSiriPasscodeStartPairSetup;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeInitRequest;
- (int)_runSiriPasscode;
- (int)_runAuthKitTrustFinish;
- (void)_runAuthKitTrustStartIfNeeded;
- (int)_runShareSettings;
- (int)_runTerms;
- (int)_runSiriForEveryone;
- (int)_runPersonalRequests;
- (void)_runRecognizeVoiceCheckVoiceProfileResponse:(BOOL)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckVoiceProfileStart;
- (void)_runRecognizeVoiceCheckLanguageResponse:(id)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckLanguageStart;
- (int)_runRecognizeVoice;
- (int)_runSiriLanguage;
- (int)_runCheckAccount;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (void)_runPreAuthRequest;
- (int)_runPreAuth;
- (void)_runStereoPairUserInputPickColors:(BOOL)arg1;
- (int)_runStereoPairUserInput;
- (int)_runHomeKitUserInput;
- (int)_runPreflightMisc;
- (int)_runPreflightiTunes;
- (int)_runPreflightiCloud;
- (int)_runPreflightWiFi;
- (int)_runSFSessionStart;
- (void)_run;
- (void)termsAgreed;
- (void)stereoMultiplePicked:(id)arg1;
- (void)stereoRolePicked:(int)arg1;
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speakPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)skipiTunesSignIn;
- (void)skipAudioPasscode;
- (void)siriLanguagePicked:(long long)arg1;
- (void)siriForEveryoneAnswered;
@property(readonly, nonatomic) BOOL siriDataSharingEnabled;
- (void)siriEnable;
- (void)shareSettingsAgreed;
@property(readonly, nonatomic) NSString *selectedSiriLanguage;
@property(readonly, nonatomic) HMHome *selectedHome;
- (void)recognizeVoiceAnswered:(BOOL)arg1;
- (void)_preflightAppleMusicCompleted:(int)arg1;
- (void)_preflightAppleMusic;
- (void)preflight;
- (void)playAudioPasscodeAgain;
- (void)personalRequestsEnabled:(BOOL)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)locationEnable:(BOOL)arg1;
- (void)ledPasscodeMatched;
- (void)homeKitSelectRoom:(id)arg1;
- (void)homeKitReselectHome;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeiCloudEnable;
- (void)homeAppInstallChoice:(BOOL)arg1;
- (void)disconnect;
- (void)appleMusicNext;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanupSession;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterConfig : NSObject
{
    long long _videoResolution;
    int _videoSource;
    long long _codecType;
//     struct opaqueRTCReporting _reportingAgent;
    int _reportingParentID;
    NSUInteger _framerate;
    NSUInteger _txMaxBitrate;
    NSUInteger _txMinBitrate;
    NSUInteger _keyFrameInterval;
    NSUInteger _recommendedMTU;
    NSUInteger _cvoExtensionID;
    BOOL _enableCVO;
    int _videoPayload;
    int _encodingMode;
    _Atomic unsigned char _videoPriorityPointer;
    NSUInteger _customWidth;
    NSUInteger _customHeight;
    int _mode;
    AVCStatisticsCollector *_statisticsCollector;
//     struct tagVCVideoTransmitterStreamConfig _streamConfigs;
    int _streamCount;
    int _tilesPerFrame;
    BOOL _useRateControl;
    unsigned int _pixelFormat;
    NSMutableDictionary *_customFeatureListStrings;
}

@property(readonly, nonatomic) NSDictionary *customFeatureListStrings; // @synthesize customFeatureListStrings=_customFeatureListStrings;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) BOOL useRateControl; // @synthesize useRateControl=_useRateControl;
@property(nonatomic) int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) int streamCount; // @synthesize streamCount=_streamCount;
// @property(readonly, nonatomic) struct tagVCVideoTransmitterStreamConfig streamConfigs; // @synthesize streamConfigs=_streamConfigs;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) NSUInteger customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) NSUInteger customWidth; // @synthesize customWidth=_customWidth;
@property(nonatomic) _Atomic unsigned char videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) int videoPayload; // @synthesize videoPayload=_videoPayload;
@property(nonatomic) int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) BOOL enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) NSUInteger cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) NSUInteger recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) NSUInteger keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) NSUInteger txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) NSUInteger txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) NSUInteger framerate; // @synthesize framerate=_framerate;
@property(nonatomic) int reportingParentID; // @synthesize reportingParentID=_reportingParentID;
// @property(nonatomic) struct opaqueRTCReporting reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)addCustomFeatureListString:(id)arg1 payload:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)init;

@end


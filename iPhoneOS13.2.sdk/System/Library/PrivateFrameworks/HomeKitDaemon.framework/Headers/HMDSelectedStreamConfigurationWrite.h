//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>

@class HMDSelectedAudioParameters, HMDSelectedVideoParameters, HMDSessionControl;

@interface HMDSelectedStreamConfigurationWrite : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDSessionControl *_sessionControl;
    HMDSelectedVideoParameters *_videoParameters;
    HMDSelectedAudioParameters *_audioParameters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDSelectedAudioParameters *audioParameters; // @synthesize audioParameters=_audioParameters;
@property(readonly, copy, nonatomic) HMDSelectedVideoParameters *videoParameters; // @synthesize videoParameters=_videoParameters;
@property(readonly, copy, nonatomic) HMDSessionControl *sessionControl; // @synthesize sessionControl=_sessionControl;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (BOOL)_parseFromTLVData;
- (id)tlvData;
- (id)initWithSessionControl:(id)arg1;
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 audioParameters:(id)arg3;

@end


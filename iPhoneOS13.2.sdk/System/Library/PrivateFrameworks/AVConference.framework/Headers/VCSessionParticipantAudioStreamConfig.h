//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCAudioStreamConfig.h>

@class VCAudioRuleCollection;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig
{
    VCAudioRuleCollection *_audioRules;
    VCAudioRuleCollection *_audioRulesNegotiated;
}

@property(retain, nonatomic) VCAudioRuleCollection *audioRules; // @synthesize audioRules=_audioRules;
@property(retain, nonatomic) VCAudioRuleCollection *audioRulesNegotiated; // @synthesize audioRulesNegotiated=_audioRulesNegotiated;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextToSpeech/TTSAssetBase.h>


@class NSArray, NSDictionary, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>
{
    NSArray *_languages;
    NSArray *_resourceList;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
}

+ (id)legacyPlatforms;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *voiceConfig; // @synthesize voiceConfig=_voiceConfig;
@property(copy, nonatomic) NSURL *searchPathURL; // @synthesize searchPathURL=_searchPathURL;
@property(copy, nonatomic) NSArray *resourceList; // @synthesize resourceList=_resourceList;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
// - (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (void)syncWithConfigFile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end


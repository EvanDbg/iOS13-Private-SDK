//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WDRubyProperties : NSObject
{
    unsigned int mOriginal:1;
//     CDStruct_1cdbed2b mOriginalProperties;
}

- (id)description;
- (void)clearPhoneticGuideLanguage;
- (BOOL)isPhoneticGuideLanguageOverridden;
@property(nonatomic) int phoneticGuideLanguage;
- (void)clearDistanceBetween;
- (BOOL)isDistanceBetweenOverridden;
@property(nonatomic) unsigned short distanceBetween;
- (void)clearBaseFontSize;
- (BOOL)isBaseFontSizeOverridden;
@property(nonatomic) unsigned short baseFontSize;
- (void)clearPhoneticGuideFontSize;
- (BOOL)isPhoneticGuideFontSizeOverridden;
@property(nonatomic) unsigned short phoneticGuideFontSize;
- (void)clearAlignment;
- (BOOL)isAlignmentOverridden;
@property(nonatomic) int alignment;
- (BOOL)isAnythingOverridden;
- (void)dealloc;
- (id)init;
// - (BOOL)isAnythingOverriddenIn:(CDStruct_1cdbed2b )arg1;

@end


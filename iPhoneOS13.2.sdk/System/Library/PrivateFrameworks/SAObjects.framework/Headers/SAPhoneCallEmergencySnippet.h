//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet
{
}

+ (id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callEmergencySnippet;
@property(retain, nonatomic) SAUIColor *headerTextColor;
@property(retain, nonatomic) SAUIColor *headerBackgroundColor;
@property(nonatomic) long long countDownSeconds;
@property(retain, nonatomic) SAUIColor *bodyTextColor;
@property(retain, nonatomic) SAUIColor *bodyBackgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


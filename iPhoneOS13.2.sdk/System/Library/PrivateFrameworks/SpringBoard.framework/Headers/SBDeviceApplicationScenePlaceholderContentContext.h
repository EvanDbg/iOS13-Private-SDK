//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBScenePlaceholderContentContext-Protocol.h>

@class NSString, NSURL;
@protocol SBActivationSettings;

@interface SBDeviceApplicationScenePlaceholderContentContext : NSObject <SBScenePlaceholderContentContext, NSMutableCopying>
{
    long long _layoutEnvironment;
    id <SBActivationSettings> _settings;
    NSString *_requestedLaunchIdentifier;
    NSURL *_url;
    BOOL _prefersLiveXIB;
    NSUInteger _preferredContentType;
}

@property(nonatomic) NSUInteger preferredContentType; // @synthesize preferredContentType=_preferredContentType;
@property(nonatomic) BOOL prefersLiveXIB; // @synthesize prefersLiveXIB=_prefersLiveXIB;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *requestedLaunchIdentifier; // @synthesize requestedLaunchIdentifier=_requestedLaunchIdentifier;
@property(nonatomic) long long layoutEnvironment; // @synthesize layoutEnvironment=_layoutEnvironment;
@property(copy, nonatomic) id <SBActivationSettings> activationSettings; // @synthesize activationSettings=_settings;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) BOOL canShowUserContent;
- (id)initWithActivationSettings:(id)arg1;
- (id)init;

@end


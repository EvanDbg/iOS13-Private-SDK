//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCReportingIdentityPropertiesLoading-Protocol.h>

@class MPCPlaybackRequestEnvironment;

@interface MPCReportingPlaybackEnvironmentPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading>
{
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
}

@property(readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
// - (void).cxx_destruct;
- (void)_getHasSubscriptionPlaybackCapabilityForUserIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlaybackRequestEnvironment:(id)arg1;

@end


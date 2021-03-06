//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem
{
}

+ (id)pregateRulesSystemWithConstants:(id)arg1;
+ (id)sharedPregateRules;
+ (id)factCandidateForHorizon;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForReframe;
+ (id)factCandidateForVideo;
+ (id)factCandidateForStill;
@property(readonly) BOOL isCandidateForHorizon;
@property(readonly) BOOL isCandidateForPerspective;
@property(readonly) BOOL isCandidateForReframe;

@end


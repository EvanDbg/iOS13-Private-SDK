//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_feedback;
    id /* block */ _feedbackUpdateBlock;
    double _minimumInterval;
}

+ (id)rigidConfiguration;
+ (id)softConfiguration;
+ (id)strongConfiguration;
+ (id)lightConfiguration;
+ (id)defaultConfiguration;
@property(nonatomic) double minimumInterval; // @synthesize minimumInterval=_minimumInterval;
@property(copy, nonatomic) id /* block */ feedbackUpdateBlock; // @synthesize feedbackUpdateBlock=_feedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback; // @synthesize feedback=_feedback;
- (id)feedbackKeyPaths;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)requiredSupportLevel;

@end

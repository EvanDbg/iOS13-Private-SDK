//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult
{
    double _redLevel;
    double _blueLevel;
    double _greenLevel;
}

@property(readonly, nonatomic) double greenLevel; // @synthesize greenLevel=_greenLevel;
@property(readonly, nonatomic) double blueLevel; // @synthesize blueLevel=_blueLevel;
@property(readonly, nonatomic) double redLevel; // @synthesize redLevel=_redLevel;
- (id)humanReadableResult;
- (id)initWithRedLevel:(double)arg1 blueLevel:(double)arg2 greenLevel:(double)arg3;

@end


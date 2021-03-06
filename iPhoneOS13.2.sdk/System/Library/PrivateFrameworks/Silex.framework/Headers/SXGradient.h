//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXGradient : NSObject
{
    NSArray *_colors;
    NSArray *_locations;
    CGPoint _startPoint;
    CGPoint _endPoint;
}

@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) CGPoint startPoint; // @synthesize startPoint=_startPoint;
// - (void).cxx_destruct;
- (id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 colors:(id)arg3 locations:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMPanoramaPaintingStatus : NSObject
{
    double _speed;
    CGRect _cropRectangle;
}

@property(readonly, nonatomic) CGRect cropRectangle; // @synthesize cropRectangle=_cropRectangle;
@property(readonly, nonatomic) double speed; // @synthesize speed=_speed;
- (id)initWithSpeed:(double)arg1 cropRectangle:(CGRect)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIMecabraSegment : NSObject
{
    NSString *_reading;
    NSString *_surface;
}

+ (void)splitSegmests:(id)arg1 at:(int)arg2 forPrefix:(id )arg3 forSuffix:(id )arg4;
@property(retain, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(retain, nonatomic) NSString *reading; // @synthesize reading=_reading;
// - (void).cxx_destruct;

@end


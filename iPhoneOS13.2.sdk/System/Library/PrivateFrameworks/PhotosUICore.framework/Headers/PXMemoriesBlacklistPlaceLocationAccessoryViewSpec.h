//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@class CLLocation;

@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec
{
    CLLocation *_location;
    double _regionRadius;
}

+ (id)specWithLocation:(id)arg1 regionRadius:(double)arg2;
@property(readonly, nonatomic) double regionRadius; // @synthesize regionRadius=_regionRadius;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
// - (void).cxx_destruct;
- (id)initWithLocation:(id)arg1 regionRadius:(double)arg2;

@end


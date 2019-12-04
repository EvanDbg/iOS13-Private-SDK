//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesGeotaggable-Protocol.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable>
{
    struct CLLocationCoordinate2D _coordinate;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) struct CGImage *image;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 location:(struct CLLocationCoordinate2D)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

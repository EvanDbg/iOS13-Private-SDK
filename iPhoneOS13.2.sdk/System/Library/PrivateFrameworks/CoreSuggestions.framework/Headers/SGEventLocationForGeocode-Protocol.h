//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString;

@protocol SGEventLocationForGeocode <NSObject>
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(NSData *)arg4;
- (id)geocodedLocationWithLabel:(NSString *)arg1 address:(NSString *)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(NSData *)arg6;
- (NSData *)geocodeHandle;
- (double)geocodeAccuracy;
- (double)geocodeLongitude;
- (double)geocodeLatitude;
- (BOOL)geocodeIsEnd;
- (BOOL)geocodeIsStart;
- (NSString *)geocodeAirportCode;
- (NSString *)geocodeAddress;
- (NSString *)geocodeLabel;
@end


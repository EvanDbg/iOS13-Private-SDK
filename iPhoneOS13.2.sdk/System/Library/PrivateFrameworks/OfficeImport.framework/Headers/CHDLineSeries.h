//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CHDSeries.h>

#import <OfficeImport/CHDMarkerOwner-Protocol.h>

@class CHDMarker, NSString;

__attribute__((visibility("hidden")))
@interface CHDLineSeries : CHDSeries <CHDMarkerOwner>
{
    CHDMarker *mMarker;
    _Bool mSmooth;
}

- (void)setSmooth:(_Bool)arg1;
- (_Bool)isSmooth;
- (void)setMarker:(id)arg1;
- (id)marker;
- (id)initWithChart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

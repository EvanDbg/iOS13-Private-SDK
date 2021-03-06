//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, VKRouteEtaDescription;

@interface VKRouteInfo : NSObject
{
    GEOComposedRoute *_route;
    VKRouteEtaDescription *_etaDescription;
    BOOL _hasFocus;
}

@property(nonatomic) BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property(retain, nonatomic) VKRouteEtaDescription *etaDescription; // @synthesize etaDescription=_etaDescription;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) BOOL hasRouteEta;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;

@end


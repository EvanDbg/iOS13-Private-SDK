//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>
#import <GeoServices/GEOMapServiceThrottlableTicket-Protocol.h>

@class GEOApplicationAuditToken, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceGeoIpLookupTicket <GEOMapServiceCancellableTicket, GEOMapServiceThrottlableTicket>
- (void)cancel;
- (void)submitWithHandler:(void (^)(GeoIpLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3 handlerQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end


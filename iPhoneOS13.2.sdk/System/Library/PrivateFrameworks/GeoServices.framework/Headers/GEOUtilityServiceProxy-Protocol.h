//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOUtilityServiceProxy <NSObject>
- (void)getCurrentGeoServicesState:(NSObject<OS_dispatch_queue> *)arg1 callback:(void (^)(GEOServicesState *, NSError *))arg2;
- (NSString *)getGeoServicesCacheDirectoryPath;
- (NSString *)getHomeDirectoryPath;
@end


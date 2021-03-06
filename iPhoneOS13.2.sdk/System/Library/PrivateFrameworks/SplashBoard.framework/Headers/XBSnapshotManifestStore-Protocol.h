//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString;

@protocol XBSnapshotManifestStore <NSObject>
- (void)synchronizeForBundleIdentifier:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (NSData *)loadManifestDataForBundleIdentifier:(NSString *)arg1;
- (void)clearManifestDataForBundleIdentifier:(NSString *)arg1;
- (void)persistManifestData:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@optional
- (void)endAccessBlockForBundleIdentifier:(NSString *)arg1;
- (void)beginAccessBlockForBundleIdentifier:(NSString *)arg1;
@end


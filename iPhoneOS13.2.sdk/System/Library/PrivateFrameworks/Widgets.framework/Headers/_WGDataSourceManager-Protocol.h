//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol _WGParentDataSourceManager;

@protocol _WGDataSourceManager <NSObject>
@property(readonly, nonatomic) NSArray *dataSources;
@property(nonatomic) id <_WGParentDataSourceManager> parentDataSourceManager;
- (void)_stop:(void (^)(void))arg1;
- (void)_start:(void (^)(void))arg1;
@end


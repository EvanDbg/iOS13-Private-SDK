//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;

@protocol CRKConfigurationSource <NSObject>
- (void)fetchConfiguration:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setConfiguration:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
@end


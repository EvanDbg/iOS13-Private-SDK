//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSSet, SKUIItemResourceRequest;

@protocol SKUIItemRequestDelegate <NSObject>

@optional
- (void)itemRequest:(SKUIItemResourceRequest *)arg1 didFinishWithItems:(NSDictionary *)arg2 invalidItemIdentifiers:(NSSet *)arg3;
- (void)itemRequest:(SKUIItemResourceRequest *)arg1 didFinishWithItems:(NSDictionary *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FCCommand, FCCommandQueue;

@protocol FCCommandQueueDelegate <NSObject>

@optional
- (long long)commandQueue:(FCCommandQueue *)arg1 qualityOfServiceForCommand:(FCCommand *)arg2;
@end


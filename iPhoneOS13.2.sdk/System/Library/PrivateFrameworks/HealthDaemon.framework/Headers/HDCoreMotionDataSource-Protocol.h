//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HDCoreMotionDatum;

@protocol HDCoreMotionDataSource <NSObject>
- (void)hd_stopStreaming;
- (void)hd_beginStreamingFromDatum:(id <HDCoreMotionDatum>)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end


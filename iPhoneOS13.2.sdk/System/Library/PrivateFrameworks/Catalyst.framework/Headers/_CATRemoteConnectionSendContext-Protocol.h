//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData;

@protocol _CATRemoteConnectionSendContext <NSObject>
@property(readonly, nonatomic) NSUInteger clientBytesWritten;
@property(nonatomic) NSUInteger bytesWritten;
@property(readonly, nonatomic) BOOL hasBytesRemaining;
@property(readonly, nonatomic) id userInfo;
- (NSData *)bufferedDataWithError:(id )arg1;
@end


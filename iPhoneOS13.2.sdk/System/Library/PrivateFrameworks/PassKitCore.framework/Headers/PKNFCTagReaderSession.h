//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@protocol PKNFCTagReaderSessionDelegate;

@interface PKNFCTagReaderSession : PKPaymentSession
{
    id <PKNFCTagReaderSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <PKNFCTagReaderSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)readNDEFMessageFromTag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endSession;
- (void)stopPolling;
- (void)startPolling;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/SPLocalPairingManagerXPCProtocol-Protocol.h>

@protocol SPPairingManagerXPCProtocol <NSObject, SPLocalPairingManagerXPCProtocol>
- (oneway void)currentBeaconingKeyWithCompletion:(void (^)(SPBeaconingKey *))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation
{
    id /* CDUnknownBlockType */ _sendingWiFiInfoHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ sendingWiFiInfoHandler; // @synthesize sendingWiFiInfoHandler=_sendingWiFiInfoHandler;
// - (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)_sendRequestWithSSID:(id)arg1 password:(id)arg2;
- (void)execute;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRSystemVersionRequest-Protocol.h>

@interface NRSystemVersionRequest : NSObject <NRSystemVersionRequest>
{
}

- (void)sendVersionRequestToCompanion;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)connection;

@end


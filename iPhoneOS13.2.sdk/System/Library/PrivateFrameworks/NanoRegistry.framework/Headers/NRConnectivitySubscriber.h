//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRConnectivitySubscriber : NSObject
{
    BOOL _connected;
    NSUInteger _dropoutCounter;
}

+ (BOOL)getDropoutCounter:(NSUInteger )arg1;
@property(nonatomic) NSUInteger dropoutCounter; // @synthesize dropoutCounter=_dropoutCounter;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
- (void)_readConnectivityStatus;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTOSTransaction, NSString;

@interface MTCFUserNotification : NSObject
{
    NSString *_identifier;
    id /* CDUnknownBlockType */ _handler;
    MTOSTransaction *_transaction;
//    struct __CFUserNotification _notification;
}

// property(nonatomic) struct __CFUserNotification notification; // @synthesize notification=_notification;
@property(retain, nonatomic) MTOSTransaction *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;

@end


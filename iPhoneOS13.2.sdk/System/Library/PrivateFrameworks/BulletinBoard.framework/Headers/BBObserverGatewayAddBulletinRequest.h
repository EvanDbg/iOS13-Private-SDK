//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BBObserverGatewayAddBulletinRequest : NSObject
{
    NSString *_bulletinID;
    NSString *_sectionID;
    NSDate *_timeout;
    id /* CDUnknownBlockType */ _timeoutHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(retain, nonatomic) NSDate *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
// - (void).cxx_destruct;

@end


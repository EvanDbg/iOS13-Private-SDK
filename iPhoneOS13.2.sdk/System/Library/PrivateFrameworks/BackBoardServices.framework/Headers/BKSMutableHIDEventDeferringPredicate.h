//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDeferringPredicate.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate
{
}

+ (id)new;
// - (id)copyWithZone:(_NSZone )arg1;
@property(copy, nonatomic) BKSHIDEventDeferringToken *token; // @dynamic token;
@property(copy, nonatomic) BKSHIDEventDisplay *display; // @dynamic display;
@property(retain, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @dynamic environment;
- (id)init;

@end


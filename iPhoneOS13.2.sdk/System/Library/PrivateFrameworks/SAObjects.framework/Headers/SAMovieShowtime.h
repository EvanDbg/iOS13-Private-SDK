//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, SACalendar, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable>
{
}

+ (id)showtimeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showtime;
@property(retain, nonatomic) SACalendar *showtime;
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;
@property(copy, nonatomic) NSNumber *regularTicketQuantity;
@property(nonatomic) BOOL isImax;
@property(nonatomic) BOOL is3d;
@property(copy, nonatomic) NSNumber *childTicketQuantity;
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


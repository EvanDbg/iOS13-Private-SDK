//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HMFoundation/HMFObject-Protocol.h>

@class NSDateComponents, NSString;

@interface NSDate (HMFoundation) <HMFObject>
+ (id)shortDescription;
+ (id)dateFromFileNameDescription:(id)arg1;
+ (id)timeIntervalDescription:(double)arg1;
@property(readonly, copy) NSDateComponents *hmf_dateComponents;
@property(readonly, copy) NSString *hmf_localTimeDescription;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly, copy) NSString *fileNameDescription;
@property(readonly, copy) NSString *iso8601Description;
@property(readonly, copy) NSDateComponents *dateComponents;
@property(readonly, copy) NSString *localTimeDescription;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CTCarrierSpaceUsagePlanItemVoice : NSObject <NSSecureCoding>
{
    NSString *_minutesCapacity;
    NSString *_minutesUsed;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *minutesUsed; // @synthesize minutesUsed=_minutesUsed;
@property(retain, nonatomic) NSString *minutesCapacity; // @synthesize minutesCapacity=_minutesCapacity;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end


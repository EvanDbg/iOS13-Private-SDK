//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable>
{
}

+ (id)teamRankWithDictionary:(id)arg1 context:(id)arg2;
+ (id)teamRank;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSNumber *primary;
@property(copy, nonatomic) NSNumber *position;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface NviSignalData : NSObject <NSCoding>
{
    NSUInteger _sigType;
    NSUInteger _sigGenTs;
}

+ (id)headerString;
@property(nonatomic) NSUInteger sigGenTs; // @synthesize sigGenTs=_sigGenTs;
@property(nonatomic) NSUInteger sigType; // @synthesize sigType=_sigType;
- (id)description;
- (id)stringForLogging;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignalType:(NSUInteger)arg1 timestamp:(NSUInteger)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRCommand-Protocol.h>

@class NSDictionary;

@interface CRBeganEditingCommand : NSObject <CRCommand>
{
    NSUInteger _commandDirection;
    NSDictionary *userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
// - (void).cxx_destruct;
@property(nonatomic) NSUInteger commandDirection;
// - (id)copyWithZone:(_NSZone )arg1;

@end


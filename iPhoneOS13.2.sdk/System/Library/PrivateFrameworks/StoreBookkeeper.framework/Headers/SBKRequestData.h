//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequestData : NSObject
{
    SBKTransaction *_transaction;
}

+ (id)propertyListBodyWithTransaction:(id)arg1;
@property(retain) SBKTransaction *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (id)serializableRequestBodyPropertyList;
- (id)initWithTransaction:(id)arg1;

@end


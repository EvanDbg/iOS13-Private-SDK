//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBModelObjectCoder-Protocol.h>

@class NSString;

@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying>
{
    long long _keyStatus;
    NSString *_message;
    NSUInteger _rebuildState;
}

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(NSUInteger)arg2 error:(id )arg3;
+ (id)keyStatusString:(long long)arg1;
+ (id)rebuilderStateString:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger rebuildState; // @synthesize rebuildState=_rebuildState;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long keyStatus; // @synthesize keyStatus=_keyStatus;
// - (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(NSUInteger)arg1 error:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithState:(NSUInteger)arg1 message:(id)arg2;

@end


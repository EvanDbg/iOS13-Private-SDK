//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRProtocolMessage, NSData;

__attribute__((visibility("hidden")))
@interface MRMessageData : NSObject
{
    NSData *_data;
    MRProtocolMessage *_message;
    id /* CDUnknownBlockType */ _dataBlock;
    long long _readPosition;
}

@property(nonatomic) long long readPosition; // @synthesize readPosition=_readPosition;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canPurge;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
@property(readonly, nonatomic) MRProtocolMessage *message;
@property(readonly, nonatomic) NSData *data;
- (id)initWithMessage:(id)arg1 createDataBlock:(CDUnknownBlockType)arg2;

@end


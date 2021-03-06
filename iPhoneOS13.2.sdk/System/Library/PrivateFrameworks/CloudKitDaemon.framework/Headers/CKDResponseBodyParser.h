//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData;
@protocol OS_dispatch_queue;

@interface CKDResponseBodyParser : NSObject
{
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSMutableData *_parserData;
    NSError *_parserError;
    id /* CDUnknownBlockType */ _objectParsedBlock;
    long long _qualityOfService;
}

@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) id /* CDUnknownBlockType */ objectParsedBlock; // @synthesize objectParsedBlock=_objectParsedBlock;
@property(retain, nonatomic) NSError *parserError; // @synthesize parserError=_parserError;
// - (void).cxx_destruct;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1;
@property(retain, nonatomic) NSMutableData *parserData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
- (id)initWithQoS:(long long)arg1;

@end


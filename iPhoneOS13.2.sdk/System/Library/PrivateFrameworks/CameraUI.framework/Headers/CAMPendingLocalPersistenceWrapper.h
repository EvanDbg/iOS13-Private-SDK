//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject
{
    CAMCaptureRequest *_request;
    id _result;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, nonatomic) CAMCaptureRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 result:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


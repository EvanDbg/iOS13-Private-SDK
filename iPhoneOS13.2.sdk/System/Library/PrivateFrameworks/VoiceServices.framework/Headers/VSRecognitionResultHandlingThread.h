//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray;
@protocol VSRecognitionResultHandlingThreadDelegate;

__attribute__((visibility("hidden")))
@interface VSRecognitionResultHandlingThread : NSObject
{
    id <VSRecognitionResultHandlingThreadDelegate> _delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
   struct {
        unsigned int running:1;
        unsigned int delegateDidHandleResults:1;
        unsigned int valid:1;
    } _resultHandlingFlags;
}

- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)arg1;
- (void)invalidate;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end


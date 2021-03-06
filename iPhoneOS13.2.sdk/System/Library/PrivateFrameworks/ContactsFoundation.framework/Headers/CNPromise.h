//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFuture;

@interface CNPromise : NSObject <CNPromise>
{
    CNFuture *_future;
}

@property(readonly) CNFuture *future; // @synthesize future=_future;
// - (void).cxx_destruct;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)init;

@end


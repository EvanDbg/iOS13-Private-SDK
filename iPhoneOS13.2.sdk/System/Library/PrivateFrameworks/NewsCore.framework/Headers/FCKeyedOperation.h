//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>

@protocol FCOperationCanceling;

@interface FCKeyedOperation : NSObject <FCOperationCanceling>
{
    BOOL _cancelled;
    id <FCOperationCanceling> _cancelHandler;
}

// - (void).cxx_destruct;
- (void)cancel;
- (void)executeForQueue:(id)arg1 delegate:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end


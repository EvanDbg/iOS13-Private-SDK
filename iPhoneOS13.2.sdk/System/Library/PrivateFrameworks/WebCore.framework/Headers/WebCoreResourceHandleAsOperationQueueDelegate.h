//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate>
{
//     struct ResourceHandle m_handle;
//     struct BinarySemaphore m_semaphore;
    MessageQueue_969405d4 m_messageQueue;
//     struct RetainPtr<NSURLRequest> m_requestResult;
//     struct Lock m_mutex;
//     struct RetainPtr<NSCachedURLResponse> m_cachedResponseResult;
//     struct Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair>>>>> m_scheduledPairs;
    BOOL m_boolResult;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dealloc;
- (void)detachHandle;
// - (id)initWithHandle:(struct ResourceHandle )arg1 messageQueue:(MessageQueue_969405d4 )arg2;
- (void)callFunctionOnMainThread:(Function_15535652 )arg1;

@end


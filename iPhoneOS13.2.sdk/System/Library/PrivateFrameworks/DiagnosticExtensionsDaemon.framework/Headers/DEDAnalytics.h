//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DEDAnalytics : NSObject
{
}

+ (void)didCompleteBugSessionWithState:(long long)arg1;
+ (void)finisherDidCompleteWithDuration:(NSUInteger)arg1 uploadedByteCount:(NSUInteger)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4;
+ (void)finisherDidStartWithFileCount:(NSUInteger)arg1 expectedByteUploadCount:(NSUInteger)arg2 finishingMove:(long long)arg3;
+ (void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(NSUInteger)arg2 bytesCollected:(NSUInteger)arg3 duration:(NSUInteger)arg4 errorCode:(long long)arg5;
+ (void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(NSUInteger)arg2;
+ (void)didStartExtensionWithIdentifier:(id)arg1;
+ (void)didCreateBugSessionForApp:(id)arg1;
+ (void)didCheckInDeferredExtensionsWithCount:(NSUInteger)arg1;
+ (void)didStartDaemon;
+ (id)log;

@end


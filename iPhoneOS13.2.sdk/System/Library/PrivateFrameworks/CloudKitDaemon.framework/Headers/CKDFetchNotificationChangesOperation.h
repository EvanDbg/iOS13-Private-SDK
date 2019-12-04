//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesOperation : CKDOperation
{
    _Bool _wantsChanges;
    _Bool _moreComing;
    id /* block */ _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_resultServerChangeToken;
}

@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(nonatomic) _Bool wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) id /* block */ notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonIrisClientProtocol-Protocol.h>

@class CAMNebulaDaemonProxyManager, NSMutableArray, NSMutableDictionary;
@protocol CAMIrisVideoControllerDelegate, OS_dispatch_queue;

@interface CAMIrisVideoController : NSObject <CAMNebulaDaemonIrisClientProtocol>
{
    id <CAMIrisVideoControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *__mutexQueue;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
    NSMutableArray *__jobsToBeSent;
    NSMutableDictionary *__pendingJobs;
}

@property(readonly, nonatomic) NSMutableDictionary *_pendingJobs; // @synthesize _pendingJobs=__pendingJobs;
@property(readonly, nonatomic) NSMutableArray *_jobsToBeSent; // @synthesize _jobsToBeSent=__jobsToBeSent;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
@property(readonly, nonatomic) __weak id <CAMIrisVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (BOOL)isWaitingOnNebuladForRequest:(id)arg1;
- (void)_notifyDelegateOfVideoLocalPersistenceResult:(id)arg1 forVideoPersistenceUUID:(id)arg2;
- (void)_submitJob:(id)arg1;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (BOOL)shouldHandleLivePhotoRenderingForRequest:(id)arg1;
- (id)initWithNebulaDaemonProxyManager:(id)arg1 delegate:(id)arg2;

@end


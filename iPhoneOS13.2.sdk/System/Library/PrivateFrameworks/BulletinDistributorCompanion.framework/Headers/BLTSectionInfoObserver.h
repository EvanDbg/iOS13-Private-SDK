//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>

@class BBObserver, BBSettingsGateway;
@protocol BLTSectionInfoObserverDelegate, OS_dispatch_queue;

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _reloadSectionInfoCompletion;
    BBSettingsGateway *_settingsGateway;
    id <BLTSectionInfoObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTSectionInfoObserverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)_reloadSectionInfosWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoBySectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getUniversalSectionIDs:(id)arg1 sectionIDEnumerator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)_settingsGatewayReconnected:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsGateway:(id)arg1;
- (id)init;

@end


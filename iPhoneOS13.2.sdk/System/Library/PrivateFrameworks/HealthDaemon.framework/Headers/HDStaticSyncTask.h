//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSUUID;
@protocol OS_dispatch_queue;

@interface HDStaticSyncTask : NSObject
{
    HDProfile *_profile;
    NSUInteger _options;
    NSUUID *_storeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (id)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1 options:(NSUInteger)arg2 storeIdentifier:(id)arg3;

@end


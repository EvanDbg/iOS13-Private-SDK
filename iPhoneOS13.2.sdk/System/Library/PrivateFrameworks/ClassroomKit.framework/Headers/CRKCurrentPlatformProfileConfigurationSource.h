//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKConfigurationSource-Protocol.h>

@protocol CRKConfigurationSource;

@interface CRKCurrentPlatformProfileConfigurationSource : NSObject <CRKConfigurationSource>
{
    id <CRKConfigurationSource> mBaseSource;
}

// - (void).cxx_destruct;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)makeMacOSConfigurationSourceWithCallbackQueue:(id)arg1;
- (id)makeiOSConfigurationSourceWithCallbackQueue:(id)arg1;
- (id)makeSourceForCurrentPlatformWithCallbackQueue:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1;
- (id)init;

@end


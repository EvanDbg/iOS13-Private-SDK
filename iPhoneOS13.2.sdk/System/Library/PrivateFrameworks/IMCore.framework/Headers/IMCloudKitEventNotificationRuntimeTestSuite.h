//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMRuntimeTestSuite.h>

#import <IMCore/IMCloudKitEventHandler-Protocol.h>

@class IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler>
{
    BOOL _shouldTearDown;
    IMCloudKitHookTestSingleton *_cloudKitHooks;
}

+ (void)runTestsIfNeeded;
@property BOOL shouldTearDown; // @synthesize shouldTearDown=_shouldTearDown;
@property(retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks; // @synthesize cloudKitHooks=_cloudKitHooks;
// - (void).cxx_destruct;
- (void)tearDown;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)setUp;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol NUANFDebugSettingsObserver;

@protocol NUANFDebugSettingsProvider <NSObject>
- (void)removeObserver:(id <NUANFDebugSettingsObserver>)arg1;
- (void)addObserver:(id <NUANFDebugSettingsObserver>)arg1;
@property(nonatomic, readonly) BOOL testingConditionEnabled;
@property(nonatomic, readonly) BOOL viewportDebuggingEnabled;
@end


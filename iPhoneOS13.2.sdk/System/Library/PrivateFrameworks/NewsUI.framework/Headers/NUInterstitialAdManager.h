//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FCNewsAppConfigurationManager, NUAdLayoutOptionsFactory, NUAdProvider, NUInterstitialAdManagerDelegate, NUPage;

@interface NUInterstitialAdManager : NSObject
{
    BOOL _enabled;
    id <NUInterstitialAdManagerDelegate> _delegate;
    id <NUPage> _activePage;
    id <NUAdProvider> _adProvider;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    id <NUAdLayoutOptionsFactory> _layoutOptionsFactory;
}

@property(readonly, nonatomic) id <NUAdLayoutOptionsFactory> layoutOptionsFactory; // @synthesize layoutOptionsFactory=_layoutOptionsFactory;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) id <NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <NUPage> activePage; // @synthesize activePage=_activePage;
@property(nonatomic) __weak id <NUInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)triggerTimerChangesForActivePage:(id)arg1;
- (void)restartTimer;
- (void)cancelTimer;
- (void)loadInterstitial;
- (void)dealloc;
- (id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2 layoutOptionsFactory:(id)arg3;

@end


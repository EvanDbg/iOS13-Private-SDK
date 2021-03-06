//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableOBWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HMHome, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_usePRButton;
    OBLinkTrayButton *_customizeButton;
}

@property(retain, nonatomic) OBLinkTrayButton *customizeButton; // @synthesize customizeButton=_customizeButton;
@property(retain, nonatomic) OBTrayButton *usePRButton; // @synthesize usePRButton=_usePRButton;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_setupTVViewingProfiles:(id)arg1;
- (void)_dontSetupTVViewingProfiles:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;

@end


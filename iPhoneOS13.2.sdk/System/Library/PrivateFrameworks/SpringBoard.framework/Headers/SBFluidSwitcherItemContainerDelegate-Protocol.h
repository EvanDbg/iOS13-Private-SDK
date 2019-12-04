//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBFluidSwitcherItemContainer;

@protocol SBFluidSwitcherItemContainerDelegate 
- (_Bool)shouldUseBackgroundWallpaperTreatmentForItemContainer:(SBFluidSwitcherItemContainer *)arg1;
- (double)switcherCardScale;
- (long long)homeScreenInterfaceOrientation;
- (long long)switcherInterfaceOrientation;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(SBFluidSwitcherItemContainer *)arg2;
- (struct CGRect)frameForPageViewOfContainer:(SBFluidSwitcherItemContainer *)arg1 fullyPresented:(_Bool)arg2;
- (void)didSelectContainer:(SBFluidSwitcherItemContainer *)arg1;
- (_Bool)canSelectContainer:(SBFluidSwitcherItemContainer *)arg1 numberOfTaps:(long long)arg2;
- (void)killContainer:(SBFluidSwitcherItemContainer *)arg1 forReason:(long long)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_togglePasscodeSpecifier;
}

@property(retain, nonatomic) PSSpecifier *togglePasscodeSpecifier; // @synthesize togglePasscodeSpecifier=_togglePasscodeSpecifier;
// - (void).cxx_destruct;
- (BOOL)isHidden;
- (void)_removeManagedPasscode;
- (void)_setManagedPasscode;
- (id)_removePasscodeAction;
- (void)changeOrRemovePasscode:(id)arg1;
- (void)reloadTogglePasscodeSpecifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

__attribute__((visibility("hidden")))
@interface STAskForTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
}

- (void)respondToRequest:(id)arg1 withApproval:(BOOL)arg2 timeApproved:(id)arg3;
- (void)confirmRespondToRequest:(id)arg1;
- (id)requestSpecifiers;
- (id)_createSpecifierForAskForMore:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface CKHandwritingWindow : UIWindow
{
    BOOL _eatOrientationEvents;
}

@property(nonatomic) BOOL eatOrientationEvents; // @synthesize eatOrientationEvents=_eatOrientationEvents;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (BOOL)_canAffectStatusBarAppearance;

@end


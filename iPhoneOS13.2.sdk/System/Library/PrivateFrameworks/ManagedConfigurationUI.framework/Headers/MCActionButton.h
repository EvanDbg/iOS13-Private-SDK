//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface MCActionButton : UIButton
{
    int _state;
    CGRect _area;
}

- (void)setState:(int)arg1;
- (void)setEnclosingArea:(CGRect)arg1;
- (id)initWithConfigState:(int)arg1;
- (void)_cacheImages;
- (id)_titleForConfigState:(int)arg1;
- (void)_updateButtonImages:(int)arg1 animate:(BOOL)arg2;
- (void)_animationFinished:(id)arg1;
- (void)_layout;

@end


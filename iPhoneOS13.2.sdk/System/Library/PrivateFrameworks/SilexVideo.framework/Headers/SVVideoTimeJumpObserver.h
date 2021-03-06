//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimeJumpObserving-Protocol.h>

@protocol SVPlayerItemObserving, SVVideoTimeProviding;

@interface SVVideoTimeJumpObserver : NSObject <SVVideoTimeJumpObserving>
{
    id /* CDUnknownBlockType */ jumpBlock;
    id <SVPlayerItemObserving> _itemObserver;
    id <SVVideoTimeProviding> _timeProvider;
}

@property(readonly, nonatomic) id <SVVideoTimeProviding> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) id <SVPlayerItemObserving> itemObserver; // @synthesize itemObserver=_itemObserver;
@property(copy, nonatomic, setter=onJump:) id /* CDUnknownBlockType */ jumpBlock; // @synthesize jumpBlock;
// - (void).cxx_destruct;
- (void)jumped:(id)arg1;
- (id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2;

@end


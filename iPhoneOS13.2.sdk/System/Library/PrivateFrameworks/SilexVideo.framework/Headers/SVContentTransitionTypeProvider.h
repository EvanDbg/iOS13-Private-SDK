//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVContentTransitionTypeProviding-Protocol.h>

@protocol SVVideoViewControllerProviding;

@interface SVContentTransitionTypeProvider : NSObject <SVContentTransitionTypeProviding>
{
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long contentTransitionType;
- (id)initWithVideoViewControllerProvider:(id)arg1;

@end


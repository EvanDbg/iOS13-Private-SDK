//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFullscreenCaptionViewFactory-Protocol.h>

@protocol SXComponentActionHandler, SXTextSourceFactory;

@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory>
{
    id <SXTextSourceFactory> _textSourceFactory;
    id <SXComponentActionHandler> _actionHandler;
}

@property(readonly, nonatomic) id <SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) id <SXTextSourceFactory> textSourceFactory; // @synthesize textSourceFactory=_textSourceFactory;
// - (void).cxx_destruct;
- (id)createCaptionView;
- (id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2;

@end


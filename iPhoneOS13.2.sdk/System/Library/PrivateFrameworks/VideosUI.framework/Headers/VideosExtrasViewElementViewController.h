//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasElementViewController.h>

@class IKViewElement;

__attribute__((visibility("hidden")))
@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController
{
    BOOL _embedded;
    IKViewElement *_viewElement;
}

@property(nonatomic) BOOL embedded; // @synthesize embedded=_embedded;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long preferredLayoutAttribute;
@property(readonly, nonatomic) id preferredLayoutGuide;
@property(readonly, nonatomic) BOOL matchParentHeight;
- (void)viewDidLoad;
- (id)initWithViewElement:(id)arg1;

@end


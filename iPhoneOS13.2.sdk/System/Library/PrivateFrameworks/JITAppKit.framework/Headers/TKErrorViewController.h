//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UILabel;

@interface TKErrorViewController : UIViewController
{
    UILabel *_label;
    NSString *_message;
}

+ (id)viewControllerForMessage:(id)arg1;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;

@end


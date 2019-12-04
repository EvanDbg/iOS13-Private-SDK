//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ETLossConfig : NSObject
{
    unsigned long long _mode;
    NSString *_loss_name;
    NSString *_output_name;
    NSString *_label_name;
    NSArray *_label_shape;
    NSString *_custom_network_path;
}

+ (id)L2Loss;
+ (id)softmaxCrossEntropyLoss;
@property(retain) NSString *custom_network_path; // @synthesize custom_network_path=_custom_network_path;
@property(retain) NSArray *label_shape; // @synthesize label_shape=_label_shape;
@property(retain) NSString *label_name; // @synthesize label_name=_label_name;
@property(retain) NSString *output_name; // @synthesize output_name=_output_name;
@property(retain) NSString *loss_name; // @synthesize loss_name=_loss_name;
@property unsigned long long mode; // @synthesize mode=_mode;

@end

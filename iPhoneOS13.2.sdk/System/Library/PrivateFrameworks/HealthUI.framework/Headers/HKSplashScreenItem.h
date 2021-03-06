//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject
{
    NSString *_title;
    NSString *_fullDescription;
    UIImage *_icon;
}

+ (id)splashScreenItemWithDictionary:(id)arg1;
+ (id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;

@end


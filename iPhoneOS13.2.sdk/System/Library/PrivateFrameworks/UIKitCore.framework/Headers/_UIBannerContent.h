//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, UIColor, UIImage;

@interface _UIBannerContent : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_body;
    NSString *_imageName;
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_contentColor;
}

+ (BOOL)supportsSecureCoding;
+ (id)bannerContentWithTitle:(id)arg1;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


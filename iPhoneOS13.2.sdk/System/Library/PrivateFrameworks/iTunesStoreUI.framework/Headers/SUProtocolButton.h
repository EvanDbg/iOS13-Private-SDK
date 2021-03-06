//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject <NSCopying>
{
    NSDictionary *_buttonDictionary;
}

@property(readonly, nonatomic) NSDictionary *buttonDictionary; // @synthesize buttonDictionary=_buttonDictionary;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *buttonTitle;
@property(readonly, nonatomic) NSString *buttonTarget;
@property(readonly, nonatomic) NSString *buttonLocation;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithButtonDictionary:(id)arg1;
- (id)init;

@end


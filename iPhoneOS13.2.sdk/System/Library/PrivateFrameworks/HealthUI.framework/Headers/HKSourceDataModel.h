//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HKSource, NSDictionary, UIImage;

@interface HKSourceDataModel : NSObject <NSCopying>
{
    BOOL _installed;
    HKSource *_source;
    UIImage *_icon;
    NSDictionary *_purposeStrings;
}

@property(copy) NSDictionary *purposeStrings; // @synthesize purposeStrings=_purposeStrings;
@property(retain) UIImage *icon; // @synthesize icon=_icon;
@property BOOL installed; // @synthesize installed=_installed;
@property(readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSource:(id)arg1;

@end


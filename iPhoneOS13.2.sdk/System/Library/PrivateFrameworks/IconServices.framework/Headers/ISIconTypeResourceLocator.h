//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IconServices/ISIconResourceLocator.h>



@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>
{
    NSString *_type;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSString *type; // @synthesize type=_type;
- (_Bool)allowLocalizedIcon;
- (id)preferedResourceName;
- (id)bundleIdentifier;
- (id)resourceDirectoryURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;

@end

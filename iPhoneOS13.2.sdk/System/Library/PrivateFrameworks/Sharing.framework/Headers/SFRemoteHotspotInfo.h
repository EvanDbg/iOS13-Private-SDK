//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_password;
    NSNumber *_channel;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSNumber *channel; // @synthesize channel=_channel;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;

@end


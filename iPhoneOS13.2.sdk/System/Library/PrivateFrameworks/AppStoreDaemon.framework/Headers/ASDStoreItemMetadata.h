//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_propertiesDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *propertiesDictionary; // @synthesize propertiesDictionary=_propertiesDictionary;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)storeTransationID;
- (id)requiredDeviceCapabilities;
@property(readonly, nonatomic) long long storeItemIdentifier;
- (id)cancelDownloadURL;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithDictionary:(id)arg1;

@end


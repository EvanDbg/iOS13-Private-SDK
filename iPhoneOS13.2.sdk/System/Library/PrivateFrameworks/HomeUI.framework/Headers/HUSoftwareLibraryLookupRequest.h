//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSString *_storeID;
}

@property(readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBundleID:(id)arg1 storeID:(id)arg2;

@end


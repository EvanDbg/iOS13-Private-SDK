//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, VUIAppDocumentUpdateEventDescriptor;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>
{
    VUIAppDocumentUpdateEventDescriptor *_descriptor;
}

+ (id)locationRetrieved;
+ (id)locationAuthorizationChanged;
+ (id)appRefresh;
+ (id)clearPlayHistory;
+ (id)playHistoryUpdated;
+ (id)appDidBecomeActive;
+ (id)preferredVideoFormat;
+ (id)utsk;
+ (id)restrictions;
+ (id)entitlements;
+ (id)removeFromPlayHistory;
+ (id)accountChanged;
+ (id)favorites;
+ (id)settings;
+ (id)playActivity;
+ (id)purchases;
@property(retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor; // @synthesize descriptor=_descriptor;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)coalescedEvent:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)init;

@end


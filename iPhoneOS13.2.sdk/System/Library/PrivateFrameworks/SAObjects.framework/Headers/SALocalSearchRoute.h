//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSData;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>
{
}

+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)route;
@property(copy, nonatomic) NSData *sessionState;
@property(copy, nonatomic) NSData *routeId;
@property(copy, nonatomic) NSData *routeAsZilchBinary;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


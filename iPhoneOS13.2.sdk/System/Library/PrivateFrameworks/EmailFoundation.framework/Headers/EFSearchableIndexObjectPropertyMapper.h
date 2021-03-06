//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFObjectPropertyMapper-Protocol.h>

@class NSArray, NSDictionary;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper>
{
    NSDictionary *_children;
    NSArray *_attributes;
}

@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
// - (void).cxx_destruct;
- (id)childForKey:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithChildren:(id)arg1 attributes:(id)arg2;
- (id)initWithChildren:(id)arg1;

@end


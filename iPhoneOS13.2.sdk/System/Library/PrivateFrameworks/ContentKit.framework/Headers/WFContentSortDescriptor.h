//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFContentPropertyContainer-Protocol.h>

@class NSSet, WFContentProperty;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer>
{
    BOOL _ascending;
    WFContentProperty *_property;
    id /* CDUnknownBlockType */ _comparator;
}

+ (id)randomSortDescriptor;
+ (id)sortDescriptorWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) WFContentProperty *property; // @synthesize property=_property;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *containedProperties;
- (id)description;
- (id)initWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(CDUnknownBlockType)arg3;

@end


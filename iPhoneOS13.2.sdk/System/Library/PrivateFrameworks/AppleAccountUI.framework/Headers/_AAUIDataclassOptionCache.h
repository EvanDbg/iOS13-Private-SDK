//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface _AAUIDataclassOptionCache : NSObject
{
    NSDictionary *_dataclassOptions;
    NSArray *_filteredDataclasses;
}

@property(copy, nonatomic) NSArray *filteredDataclasses; // @synthesize filteredDataclasses=_filteredDataclasses;
@property(copy, nonatomic) NSDictionary *dataclassOptions; // @synthesize dataclassOptions=_dataclassOptions;
// - (void).cxx_destruct;
- (id)initWithDataclassOptions:(NSDictionary )arg1;

@end


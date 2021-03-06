//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray, TUGroupTitle;

@interface TUResultGroup : NSObject <NSCopying>
{
    TUGroupTitle *_title;
    NSMutableArray *_resultsCache;
}

@property(retain, nonatomic) NSMutableArray *resultsCache; // @synthesize resultsCache=_resultsCache;
@property(retain, nonatomic) TUGroupTitle *title; // @synthesize title=_title;
// - (void).cxx_destruct;
@property(readonly) NSUInteger groupType;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)removeSearchItem:(id)arg1;
@property(readonly) NSArray *results;
- (id)initWithTitle:(id)arg1 results:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem;

__attribute__((visibility("hidden")))
@interface _FPItemDecorationValueResolver : NSObject
{
    FPItem *_item;
    NSUInteger _style;
}

+ (id)resolverForItem:(id)arg1 style:(NSUInteger)arg2;
// - (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (id)initWithItem:(id)arg1 style:(NSUInteger)arg2;

@end


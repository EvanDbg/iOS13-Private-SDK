//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIMultisizeImageSetSizeAndIndex : NSObject
{
    CGSize _size;
    unsigned int _index;
    long long _idiom;
    NSUInteger _subtype;
}

@property(nonatomic) NSUInteger subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) CGSize size; // @synthesize size=_size;
- (id)description;
- (id)initWithSize:(CGSize)arg1 index:(unsigned int)arg2 idiom:(long long)arg3 subtype:(NSUInteger)arg4;

@end


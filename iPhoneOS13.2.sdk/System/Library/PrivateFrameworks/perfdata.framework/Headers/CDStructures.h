//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct pooled_mean {
    struct sum _field1;
    struct sum _field2;
    NSUInteger _field3;
    NSUInteger _field4;
};

struct running_mean {
    double _field1;
    double _field2;
    NSUInteger _field3;
};

struct sum {
    double _field1;
    double _field2;
};


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct internal_state;

struct z_stream_s {
    char next_in;
    unsigned int avail_in;
    NSUInteger total_in;
    char next_out;
    unsigned int avail_out;
    NSUInteger total_out;
    char msg;
    struct internal_state state;
    /* void * CDUnknownFunctionPointerType zalloc */;
    /* void * CDUnknownFunctionPointerType zfree */;
    void opaque;
    int data_type;
    NSUInteger adler;
    NSUInteger reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned int _field2;
} CDStruct_95d471ab;


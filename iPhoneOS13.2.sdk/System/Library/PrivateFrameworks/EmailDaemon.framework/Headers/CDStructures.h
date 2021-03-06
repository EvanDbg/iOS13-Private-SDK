//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct EFAtomicObject {
    _Atomic long long cfObject;
};

struct atomic_flag {
    _Atomic BOOL _Value;
};

struct objc_method_description {
    SEL _field1;
    char _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    BOOL list;
    NSUInteger count;
    NSUInteger size;
} CDStruct_20585598;

typedef struct {
    long long list;
    NSUInteger count;
    NSUInteger size;
} CDStruct_5df41632;

typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int mailboxId:1;
    unsigned int messageId:1;
    unsigned int mailboxType:1;
    unsigned int value:1;
} CDStruct_1b0f2210;

// Ambiguous groups
typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int fromMailboxId:1;
    unsigned int messageId:1;
    unsigned int toMailboxId:1;
    unsigned int fromMailboxType:1;
    unsigned int toMailboxType:1;
} CDStruct_b83e950b;

typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int mailboxId:1;
    unsigned int messageId:1;
    unsigned int mailboxType:1;
} CDStruct_11e5c17e;


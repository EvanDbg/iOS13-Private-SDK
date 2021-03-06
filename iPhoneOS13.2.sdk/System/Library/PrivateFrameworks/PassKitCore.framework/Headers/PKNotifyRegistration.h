//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PKNotifyRegistration : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
//    struct os_unfair_lock_s _lock;
    int _token;
    NSMutableArray *_subregistrations;
    BOOL _invalidated;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (BOOL)hasSubregistrations;
- (void)removeInvalidatedSubregistration:(id)arg1;
- (id)subregisterWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end


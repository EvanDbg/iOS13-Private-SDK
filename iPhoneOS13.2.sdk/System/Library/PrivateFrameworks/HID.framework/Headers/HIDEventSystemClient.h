//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HIDEventSystemClient : NSObject
{
//     struct __IOHIDEventSystemClient _client;
    id /* CDUnknownBlockType */ _eventHandler;
    id /* CDUnknownBlockType */ _resetHandler;
    id /* CDUnknownBlockType */ _filterHandler;
    id /* CDUnknownBlockType */ _serviceHandler;
    id /* CDUnknownBlockType */ _propertyChangedHandler;
}

// - (void).cxx_destruct;
// - (struct __IOHIDEventSystemClient )client;
- (void)cancel;
- (void)activate;
- (void)setPropertyChangedHandler:(CDUnknownBlockType)arg1 matching:(id)arg2;
- (void)setServiceNotificationHandler:(CDUnknownBlockType)arg1;
- (void)setEventFilterHandler:(CDUnknownBlockType)arg1;
- (void)setResetHandler:(CDUnknownBlockType)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *services;
- (void)setMatching:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithType:(long long)arg1 andAttributes:(id)arg2;
- (id)initWithType:(long long)arg1;

@end


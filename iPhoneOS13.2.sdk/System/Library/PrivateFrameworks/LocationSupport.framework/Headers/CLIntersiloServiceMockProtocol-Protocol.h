//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@class CLIntersiloServiceMockPayload, NSString;

@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>
- (CLIntersiloServiceMockPayload *)syncgetPayloadForKey:(NSString *)arg1;
- (CLIntersiloServiceMockPayload *)syncgetPayloadForSelector:(SEL)arg1;
- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forSelector:(SEL)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol IAMEventProtocol <NSObject>
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *name;
- (BOOL)matchesWithKey:(NSString *)arg1;

@optional
@property(readonly, copy, nonatomic) NSDictionary *payload;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly, copy, nonatomic) id value;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty
{
}

@property(retain, nonatomic) NSString *region;
@property(retain, nonatomic) NSString *language;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSString *feature;
- (id)initWithValue:(id)arg1 type:(NSUInteger)arg2;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol HMBModelProperties
+ (void)setHmbShouldLogPrivateInformation:(BOOL)arg1;
+ (BOOL)hmbShouldLogPrivateInformation;
- (BOOL)hmbPropertyIsReadOnly:(NSString *)arg1;
- (BOOL)hmbPropertyWasSet:(NSString *)arg1;
- (BOOL)hmbPropertyIsAvailable:(NSString *)arg1;
- (id)hmbPropertyNamed:(NSString *)arg1;
- (id)hmbPropertyNamed:(NSString *)arg1 isSet:(BOOL )arg2;
- (id)hmbDefaultValueForPropertyNamed:(NSString *)arg1;
- (void)hmbUnsetPropertyNamed:(NSString *)arg1;
- (void)hmbSetProperty:(id)arg1 named:(NSString *)arg2;
@end


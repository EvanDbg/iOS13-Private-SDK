//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCKeyValueStoreValue-Protocol.h>

@class NTPBKeyValuePair;

@protocol FCKeyValueStoreCoding <FCKeyValueStoreValue>
+ (id)readValueFromKeyValuePair:(NTPBKeyValuePair *)arg1;
+ (int)keyValuePairType;
- (void)writeToKeyValuePair:(NTPBKeyValuePair *)arg1;
@end


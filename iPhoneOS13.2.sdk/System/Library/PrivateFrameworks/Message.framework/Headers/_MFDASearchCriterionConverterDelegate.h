//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFMessageCriterionConverterDelegate-Protocol.h>

@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>
{
}

- (NSUInteger)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(NSUInteger)arg2 forKey:(id)arg3;
- (BOOL)_shouldConvertEqualsToContainsForKey:(id)arg1;
- (id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRContainerBundlePropertyEnumerator : NSEnumerator
{
    NSDictionary *_plist;
    NSEnumerator *_enumerator;
    NSString *_propertyKey;
    Class _valueClass;
}

// - (void).cxx_destruct;
- (id)nextObject;
- (id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber, NSString;
@protocol NSObject;

@interface HMFPreference : HMFObject
{
    NSString *_key;
    NSUInteger _options;
    id <NSObject> _value;
    HMFPreference *_parent;
}

+ (id)shortDescription;
@property(readonly) __weak HMFPreference *parent; // @synthesize parent=_parent;
@property(copy) id <NSObject> value; // @synthesize value=_value;
@property(readonly) NSUInteger options; // @synthesize options=_options;
@property(readonly) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *dataValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) BOOL boolValue;
- (id)shortDescription;
- (id)initWithKey:(id)arg1 options:(NSUInteger)arg2 defaultValue:(id)arg3 parent:(id)arg4;
- (id)initWithKey:(id)arg1 options:(NSUInteger)arg2 defaultValue:(id)arg3;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUICore/_SUICEditScriptData-Protocol.h>

@class NSArray, NSString;

@interface _SUICEditScriptDataArray : NSObject <_SUICEditScriptData>
{
    NSArray *_data;
    NSString *_cachedStringValue;
}

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
@property(retain, nonatomic) NSString *cachedStringValue; // @synthesize cachedStringValue=_cachedStringValue;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL )arg3;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (id)stringValue;
- (id)stringAtIndex:(long long)arg1;
- (long long)length;
@property(readonly, copy) NSString *description;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;

@end


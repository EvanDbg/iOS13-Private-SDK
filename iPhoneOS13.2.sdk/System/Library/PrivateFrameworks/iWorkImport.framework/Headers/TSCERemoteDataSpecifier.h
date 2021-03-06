//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataSpecifier : NSObject <NSCopying>
{
    int _functionIndex;
    NSString *_symbol;
    long long _attribute;
    NSDate *_date;
    long long _year;
    NSUInteger _hashVal;
}

// + (id)specifierFromArchive:(const struct RemoteDataSpecifierArchive )arg1;
+ (id)specifierWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;
@property(readonly, nonatomic) NSUInteger hashVal; // @synthesize hashVal=_hashVal;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) int functionIndex; // @synthesize functionIndex=_functionIndex;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *functionName;
- (id)description;
// @property(readonly, nonatomic) struct TSCEValue invalidSymbolErrorValue;
// @property(readonly, nonatomic) struct TSCEValue invalidAttributeErrorValue;
@property(readonly, nonatomic) long long year; // @synthesize year=_year;
@property(readonly, nonatomic) BOOL isCurrency;
@property(readonly, nonatomic) BOOL isCold;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (void)encodeToArchive:(struct RemoteDataSpecifierArchive )arg1;
// - (id)initFromArchive:(const struct RemoteDataSpecifierArchive )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;

@end


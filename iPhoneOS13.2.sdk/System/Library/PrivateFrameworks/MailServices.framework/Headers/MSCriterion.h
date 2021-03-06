//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSSecureCoding>
{
    NSString *_type;
    NSString *_qualifier;
    id <NSObject> _criteria;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)criteria;
- (id)qualifier;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 allRequired:(BOOL)arg2;
- (id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3;
- (id)description;
- (id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3;
- (id)init;

@end


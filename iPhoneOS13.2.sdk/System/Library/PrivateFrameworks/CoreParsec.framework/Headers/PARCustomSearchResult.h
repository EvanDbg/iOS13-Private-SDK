//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCustom.h>

@class NSString;

@interface PARCustomSearchResult : SFCustom
{
    NSString *_fbr;
    NSString *_srf;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *srf; // @synthesize srf=_srf;
@property(readonly, copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFBR:(id)arg1 srf:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVTCoreModelCategoryPairing : NSObject
{
    long long _pairedCategory;
    NSString *_localizedPairedTitle;
    NSString *_localizedPairTitle;
    NSString *_localizedUnpairTitle;
}

@property(readonly, copy, nonatomic) NSString *localizedUnpairTitle; // @synthesize localizedUnpairTitle=_localizedUnpairTitle;
@property(readonly, copy, nonatomic) NSString *localizedPairTitle; // @synthesize localizedPairTitle=_localizedPairTitle;
@property(readonly, copy, nonatomic) NSString *localizedPairedTitle; // @synthesize localizedPairedTitle=_localizedPairedTitle;
@property(readonly, nonatomic) long long pairedCategory; // @synthesize pairedCategory=_pairedCategory;
- (id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4;

@end

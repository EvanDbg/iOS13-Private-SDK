//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult
{
    NSMutableArray *_posterRepresentations;
    NSString *_descriptionLeadInText;
}

@property(readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;
// - (void).cxx_destruct;
- (id)postersWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyStatistic.h>

@class TIAutocorrectionList, TICandidateRequestToken;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic
{
    TIAutocorrectionList *_autocorrections;
    TICandidateRequestToken *_requestToken;
}

@property(retain, nonatomic) TICandidateRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) TIAutocorrectionList *autocorrections; // @synthesize autocorrections=_autocorrections;
// - (void).cxx_destruct;
- (void)visitRecordAutocorrections:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSClue.h>

@interface CLSMeaningClue : CLSClue
{
    id _relatedData;
}

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
@property(retain) id relatedData; // @synthesize relatedData=_relatedData;
// - (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToClue:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFSpeakTextLanguagePickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
}

// - (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)availableLanguageCodes;
- (id)defaultLanguageCode;

@end


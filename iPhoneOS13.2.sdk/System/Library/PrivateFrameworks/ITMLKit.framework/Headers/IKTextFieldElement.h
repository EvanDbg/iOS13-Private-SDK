//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKTextElement.h>

@class IKAppKeyboard;

@interface IKTextFieldElement : IKTextElement
{
    IKAppKeyboard *_keyboard;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) IKAppKeyboard *keyboard; // @synthesize keyboard=_keyboard;
// - (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end


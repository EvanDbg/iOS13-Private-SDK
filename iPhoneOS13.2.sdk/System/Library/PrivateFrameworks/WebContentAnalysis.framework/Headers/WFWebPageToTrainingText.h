//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebContentAnalysis/WFWebPageDecorator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFWebPageToTrainingText : WFWebPageDecorator
{
    NSString *categorySignature;
}

+ (id)signatureForCategory:(NSUInteger)arg1;
+ (id)documentSignature;
- (void)dealloc;
- (id)rawPlainText;
- (void)setCategorySignature:(id)arg1;
- (id)categorySignature;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SXComponentSizer, SXLayoutOptions;
@protocol SXComponent, SXComponentLayout, SXComponentSizerFactory, SXDOMObjectProviding;

@protocol SXComponentSizerEngine 
- (void)removeFactory:(id <SXComponentSizerFactory>)arg1;
- (void)addFactory:(id <SXComponentSizerFactory>)arg1;
- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutOptions:(SXLayoutOptions *)arg3 DOMObjectProvider:(id <SXDOMObjectProviding>)arg4;
@end

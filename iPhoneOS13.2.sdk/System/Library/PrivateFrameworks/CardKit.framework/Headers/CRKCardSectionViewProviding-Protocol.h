//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray;
@protocol CRCard, CRCardSection;

@protocol CRKCardSectionViewProviding 
@property(readonly, nonatomic) NSArray *viewConfigurations;
@property(readonly, nonatomic) id <CRCard> card;

@optional
- (_Bool)vetoDisplayOfCardSection:(id <CRCardSection>)arg1;
- (unsigned long long)displayPriorityForCardSection:(id <CRCardSection>)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTransitTicketDetailViewController.h>

#import <PassKitUI/PKTransitTicketDetailDataSource-Protocol.h>

@class NSMutableArray, PKFelicaPassProperties;

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>
{
    NSMutableArray *_train1Titles;
    NSMutableArray *_train2Titles;
    NSMutableArray *_train1Values;
    NSMutableArray *_train2Values;
    PKFelicaPassProperties *_properties;
}

@property(readonly, nonatomic) PKFelicaPassProperties *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
- (void)_prepareLabelsAndValues;
- (id)_transitTicketValueForDetail:(NSUInteger)arg1 forSecondaryTrain:(BOOL)arg2;
- (id)_transitTicketTitleForDetail:(NSUInteger)arg1;
- (id)transitTicketDetailValueForRow:(NSUInteger)arg1 leg:(NSUInteger)arg2;
- (id)transitTicketDetailTitleForRow:(NSUInteger)arg1 leg:(NSUInteger)arg2;
- (long long)transitTicketDetailNumberOfRowsForLeg:(NSUInteger)arg1;
- (id)titleForLeg:(NSUInteger)arg1;
- (NSUInteger)numberOfLegs;
- (id)initWithFelicaProperty:(id)arg1;

@end


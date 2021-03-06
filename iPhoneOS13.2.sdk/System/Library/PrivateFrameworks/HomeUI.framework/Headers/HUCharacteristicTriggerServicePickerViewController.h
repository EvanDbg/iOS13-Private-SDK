//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUInstructionsTableViewController.h>

@class HFCharacteristicTriggerBuilder, HUCharacteristicTriggerServicePickerContentViewController;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController
{
}

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (NSUInteger)sourceForCharacteristicTriggerBuilder:(id)arg1;
+ (BOOL)canPickServicesFromSource:(NSUInteger)arg1 home:(id)arg2;
@property(nonatomic) __weak id <HUTriggerEditorDelegate> delegate;
@property(readonly, nonatomic) NSUInteger source;
@property(readonly, nonatomic) NSUInteger mode;
@property(readonly, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property(readonly, nonatomic) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidLoad;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(NSUInteger)arg2 source:(NSUInteger)arg3 delegate:(id)arg4;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;

@end


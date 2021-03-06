//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanListGroup : NSObject <PSSpecifierGroup>
{
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
}

@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
// - (void).cxx_destruct;
- (void)selectPlanWithSpecifier:(id)arg1;
- (void)addNewPlanPressed:(id)arg1;
- (void)listController:(id)arg1 didSelectSpecifier:(id)arg2;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

@end


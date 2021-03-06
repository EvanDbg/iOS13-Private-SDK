//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

#import <CarPlaySupport/CPGridTemplateProviding-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPGridTemplate, NSArray;

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding>
{
    NSArray *_gridButtons;
}

@property(retain, nonatomic) NSArray *gridButtons; // @synthesize gridButtons=_gridButtons;
// - (void).cxx_destruct;
- (void)didSelectButton:(id)arg1;
- (void)setControl:(id)arg1 enabled:(BOOL)arg2;
- (id)_buttonForIdentifier:(id)arg1;
- (void)_viewDidLoad;
@property(readonly, nonatomic) CPGridTemplate *gridTemplate;
- (id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2;

@end


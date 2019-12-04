//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

#import <iWorkImport/TSWPCitationRecordHosting-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPBibliographySmartField : TSWPSmartField <TSWPCitationRecordHosting>
{
    NSArray *_citationRecords;
    _Bool _isLocalizable;
}

+ (_Bool)isValidBibliographyField:(id)arg1;
- (_Bool)allowsPasteAsSmartField;
- (id)citationSmartFields;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (int)smartFieldKind;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) _Bool isLocalizable;
@property(copy, nonatomic) NSArray *citationRecords;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

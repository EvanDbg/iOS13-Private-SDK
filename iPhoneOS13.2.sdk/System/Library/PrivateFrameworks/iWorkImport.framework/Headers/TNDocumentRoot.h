//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import <iWorkImport/TSTFormsSheetProvider-Protocol.h>
#import <iWorkImport/TSTResolverContainerNameProvider-Protocol.h>

@class NSArray, NSMutableArray, NSString, TNHyperlinkController, TNTheme, TNUIState, TSKTreeNode, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider, TSTFormsSheetProvider>
{
    NSString *_paperID;
    CGSize _pageSize;
    BOOL _printingAllSheets;
    TNTheme *_theme;
    TSKTreeNode *_sidebarOrder;
    TNUIState *_uiState;
    TNHyperlinkController *_tn_hyperlinkController;
    NSMutableArray *_mutableSheets;
    TSSStylesheet *_stylesheet;
}

+ (BOOL)shouldShowImportedDataNotificationsOnOpen;
+ (CGSize)previewImageMaxSizeForType:(NSUInteger)arg1;
+ (CGSize)previewImageSizeForType:(NSUInteger)arg1;
@property(retain, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) NSMutableArray *mutableSheets; // @synthesize mutableSheets=_mutableSheets;
@property(retain, nonatomic) TNHyperlinkController *tn_hyperlinkController; // @synthesize tn_hyperlinkController=_tn_hyperlinkController;
@property(nonatomic, getter=isPrintingAllSheets) BOOL printingAllSheets; // @synthesize printingAllSheets=_printingAllSheets;
@property(retain, nonatomic) TNUIState *uiState; // @synthesize uiState=_uiState;
@property(retain, nonatomic) TSKTreeNode *sidebarOrder; // @synthesize sidebarOrder=_sidebarOrder;
@property(readonly, nonatomic) TNTheme *theme; // @synthesize theme=_theme;
// - (void).cxx_destruct;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(NSUInteger)arg1 inTextStorage:(id)arg2;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (id)p_previewImageWithImageSize:(CGSize)arg1;
- (CGSize)p_adjustCapturedContentSize:(CGSize)arg1 toAspectRatio:(CGSize)arg2;
- (CGRect)p_contentFrameToCaptureForSheet:(id)arg1;
- (id)previewImageForSize:(CGSize)arg1;
- (double)p_imageBorderForSize:(CGSize)arg1;
- (id)freehandDrawingToolkitUIState;
- (BOOL)prepareAndValidateSidecarViewStateRootWithVersionUUIDMismatch:(id)arg1 sidecarDocumentRevision:(id)arg2 originalDocumentViewStateRoot:(id)arg3;
- (id)nearestDisplayableSheetToSheet:(id)arg1;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (void)documentDidLoad;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1;
- (id)p_chartsWantingDeferredUpgrade;
- (BOOL)isMultiPageForQuickLook;
- (void)sheet:(id)arg1 removedDrawable:(id)arg2;
- (void)sheet:(id)arg1 insertedDrawable:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) BOOL removedAllQuickCalcFunctions;
@property(copy, nonatomic) NSArray *selectedQuickCalcFunctions;
- (id)childEnumerator;
- (BOOL)isPendingTableNameUniquification;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)p_resolverContainerForResolver:(id)arg1;
- (void)tableUID:(const UUIDData_5fbc143e )arg1 changedToTableUID:(const UUIDData_5fbc143e )arg2;
- (BOOL)isTableLinkedToAForm:(const UUIDData_5fbc143e )arg1;
- (BOOL)containsForms;
- (void)p_buildSidebarOrder;
- (void)p_removeSidebarNodeForSheet:(id)arg1;
- (void)p_addSidebarNodeForSheet:(id)arg1;
- (void)setSidebarChildren:(id)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic, getter=isPrintPreviewSupported) BOOL printPreviewSupported;
@property(copy, nonatomic) NSString *printerID;
- (BOOL)validName:(id)arg1 forRenamingSheet:(id)arg2;
- (BOOL)validNameForNewSheet:(id)arg1;
- (BOOL)shouldShowComments;
- (void)moveSheetFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)insertSheet:(id)arg1 sheetIndex:(NSUInteger)arg2 forPasteOrUndoDelete:(BOOL)arg3 context:(id)arg4;
- (void)removeSheet:(id)arg1;
- (void)addSheet:(id)arg1 dolcContext:(id)arg2;
- (void)removeAllSheets;
- (id)activeSheet;
- (id)uniqueNameForSheet:(id)arg1 appendNewTag:(BOOL)arg2;
- (id)untitledSheetName;
- (void)prepareNewDocumentWithTemplateIdentifier:(id)arg1 bundle:(id)arg2 documentLocale:(id)arg3;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (NSUInteger)p_tableCountForSheet:(id)arg1;
@property(readonly, nonatomic) NSUInteger tableCount;
@property(readonly, copy, nonatomic) NSArray *sheets;
- (void)setImportedPaperID:(id)arg1 printerID:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (NSUInteger)applicationType;
- (void)initializeForImport;
- (void)initializeHardCodedBlankDocument;
- (id)initWithContext:(id)arg1;
@property(nonatomic) CGSize pageSize;
@property(copy, nonatomic) NSString *paperID;

@end


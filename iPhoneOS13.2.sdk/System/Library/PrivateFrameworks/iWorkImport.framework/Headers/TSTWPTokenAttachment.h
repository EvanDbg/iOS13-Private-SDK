//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPUIGraphicalAttachment.h>

@class TSTExpressionNode;

__attribute__((visibility("hidden")))
@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment
{
    TSTExpressionNode *mExpressionNode;
    BOOL mActive;
    BOOL mSelected;
    BOOL mHighlighted;
    BOOL mNeverShowsMenu;
    CGSize mTextSize;
    CGRect mMenuRect;
    CGImageRef mCachedImage;
    double mCachedImageScreenScale;
    BOOL mInInvalidate;
}

@property(nonatomic) double cachedImageScreenScale; // @synthesize cachedImageScreenScale=mCachedImageScreenScale;
@property(nonatomic, getter=neverShowsMenu) BOOL neverShowsMenu; // @synthesize neverShowsMenu=mNeverShowsMenu;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=mHighlighted;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=mSelected;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=mActive;
@property(retain, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=mExpressionNode;
- (id)description;
//  (void)saveToArchive:(struct TokenAttachmentArchive )arg1 archiver:(id)arg2;
//  (void)loadFromArchive:(const struct TokenAttachmentArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)invalidate;
@property(nonatomic) CGImageRef cachedImage;
- (void)requestRedraw;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2;
- (id)copyIntoContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;

@end


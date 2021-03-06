//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EQKitEnvironment, NSData;
@protocol EQKitExpression;

__attribute__((visibility("hidden")))
@interface EQKitEquation : NSObject
{
    id <EQKitExpression> mRoot;
    NSData *mSource;
    EQKitEnvironment *mEnvironment;
}

+ (id)mathMLStringFromLaTeXString:(id)arg1 environment:(id)arg2 error:(id )arg3;
+ (id)equationSourceFromDataProvider:(CGDataProvider )arg1;
+ (id)equationSourceFromPDFData:(id)arg1;
+ (BOOL)isEquationInPDFData:(id)arg1;
+ (id)equationSourceFromXMLMetadata:(id)arg1;
+ (id)xmlMetadataFromEquationSource:(id)arg1;
// + (id)equationWithXMLDoc:(struct _xmlDoc )arg1 node:(struct _xmlNode )arg2 environment:(id)arg3 error:(id )arg4;
+ (id)equationWithString:(id)arg1 format:(int)arg2 error:(id )arg3;
+ (id)equationWithString:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id )arg4;
+ (id)equationWithData:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id )arg4;
+ (int)formatFromString:(id)arg1;
+ (int)formatFromData:(id)arg1;
@property(readonly, nonatomic) EQKitEnvironment *environment; // @synthesize environment=mEnvironment;
@property(readonly, nonatomic) id <EQKitExpression> root; // @synthesize root=mRoot;
- (id)description;
- (void)dealloc;
- (id)newLayout;
- (BOOL)isBaseFontNameUsed;
- (id)pdfDataWithLayout:(id)arg1 layoutContext:(id)arg2 sourceString:(id)arg3 tightFit:(BOOL)arg4;
- (id)pdfDataWithLayoutContext:(id)arg1 baselineOffset:(double )arg2 sourceString:(id)arg3;
// - (BOOL)exportToXMLWriter:(struct _xmlTextWriter )arg1 ns:(const char )arg2 prefix:(const char )arg3 characterCount:(int )arg4;
- (id)initWithRoot:(id)arg1 source:(id)arg2;
- (id)init;

@end


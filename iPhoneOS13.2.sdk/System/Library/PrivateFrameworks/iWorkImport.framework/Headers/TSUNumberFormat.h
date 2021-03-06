//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUNumberFormatting-Protocol.h>

@class NSArray, NSIndexSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>
{
    int _valueType;
    unsigned short _decimalPlaces;
    int _negativeStyle;
    int _fractionAccuracy;
    BOOL _useAccountingStyle;
    BOOL _showThousandsSeparator;
    BOOL _formatStringRequiresSuppressionOfMinusSign;
    BOOL _useScientificFormattingAutomatically;
    BOOL _ignoreDecimalPlacesForZeroValue;
    BOOL _isCustom;
    BOOL _formatStringContainsTabCharacter;
    BOOL _formatContainsSpecialTokens;
    BOOL _formatContainsIntegerToken;
    BOOL _requiresFractionReplacement;
    BOOL _isTextFormat;
    BOOL _baseUseMinusSign;
    unsigned char _base;
    unsigned short _basePlaces;
    unsigned char _numberOfHashDecimalPlaceholders;
    unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
    unsigned short _indexFromRightOfLastDigitPlaceholder;
    unsigned char _minimumIntegerWidth;
    unsigned char _decimalWidth;
    unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
    double _scaleFactor;
    NSString *_formatString;
    NSString *_currencyCode;
    NSArray *_interstitialStrings;
    NSIndexSet *_interstitialStringInsertionIndexes;
    NSString *_formatName;
    NSUUID *_customFormatKey;
    NSString *_prefixString;
    NSString *_suffixString;
}

+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(BOOL)arg14 isCustom:(BOOL)arg15 formatName:(id)arg16;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8;
//  (id)instanceWithArchive:(const struct FormatStructArchive )arg1 unarchiver:(id)arg2;
// + (id)numberFormatFromFormatStruct:(CDStruct_b1066b25)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)customNumberFormatTokens;
- (BOOL)isEquivalent:(id)arg1;
- (id)stringFromString:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 forceSuppressMinusSign:(BOOL)arg5;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(BOOL)arg4;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 forceSuppressMinusSign:(BOOL)arg3;
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (BOOL)usesTabs;
- (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)arg1;
- (BOOL)ignoreDecimalPlacesForZeroValue;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (BOOL)useScientificFormattingAutomatically;
- (BOOL)customFormatShouldAutoInsertPercentSymbol;
- (BOOL)hasValidDecimalPlaces;
- (BOOL)baseUseMinusSign;
- (unsigned short)basePlaces;
- (unsigned short)base;
- (BOOL)usesTextFormatForValue:(double)arg1;
- (BOOL)canFormatText;
- (BOOL)isTextFormat;
- (double)scaleFactor;
- (BOOL)usesAccountingStyle;
- (int)fractionAccuracy;
- (BOOL)showThousandsSeparator;
- (int)negativeStyle;
- (id)currencyCode;
- (id)formatString;
- (id)suffixString;
- (id)prefixString;
- (unsigned short)decimalPlaces;
- (int)valueType;
- (id)customFormatKey;
- (BOOL)isCustom;
- (id)formatName;
- (void)setFormatName:(id)arg1;
- (void)dealloc;
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(BOOL)arg14 isCustom:(BOOL)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(BOOL)arg23 formatName:(id)arg24 customFormatKey:(id)arg25;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 isCustom:(BOOL)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(BOOL)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8;
- (id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(BOOL)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(BOOL)arg13 formatName:(id)arg14;
- (id)init;
- (id)baseStringFromDouble:(double)arg1;
//  (id)initWithArchive:(const struct FormatStructArchive )arg1 unarchiver:(id)arg2;
//  (void)saveToArchive:(struct FormatStructArchive )arg1 archiver:(id)arg2;
// - (CDStruct_b1066b25)formatStructAndCustomFormatData:(id )arg1;

@end


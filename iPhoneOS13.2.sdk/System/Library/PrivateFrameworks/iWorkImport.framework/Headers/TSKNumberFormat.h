//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>


__attribute__((visibility("hidden")))
@interface TSKNumberFormat : TSKFormat <NSCopying>
{
    BOOL _showThousandsSeparator;
    BOOL _usePlusSign;
    int _negativeStyle;
    NSUInteger _decimalPlaces;
}

@property(readonly, nonatomic) BOOL usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) BOOL showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle; // @synthesize negativeStyle=_negativeStyle;
@property(readonly, nonatomic) NSUInteger decimalPlaces; // @synthesize decimalPlaces=_decimalPlaces;
- (id)description;
- (id)asNumberFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithFormatType:(int)arg1 decimalPlaces:(NSUInteger)arg2 negativeStyle:(int)arg3 showSeparator:(BOOL)arg4;
- (id)initWithFormatType:(int)arg1;

@end


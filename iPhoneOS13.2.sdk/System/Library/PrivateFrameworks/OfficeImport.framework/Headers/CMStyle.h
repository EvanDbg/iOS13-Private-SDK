//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStyle : NSObject <NSCopying>
{
    NSMutableDictionary *properties;
    NSMutableString *mStyleString;
}

// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)appendDefaultBorderStyle;
- (void)appendSizeInfoFromRect:(CGRect)arg1;
- (void)appendOriginInfoFromPoint:(CGPoint)arg1;
- (void)appendPositionInfoFromRect:(CGRect)arg1;
- (void)appendPropertyString:(id)arg1;
- (void)appendPropertyForName:(id)arg1 color:(id)arg2;
- (void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 floatValue:(float)arg2;
- (void)appendPropertyForName:(id)arg1 intValue:(int)arg2;
- (void)appendPropertyForName:(id)arg1 stringValue:(id)arg2;
- (void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3;
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2;
- (id)cacheFriendlyCSSStyleString;
- (id)cssStyleString;
- (void)addPropertiesToCSSStyleString:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)addProperty:(id)arg1 forKey:(id)arg2;
- (id)properties;
- (id)initWithStyle:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCEQuotedRefPathSplitter : NSObject
{
    NSMutableArray *_quotedComponents;
    NSString *_localizedBlankGroupName;
    NSString *_localizedErrorGroupName;
    NSString *_localizedTrueGroupName;
    NSString *_localizedFalseGroupName;
    NSString *_localizedTrueGroupNameForColumn;
    NSString *_localizedFalseGroupNameForColumn;
}

+ (_Bool)isRightParen:(id)arg1;
+ (_Bool)isLeftParen:(id)arg1;
+ (_Bool)isColon:(id)arg1;
+ (_Bool)isDollar:(id)arg1;
+ (_Bool)isSingleQuotePair:(id)arg1 ch2:(id)arg2;
+ (_Bool)isSingleQuote:(id)arg1;
@property(retain, nonatomic) NSString *localizedFalseGroupNameForColumn; // @synthesize localizedFalseGroupNameForColumn=_localizedFalseGroupNameForColumn;
@property(retain, nonatomic) NSString *localizedTrueGroupNameForColumn; // @synthesize localizedTrueGroupNameForColumn=_localizedTrueGroupNameForColumn;
@property(retain, nonatomic) NSString *localizedFalseGroupName; // @synthesize localizedFalseGroupName=_localizedFalseGroupName;
@property(retain, nonatomic) NSString *localizedTrueGroupName; // @synthesize localizedTrueGroupName=_localizedTrueGroupName;
@property(retain, nonatomic) NSString *localizedErrorGroupName; // @synthesize localizedErrorGroupName=_localizedErrorGroupName;
@property(retain, nonatomic) NSString *localizedBlankGroupName; // @synthesize localizedBlankGroupName=_localizedBlankGroupName;
- (id)description;
- (id)componentAtIndex:(unsigned long long)arg1;
- (unsigned long long)numComponents;
- (void)addComponent:(id)arg1;
- (void)splitRefPath:(id)arg1;
- (id)initWithComponents:(id)arg1 aggregateFunction:(id)arg2;
- (id)initWithReferenceString:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon
{
    NSString *_templateImageName;
}

@property(readonly, nonatomic) NSString *templateImageName; // @synthesize templateImageName=_templateImageName;
// - (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initForSubclass;
- (id)initWithTemplateImageName:(id)arg1;

@end


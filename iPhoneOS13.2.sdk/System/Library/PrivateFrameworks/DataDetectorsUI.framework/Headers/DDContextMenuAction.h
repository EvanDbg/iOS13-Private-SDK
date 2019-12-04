//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSURL;

@interface DDContextMenuAction : NSObject
{
    NSURL *_url;
    // Error parsing type: ^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}, name: _result
    NSAttributedString *_menuTitle;
}

+ (id)contextMenuConfigurationWithURL:(id)arg1 inView:(id)arg2 context:(id)arg3 menuIdentifier:(id)arg4;
+     // Error parsing type: @48@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16@24@32@40, name: contextMenuConfigurationWithResult:inView:context:menuIdentifier:
+ (id)contextMenuConfigurationForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 inView:(id)arg5 context:(id)arg6 menuIdentifier:(id)arg7;
+ (id)contextMenuConfigurationAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 inView:(id)arg3 context:(id)arg4 menuIdentifier:(id)arg5;
+ (id)updateContext:(id)arg1 withSourceRect:(struct CGRect)arg2;
-     // Error parsing type: @40@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16@24@32, name: previewActionForResult:URL:context:
-     // Error parsing type: v64@0:8@16@24@32^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}40@48@56, name: _updateMenuElementItems:withActionClasses:view:result:URL:context:
- (void)_updateMenuElementItems:(id)arg1 withActions:(id)arg2 view:(id)arg3;
- (void)dealloc;
-     // Error parsing type: v32@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16@24, name: commonInitWithResult:URL:
-     // Error parsing type: @32@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16@24, name: initWithResult:URL:
- (id)initForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5;
- (id)initAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)contextMenuConfigurationWithIdentifier:(id)arg1 inView:(id)arg2 context:(id)arg3;

@end

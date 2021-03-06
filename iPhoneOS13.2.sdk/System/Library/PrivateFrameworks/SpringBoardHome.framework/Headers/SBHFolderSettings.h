//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface SBHFolderSettings : PTSettings
{
    BOOL _allowNestedFolders;
    BOOL _pinchToClose;
    BOOL _oneColumnAtATime;
    BOOL _sortsIconsAlphabetically;
    double _minPinchScale;
}

+ (id)settingsControllerModule;
@property(nonatomic) BOOL sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
@property(nonatomic) BOOL oneColumnAtATime; // @synthesize oneColumnAtATime=_oneColumnAtATime;
@property(nonatomic) double minPinchScale; // @synthesize minPinchScale=_minPinchScale;
@property(nonatomic) BOOL pinchToClose; // @synthesize pinchToClose=_pinchToClose;
@property(nonatomic) BOOL allowNestedFolders; // @synthesize allowNestedFolders=_allowNestedFolders;
- (void)setDefaultValues;

@end


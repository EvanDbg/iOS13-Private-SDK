//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDAssociatedApp, NSArray, NSString;

@interface GEOAssociatedApp : NSObject
{
    GEOPDAssociatedApp *_geoAssociatedApp;
}

@property(retain, nonatomic) GEOPDAssociatedApp *geoAssociatedApp; // @synthesize geoAssociatedApp=_geoAssociatedApp;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *alternateAppAdamIds;
@property(readonly, nonatomic) NSString *preferredAppAdamId;
@property(readonly, nonatomic) BOOL hasPreferredAppAdamId;
- (id)initWithGEOPDAssociatedApp:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdManagerConfigurationProvider-Protocol.h>

@protocol FCNewsAppConfigurationManager;

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>
{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
// - (void).cxx_destruct;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;
- (id)init;

@end


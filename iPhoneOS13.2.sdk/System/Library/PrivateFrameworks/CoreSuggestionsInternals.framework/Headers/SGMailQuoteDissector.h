//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGMailQuoteDissector : SGPipelineDissector
{
    BOOL _paranoid;
}

- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)quotedRegionsFrom:(id)arg1 isAOSPMail:(BOOL)arg2 foundToEndOfMessage:(BOOL )arg3;
- (id)_xWrote:(id)arg1 utf8:(const char )arg2;
- (id)_tofuRegions:(id)arg1 utf8:(const char )arg2 utf16:(id)arg3 isAOSPMail:(BOOL)arg4;
- (id)initParanoid;

@end


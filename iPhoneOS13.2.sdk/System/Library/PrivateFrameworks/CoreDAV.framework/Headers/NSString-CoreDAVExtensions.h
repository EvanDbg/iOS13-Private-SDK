//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSString (CoreDAVExtensions)
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1;
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1 pathTag:(id)arg2;
+ (id)CDVStringWithNumberOfSpaces:(NSUInteger)arg1;
+ (id)CDVStringWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)CDVStringByXMLUnquoting;
- (id)CDVStringByXMLQuoting;
- (id)CDVStringByAddingPercentEscapesForUserOrPassword;
- (BOOL)CDVIsHTTPStatusLineWithStatusCode:(long long)arg1;
- (id)CDVStringByRemovingTerminatingSlashIfNeeded;
- (id)CDVStringByAppendingSlashIfNeeded;
- (id)CDVStringByRemovingPercentEscapesForHREF;
- (id)CDVStringByAddingPercentEscapesForHREFIncludingPercent;
- (id)CDVStringByAddingPercentEscapesForHREF;
- (id)initWithCDVNameSpace:(id)arg1 andName:(id)arg2;
@end


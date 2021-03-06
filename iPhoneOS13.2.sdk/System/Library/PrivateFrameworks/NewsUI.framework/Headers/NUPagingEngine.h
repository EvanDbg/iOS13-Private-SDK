//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPagingFactory-Protocol.h>

@class NUArticlePageFactory, NUWelcomeToNewsPageFactory;

@interface NUPagingEngine : NSObject <NUPagingFactory>
{
    NUArticlePageFactory *_articlePageFactory;
    NUWelcomeToNewsPageFactory *_welcomeToNewsPageFactory;
}

@property(readonly, nonatomic) NUWelcomeToNewsPageFactory *welcomeToNewsPageFactory; // @synthesize welcomeToNewsPageFactory=_welcomeToNewsPageFactory;
@property(readonly, nonatomic) NUArticlePageFactory *articlePageFactory; // @synthesize articlePageFactory=_articlePageFactory;
// - (void).cxx_destruct;
- (id)paging:(id)arg1 byRemovingPage:(id)arg2;
- (id)paging:(id)arg1 byAddingPage:(id)arg2 afterPage:(id)arg3;
- (id)createPagingForArticleIDs:(id)arg1;
- (id)initWithArticlePageFactory:(id)arg1 welcomeToNewsPageFactory:(id)arg2;

@end


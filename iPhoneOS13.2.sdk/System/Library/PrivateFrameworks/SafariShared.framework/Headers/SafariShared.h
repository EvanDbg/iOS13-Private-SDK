#import <SafariShared/APSConnectionDelegate-Protocol.h>
#import <SafariShared/CDStructures.h>
#import <SafariShared/CKContextResponse-SafariSharedExtras.h>
#import <SafariShared/CNContact-SafariSharedExtras.h>
#import <SafariShared/CNContactStore-SafariSharedExtras.h>
#import <SafariShared/NSArray-ParsecExtras.h>
#import <SafariShared/NSBundle-SafariSharedExtras.h>
#import <SafariShared/NSCharacterSet-SafariSharedExtras.h>
#import <SafariShared/NSDate-WBSNSDateExtras.h>
#import <SafariShared/NSError-SafariSharedCloudKitExtras.h>
#import <SafariShared/NSLocale-WBSNSLocaleExtras.h>
#import <SafariShared/NSNumber-WBSParsecExtras.h>
#import <SafariShared/NSProcessInfo-SafariSharedExtras.h>
#import <SafariShared/NSString-WBSFaviconProviderNSStringExtras.h>
#import <SafariShared/NSURL-SafariSharedExtras.h>
#import <SafariShared/NSURLConnection-WBSNSURLConnectionExtras.h>
#import <SafariShared/NSURLResponse-SafariSharedExtras.h>
#import <SafariShared/NSURLSession-WBSNSURLSessionExtras.h>
#import <SafariShared/PARSessionDelegate-Protocol.h>
#import <SafariShared/SFSearchResult-SafariSharedExtras.h>
#import <SafariShared/SafariSearchHelper-Protocol.h>
#import <SafariShared/UABestAppSuggestionManagerDelegate-Protocol.h>
#import <SafariShared/UIColor-SafariSharedExtras.h>
#import <SafariShared/UIImage-SafariSharedExtras.h>
#import <SafariShared/WBSAddressBookMatch.h>
#import <SafariShared/WBSAnalyticsLogger-WBSAnalyticsLoggerExtras.h>
#import <SafariShared/WBSAppLink.h>
#import <SafariShared/WBSAppleAccountInformationProvider.h>
#import <SafariShared/WBSAppleAccountInformationProviding-Protocol.h>
#import <SafariShared/WBSAsynchronousRequest-Protocol.h>
#import <SafariShared/WBSAsynchronousRequestHelper.h>
#import <SafariShared/WBSAutomaticReaderActivationManager.h>
#import <SafariShared/WBSBookmarkAndHistoryCompletionMatch.h>
#import <SafariShared/WBSBookmarkFolderTouchIconProvider.h>
#import <SafariShared/WBSBookmarkFolderTouchIconProviderInfo.h>
#import <SafariShared/WBSBookmarkFolderTouchIconProviderRequestInfo.h>
#import <SafariShared/WBSBrowserTabCompletionInfo.h>
#import <SafariShared/WBSBrowserTabCompletionMatch.h>
#import <SafariShared/WBSBrowserTabCompletionProvider.h>
#import <SafariShared/WBSCache.h>
#import <SafariShared/WBSCacheRetainReleasePolicy.h>
#import <SafariShared/WBSCertificateWarningPageContext.h>
#import <SafariShared/WBSClass.h>
#import <SafariShared/WBSCleanupHandler.h>
#import <SafariShared/WBSCloudBookmarksDevice.h>
#import <SafariShared/WBSCloudBookmarksMigrationCoordinator.h>
#import <SafariShared/WBSCloudBookmarksMigrationReadinessDecider.h>
#import <SafariShared/WBSCloudBookmarksUserIdentityFetcher-Protocol.h>
#import <SafariShared/WBSCloudHistory.h>
#import <SafariShared/WBSCloudHistoryConfiguration.h>
#import <SafariShared/WBSCloudHistoryDataStore-Protocol.h>
#import <SafariShared/WBSCloudHistoryFetchResult.h>
#import <SafariShared/WBSCloudHistoryMergeOperation.h>
#import <SafariShared/WBSCloudHistoryPushAgent-Protocol.h>
#import <SafariShared/WBSCloudHistoryPushAgent.h>
#import <SafariShared/WBSCloudHistoryPushAgentProxy.h>
#import <SafariShared/WBSCloudHistoryStore.h>
#import <SafariShared/WBSCloudHistoryVisit.h>
#import <SafariShared/WBSCloudKitThrottlerDataStore-Protocol.h>
#import <SafariShared/WBSCloudTab.h>
#import <SafariShared/WBSCloudTabCloseRequest.h>
#import <SafariShared/WBSCloudTabDevice.h>
#import <SafariShared/WBSCloudTabDeviceProvider-Protocol.h>
#import <SafariShared/WBSCloudTabStore.h>
#import <SafariShared/WBSCoalescedAsynchronousWriter.h>
#import <SafariShared/WBSCoalescedAsynchronousWriterDelegate-Protocol.h>
#import <SafariShared/WBSCompletionListItem-Protocol.h>
#import <SafariShared/WBSCompletionListRankingObserver.h>
#import <SafariShared/WBSCompletionQuery.h>
#import <SafariShared/WBSContactAutoFillSet.h>
#import <SafariShared/WBSContactsEntry.h>
#import <SafariShared/WBSContactsHelper.h>
#import <SafariShared/WBSContentBlockersPreferenceManager.h>
#import <SafariShared/WBSContextResultGrouper.h>
#import <SafariShared/WBSCredentialMatch.h>
#import <SafariShared/WBSCredentialMatchCriteria.h>
#import <SafariShared/WBSCredentialMatchResult.h>
#import <SafariShared/WBSCreditCardData.h>
#import <SafariShared/WBSCreditCardDataController.h>
#import <SafariShared/WBSCreditCardFormatter.h>
#import <SafariShared/WBSCrowdsourcedFeedbackDomainNormalizer.h>
#import <SafariShared/WBSCrowdsourcedFeedbackWhitelist-Protocol.h>
#import <SafariShared/WBSCyclerBookmarkLeafRepresentation.h>
#import <SafariShared/WBSCyclerBookmarkListRepresentation.h>
#import <SafariShared/WBSCyclerBookmarkOperation-Protocol.h>
#import <SafariShared/WBSCyclerBookmarkOperationContext.h>
#import <SafariShared/WBSCyclerBookmarkRepresentation.h>
#import <SafariShared/WBSCyclerBookmarksTestSuite.h>
#import <SafariShared/WBSCyclerCloudKitMigrationTestSuite.h>
#import <SafariShared/WBSCyclerConnectionManager.h>
#import <SafariShared/WBSCyclerCreateBookmarkOperation.h>
#import <SafariShared/WBSCyclerDeleteBookmarkOperation.h>
#import <SafariShared/WBSCyclerModifyBookmarkOperation.h>
#import <SafariShared/WBSCyclerMoveBookmarkOperation.h>
#import <SafariShared/WBSCyclerOperation.h>
#import <SafariShared/WBSCyclerRandomnessUtilities.h>
#import <SafariShared/WBSCyclerService.h>
#import <SafariShared/WBSCyclerServiceProtocol-Protocol.h>
#import <SafariShared/WBSCyclerServiceProxy.h>
#import <SafariShared/WBSCyclerStatus.h>
#import <SafariShared/WBSCyclerTestRunner.h>
#import <SafariShared/WBSCyclerTestSuite-Protocol.h>
#import <SafariShared/WBSCyclerTestSuiteBookmarkAuxiliary.h>
#import <SafariShared/WBSCyclerTestTarget-Protocol.h>
#import <SafariShared/WBSCyclerTestTargetProxyController.h>
#import <SafariShared/WBSDataCache-Protocol.h>
#import <SafariShared/WBSDataCacheDelegate-Protocol.h>
#import <SafariShared/WBSDeviceEligibilityInformation.h>
#import <SafariShared/WBSDictionaryInt64.h>
#import <SafariShared/WBSDigitalHealthManager.h>
#import <SafariShared/WBSDistributedNotificationObserver.h>
#import <SafariShared/WBSEncryptedCloudKeyValueStore.h>
#import <SafariShared/WBSFaviconProvider.h>
#import <SafariShared/WBSFaviconProviderDatabaseController.h>
#import <SafariShared/WBSFaviconProviderIconInfo.h>
#import <SafariShared/WBSFaviconProviderPersistenceController.h>
#import <SafariShared/WBSFaviconProviderPrivateCache.h>
#import <SafariShared/WBSFaviconProviderRecordCache.h>
#import <SafariShared/WBSFaviconProviderUtilities.h>
#import <SafariShared/WBSFaviconRequest.h>
#import <SafariShared/WBSFaviconRequestsController.h>
#import <SafariShared/WBSFaviconResponse.h>
#import <SafariShared/WBSFileLock-Protocol.h>
#import <SafariShared/WBSFileLockFactory-Protocol.h>
#import <SafariShared/WBSFileLockFactoryPOSIX.h>
#import <SafariShared/WBSFileLockPOSIX.h>
#import <SafariShared/WBSFluidProgressAnimation.h>
#import <SafariShared/WBSFluidProgressController.h>
#import <SafariShared/WBSFluidProgressState.h>
#import <SafariShared/WBSForYouCloudTabsDataSource.h>
#import <SafariShared/WBSForYouDataSourceWeightManager.h>
#import <SafariShared/WBSForYouLinkRecommendation.h>
#import <SafariShared/WBSForYouPerSitePreferenceManager.h>
#import <SafariShared/WBSForYouRecentParsecResultsManager.h>
#import <SafariShared/WBSForYouRecommendationMediator.h>
#import <SafariShared/WBSForYouRecommendationMediatorDataSource.h>
#import <SafariShared/WBSForYouTopic.h>
#import <SafariShared/WBSForYouTopicManager.h>
#import <SafariShared/WBSFormAutoFillClassificationToCorrectionsTransformer.h>
#import <SafariShared/WBSFormAutoFillCorrectionManager.h>
#import <SafariShared/WBSFormAutoFillCorrectionSet.h>
#import <SafariShared/WBSFormAutoFillCorrectionsHistoryObserver.h>
#import <SafariShared/WBSFormAutoFillCorrectionsSQLiteStore.h>
#import <SafariShared/WBSFormAutoFillCorrectionsStore-Protocol.h>
#import <SafariShared/WBSFormAutoFillFeedbackDomainPolicyProvider-Protocol.h>
#import <SafariShared/WBSFormAutoFillFeedbackProcessor-Protocol.h>
#import <SafariShared/WBSFormAutoFillItem.h>
#import <SafariShared/WBSFormAutoFillMetadataCorrector.h>
#import <SafariShared/WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor.h>
#import <SafariShared/WBSFormAutoFillParsecDomainPolicyProvider.h>
#import <SafariShared/WBSFormAutoFillParsecFeedbackProcessor.h>
#import <SafariShared/WBSFormControlMetadata.h>
#import <SafariShared/WBSFormControlMetadataProperty.h>
#import <SafariShared/WBSFormDataController.h>
#import <SafariShared/WBSFormFieldClassificationCorrector.h>
#import <SafariShared/WBSFormFieldFingerprinter.h>
#import <SafariShared/WBSFormMetadata.h>
#import <SafariShared/WBSFormMetadataController.h>
#import <SafariShared/WBSFormToABBinder.h>
#import <SafariShared/WBSFoundInRecommendationManager.h>
#import <SafariShared/WBSFrequentlyVisitedSiteCandidate.h>
#import <SafariShared/WBSFrequentlyVisitedSitesBannedURLStore.h>
#import <SafariShared/WBSFrequentlyVisitedSitesController.h>
#import <SafariShared/WBSGeolocationPreferenceManager.h>
#import <SafariShared/WBSHistory.h>
#import <SafariShared/WBSHistoryAccessSession.h>
#import <SafariShared/WBSHistoryAccessSessionProtocol-Protocol.h>
#import <SafariShared/WBSHistoryAccessSessionProxy.h>
#import <SafariShared/WBSHistoryAgeAndItemCountLimitEnforcementPlan.h>
#import <SafariShared/WBSHistoryConnection.h>
#import <SafariShared/WBSHistoryConnectionProtocol-Protocol.h>
#import <SafariShared/WBSHistoryConnectionProxy-Protocol.h>
#import <SafariShared/WBSHistoryConnectionProxy.h>
#import <SafariShared/WBSHistoryContextController.h>
#import <SafariShared/WBSHistoryCrypto.h>
#import <SafariShared/WBSHistoryDatabaseAccessBroker.h>
#import <SafariShared/WBSHistoryDeletionPlan.h>
#import <SafariShared/WBSHistoryItem.h>
#import <SafariShared/WBSHistoryItemToTagPairsPredicate.h>
#import <SafariShared/WBSHistoryLoader-Protocol.h>
#import <SafariShared/WBSHistoryLoaderDelegate-Protocol.h>
#import <SafariShared/WBSHistoryNotification.h>
#import <SafariShared/WBSHistoryObjectCache.h>
#import <SafariShared/WBSHistoryPredicate-Protocol.h>
#import <SafariShared/WBSHistorySQLiteSchema.h>
#import <SafariShared/WBSHistorySQLiteStore.h>
#import <SafariShared/WBSHistoryService.h>
#import <SafariShared/WBSHistoryServiceURLRepresentation.h>
#import <SafariShared/WBSHistorySession.h>
#import <SafariShared/WBSHistorySessionController.h>
#import <SafariShared/WBSHistorySessionIntervalCache.h>
#import <SafariShared/WBSHistorySessionWithItems.h>
#import <SafariShared/WBSHistorySessions-Protocol.h>
#import <SafariShared/WBSHistoryStore-Protocol.h>
#import <SafariShared/WBSHistoryStoreDelegate-Protocol.h>
#import <SafariShared/WBSHistoryTag.h>
#import <SafariShared/WBSHistoryTagDatabaseController.h>
#import <SafariShared/WBSHistoryTagsPredicate.h>
#import <SafariShared/WBSHistoryTombstone.h>
#import <SafariShared/WBSHistoryTopicTag.h>
#import <SafariShared/WBSHistoryURLCompletionDataStore.h>
#import <SafariShared/WBSHistoryURLCompletionMatchData.h>
#import <SafariShared/WBSHistoryURLCompletionSession.h>
#import <SafariShared/WBSHistoryVisit.h>
#import <SafariShared/WBSHistoryVisitIdentifier.h>
#import <SafariShared/WBSIconRequest-Protocol.h>
#import <SafariShared/WBSIconResponse-Protocol.h>
#import <SafariShared/WBSImageFetchingURLSessionTaskManager.h>
#import <SafariShared/WBSImageUtilities.h>
#import <SafariShared/WBSLeadImageCache.h>
#import <SafariShared/WBSLeadImageCacheRequest.h>
#import <SafariShared/WBSLeadImageCacheResponse.h>
#import <SafariShared/WBSLeadImageSaver.h>
#import <SafariShared/WBSMetadataExtractor.h>
#import <SafariShared/WBSMultiRoundAutoFillManager.h>
#import <SafariShared/WBSMutableFormControlMetadata.h>
#import <SafariShared/WBSOnDiskDataCache.h>
#import <SafariShared/WBSOneShotTimer.h>
#import <SafariShared/WBSOneTimeCode.h>
#import <SafariShared/WBSOneTimeCodeMonitor.h>
#import <SafariShared/WBSOpenSearchDescription.h>
#import <SafariShared/WBSOpenSearchSchemaFetcher.h>
#import <SafariShared/WBSOpenSearchURLTemplate.h>
#import <SafariShared/WBSOpenSearchURLTemplateParameter.h>
#import <SafariShared/WBSOperatingSystemVersionRange.h>
#import <SafariShared/WBSPageZoomPreferenceManager.h>
#import <SafariShared/WBSParsecActionButton.h>
#import <SafariShared/WBSParsecAuxiliaryInfo.h>
#import <SafariShared/WBSParsecDFeedbackDispatcher.h>
#import <SafariShared/WBSParsecDSession.h>
#import <SafariShared/WBSParsecFeedbackDispatcher-Protocol.h>
#import <SafariShared/WBSParsecFormattedText.h>
#import <SafariShared/WBSParsecGlobalFeedbackDispatcher-Protocol.h>
#import <SafariShared/WBSParsecHiddenResultInfo.h>
#import <SafariShared/WBSParsecImageRepresentation.h>
#import <SafariShared/WBSParsecLegacySearchResult.h>
#import <SafariShared/WBSParsecModel.h>
#import <SafariShared/WBSParsecPunchout.h>
#import <SafariShared/WBSParsecResultSetPattern.h>
#import <SafariShared/WBSParsecRichText.h>
#import <SafariShared/WBSParsecSchema.h>
#import <SafariShared/WBSParsecSearchCompletionResultSet.h>
#import <SafariShared/WBSParsecSearchGenericResult-Protocol.h>
#import <SafariShared/WBSParsecSearchGenericResult.h>
#import <SafariShared/WBSParsecSearchMapsResult-Protocol.h>
#import <SafariShared/WBSParsecSearchMapsResult.h>
#import <SafariShared/WBSParsecSearchMapsResultFeedbackSender.h>
#import <SafariShared/WBSParsecSearchMapsResultFeedbackSenderClient-Protocol.h>
#import <SafariShared/WBSParsecSearchMoviesResult.h>
#import <SafariShared/WBSParsecSearchResponse.h>
#import <SafariShared/WBSParsecSearchResult-Protocol.h>
#import <SafariShared/WBSParsecSearchResult.h>
#import <SafariShared/WBSParsecSearchResultCache.h>
#import <SafariShared/WBSParsecSearchResultPresentedInCard-Protocol.h>
#import <SafariShared/WBSParsecSearchSession-Protocol.h>
#import <SafariShared/WBSParsecSearchSimpleResult-Protocol.h>
#import <SafariShared/WBSParsecSearchSimpleResult.h>
#import <SafariShared/WBSParsecSearchSportsAttributionExtraCompletionItem.h>
#import <SafariShared/WBSParsecSearchSportsResult-Protocol.h>
#import <SafariShared/WBSParsecSearchSportsResult.h>
#import <SafariShared/WBSParsecSearchUtilities.h>
#import <SafariShared/WBSParsecSportsImage.h>
#import <SafariShared/WBSParsecSportsScoreSummary.h>
#import <SafariShared/WBSParsecSubscriptionInfo.h>
#import <SafariShared/WBSParsecSubscriptionManager.h>
#import <SafariShared/WBSPasswordAutoFillUtilities.h>
#import <SafariShared/WBSPasswordEvaluation.h>
#import <SafariShared/WBSPasswordEvaluator.h>
#import <SafariShared/WBSPasswordLexiconWordList.h>
#import <SafariShared/WBSPasswordOrderedSetWordList.h>
#import <SafariShared/WBSPasswordPatternMatch.h>
#import <SafariShared/WBSPasswordPatternMatchSolver.h>
#import <SafariShared/WBSPasswordPatternMatcher.h>
#import <SafariShared/WBSPasswordPatternPartialSolution.h>
#import <SafariShared/WBSPasswordSetWordList.h>
#import <SafariShared/WBSPasswordWarningStore.h>
#import <SafariShared/WBSPasswordWordList.h>
#import <SafariShared/WBSPasswordWordListCollection.h>
#import <SafariShared/WBSPasswordWordListEntry.h>
#import <SafariShared/WBSPerSitePreference.h>
#import <SafariShared/WBSPerSitePreferenceBinaryToggleItemManager-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManager-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManagerStorageDelegate-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceTimeout.h>
#import <SafariShared/WBSPerSitePreferenceValueInformation.h>
#import <SafariShared/WBSPerSitePreferencesSQLiteStore.h>
#import <SafariShared/WBSPeriodicActivityScheduler.h>
#import <SafariShared/WBSProcessProxyOverride.h>
#import <SafariShared/WBSProtectionSpaceMatch.h>
#import <SafariShared/WBSQuerySuggestion.h>
#import <SafariShared/WBSQuickWebsiteSearchController.h>
#import <SafariShared/WBSQuickWebsiteSearchProvider.h>
#import <SafariShared/WBSQuickWebsiteSearchProviderDelegate-Protocol.h>
#import <SafariShared/WBSRadarNewProblemURLBuilder.h>
#import <SafariShared/WBSReaderConfigurationManager.h>
#import <SafariShared/WBSReaderFont.h>
#import <SafariShared/WBSReaderFontDownloadManager.h>
#import <SafariShared/WBSReaderFontManager.h>
#import <SafariShared/WBSReaderLocalizedFonts.h>
#import <SafariShared/WBSReaderNavigationPolicyDecider.h>
#import <SafariShared/WBSReaderResources.h>
#import <SafariShared/WBSRecentHistoryTopicTagController.h>
#import <SafariShared/WBSRecentWebSearchEntry.h>
#import <SafariShared/WBSRecentWebSearchesController.h>
#import <SafariShared/WBSRecentlyUsedAutoFillSet.h>
#import <SafariShared/WBSRemoteHistoryItem.h>
#import <SafariShared/WBSRemoteHistorySession.h>
#import <SafariShared/WBSRemoteHistoryVisit.h>
#import <SafariShared/WBSSQLiteStoreDelegate-Protocol.h>
#import <SafariShared/WBSSVGImageRenderingFetchOperation.h>
#import <SafariShared/WBSSVGImageRenderingObserver-Protocol.h>
#import <SafariShared/WBSSVGImageRenderingProvider.h>
#import <SafariShared/WBSSVGImageRenderingRequest.h>
#import <SafariShared/WBSSVGImageRenderingResponse.h>
#import <SafariShared/WBSSVGImageRenderingWebProcessPlugInPageController.h>
#import <SafariShared/WBSSafariCyclerConfigurationTool.h>
#import <SafariShared/WBSSafariSandboxBroker.h>
#import <SafariShared/WBSSafariSandboxBrokerConnection.h>
#import <SafariShared/WBSSafariSandboxBrokerProtocol-Protocol.h>
#import <SafariShared/WBSSameDocumentNavigationToHistoryVisitCorrelator.h>
#import <SafariShared/WBSSavedPasswordStore-SafariSharedExtras.h>
#import <SafariShared/WBSScopeTimeoutHandler.h>
#import <SafariShared/WBSSearchHelperConnectionManager.h>
#import <SafariShared/WBSSearchImpressionAnalyticsRecorder.h>
#import <SafariShared/WBSSearchProvider.h>
#import <SafariShared/WBSSetInt64.h>
#import <SafariShared/WBSSingleCreditCardData.h>
#import <SafariShared/WBSSiriIntelligenceDonor.h>
#import <SafariShared/WBSSiriIntelligenceDonorBookmarkData.h>
#import <SafariShared/WBSSiriIntelligenceDonorHistoryData.h>
#import <SafariShared/WBSSiriIntelligenceHistorySearch.h>
#import <SafariShared/WBSSiteIconKeyColorExtractor.h>
#import <SafariShared/WBSSiteMetadataFetchOperation.h>
#import <SafariShared/WBSSiteMetadataImageCache.h>
#import <SafariShared/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariShared/WBSSiteMetadataImageCacheSettingsEntry-Protocol.h>
#import <SafariShared/WBSSiteMetadataImageCacheSettingsSQLiteStore.h>
#import <SafariShared/WBSSiteMetadataManager.h>
#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>
#import <SafariShared/WBSSiteMetadataProviderDelegate-Protocol.h>
#import <SafariShared/WBSSiteMetadataRequest.h>
#import <SafariShared/WBSSiteMetadataResponse.h>
#import <SafariShared/WBSSmartHistorySearcher.h>
#import <SafariShared/WBSTabCompletionMatch.h>
#import <SafariShared/WBSTabDialog.h>
#import <SafariShared/WBSTabDialogCancellationContext.h>
#import <SafariShared/WBSTabDialogCancellationExemption.h>
#import <SafariShared/WBSTabDialogInformation.h>
#import <SafariShared/WBSTabDialogManager.h>
#import <SafariShared/WBSTabItemSearchSupport-Protocol.h>
#import <SafariShared/WBSTabOrderInsertionHint.h>
#import <SafariShared/WBSTabOrderManager.h>
#import <SafariShared/WBSTemplateIconCache.h>
#import <SafariShared/WBSTemplateIconMonogramConfiguration.h>
#import <SafariShared/WBSTemplateIconMonogramGenerator.h>
#import <SafariShared/WBSTemplateIconRequest.h>
#import <SafariShared/WBSTemplateIconResponse.h>
#import <SafariShared/WBSTopHitCompletionMatch.h>
#import <SafariShared/WBSTouchIconCache.h>
#import <SafariShared/WBSTouchIconCacheSettingsEntry.h>
#import <SafariShared/WBSTouchIconCacheSettingsSQLiteStore.h>
#import <SafariShared/WBSTouchIconFetchOperation.h>
#import <SafariShared/WBSTouchIconFetchOperationResult.h>
#import <SafariShared/WBSTouchIconObserver-Protocol.h>
#import <SafariShared/WBSTouchIconRequest.h>
#import <SafariShared/WBSTouchIconResponse.h>
#import <SafariShared/WBSTouchIconWebProcessPlugInPageController.h>
#import <SafariShared/WBSTranslationDataCollectionManager.h>
#import <SafariShared/WBSTranslationInformation.h>
#import <SafariShared/WBSTranslationURLParser.h>
#import <SafariShared/WBSURLCompletionDataSource-Protocol.h>
#import <SafariShared/WBSURLCompletionDatabase.h>
#import <SafariShared/WBSURLCompletionHistorySnapshot.h>
#import <SafariShared/WBSURLCompletionMatch.h>
#import <SafariShared/WBSURLCompletionMatchData-Protocol.h>
#import <SafariShared/WBSURLCompletionMatchSnapshot.h>
#import <SafariShared/WBSURLCompletionSessionProtocol-Protocol.h>
#import <SafariShared/WBSURLCompletionSessionProxy.h>
#import <SafariShared/WBSURLCompletionUserTypedString.h>
#import <SafariShared/WBSURLSpoofingMitigator.h>
#import <SafariShared/WBSURLSuffixChecker.h>
#import <SafariShared/WBSUserMediaCapturePolicyEntry.h>
#import <SafariShared/WBSUserMediaPermissionController.h>
#import <SafariShared/WBSUserTypedFormString.h>
#import <SafariShared/WBSWebProcessPlugIn.h>
#import <SafariShared/WBSWebProcessPlugInPageController.h>
#import <SafariShared/WBSWebViewMetadataFetchOperation.h>
#import <SafariShared/WBSWebViewMetadataFetchOperationDelegate-Protocol.h>
#import <SafariShared/WKNavigationDelegate-Protocol.h>
#import <SafariShared/WKWebProcessPlugIn-Protocol.h>
#import <SafariShared/WKWebProcessPlugInLoadDelegate-Protocol.h>
#import <SafariShared/WKWebsiteDataStore-SafariSharedExtras.h>
#import <SafariShared/_CompletionListRankingObserverFeedbackGenerator-Protocol.h>
#import <SafariShared/_CompletionListRankingObserverFeedbackGeneratorDelegate-Protocol.h>
#import <SafariShared/_MKPlaceViewControllerFeedbackDelegate-Protocol.h>
#import <SafariShared/_SSURLCompletionMatch-Protocol.h>
#import <SafariShared/_WBSFaviconRecord.h>
#import <SafariShared/_WBSFieldLabelPatternMatcherFactory.h>
#import <SafariShared/_WBSParsecArraySchema.h>
#import <SafariShared/_WBSParsecDictionarySchema.h>
#import <SafariShared/_WBSParsecSubscriptionInfoKeyValueStringParser.h>
#import <SafariShared/_WBSSafariCyclerConfigurationCommand.h>
#import <SafariShared/_WBSSearchFoundationFeedbackGenerator.h>
#import <SafariShared/_WBSSiteMetadataRequestInfo.h>
#import <SafariShared/_WBSSiteMetadataToken.h>
#import <SafariShared/_WKRemoteObjectInterface-SafariSharedExtras.h>

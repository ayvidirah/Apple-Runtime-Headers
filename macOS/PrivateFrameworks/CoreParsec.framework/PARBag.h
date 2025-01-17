//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, NSUserDefaults;

@interface PARBag : NSObject <NSSecureCoding>
{
    NSData *_bagData;
    NSString *_userAgent;
    NSString *_clientName;
    NSUserDefaults *_userDefaults;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *rawBag;
- (id)urlForIdentifier:(id)arg1;
- (id)bag_URLForKey:(id)arg1;
- (id)bag_dictionaryForKey:(id)arg1;
- (id)bag_arrayForKey:(id)arg1;
- (id)bag_numberForKey:(id)arg1;
- (id)bag_stringForKey:(id)arg1;
- (BOOL)bag_boolForKey:(id)arg1;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) long long protocolVersion;
@property(readonly, nonatomic) NSDictionary *tuscanyConfiguration;
@property(readonly, copy, nonatomic) NSString *parsecFeedbackFormat;
@property(readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property(readonly, nonatomic) NSArray *suggestionRankerModel;
@property(readonly, nonatomic) BOOL use2LayerRanking;
@property(readonly, nonatomic) NSArray *anonymousMetadataPreference;
@property(readonly, nonatomic) BOOL collectAnonymousMetadata;
@property(readonly, nonatomic) BOOL collectScores;
@property(readonly, nonatomic) BOOL sampleFeatures;
@property(readonly, nonatomic) BOOL sampleClientTiming;
@property(readonly, nonatomic) unsigned long long smartHistoryMinimumQueryLength;
@property(readonly, nonatomic) BOOL smartHistoryFeatureFeedbackEnabled;
@property(readonly, nonatomic) unsigned long long smartHistorySampleThreshold;
@property(readonly, nonatomic) unsigned long long smartHistoryCompletionReturnCount;
@property(readonly, nonatomic) unsigned long long smartHistoryMaxRows;
@property(readonly, nonatomic) unsigned long long smartHistoryTimeout;
@property(readonly, nonatomic) BOOL smartHistoryEnabled;
@property(readonly, nonatomic) double minThresholdToSend;
@property(readonly, nonatomic) double safariMostRecent;
@property(readonly, nonatomic) double safariDecay;
@property(readonly, nonatomic) double safariAll;
@property(readonly, nonatomic) double safariLast1month;
@property(readonly, nonatomic) double safariLast1week;
@property(readonly, nonatomic) double safariLast1day;
@property(readonly, nonatomic) double safariLast1hour;
@property(readonly, nonatomic) NSNumber *cohortsLookbackInDays;
@property(readonly, nonatomic) NSNumber *duetExpertCustomFeedbackSamplingPercentage;
@property(readonly, nonatomic) double timeoutIntervalForRequest;
@property(readonly, nonatomic) NSNumber *feedbackMaxAgeInDays;
@property(readonly, nonatomic) NSNumber *eagerFeedbackSamplingPercentage;
- (unsigned long long)maximumSizeForFeedbackType:(id)arg1;
@property(readonly, nonatomic) NSDictionary *maximumCustomFeedbackSizes;
@property(readonly, copy, nonatomic) NSString *firstUseContinueText;
@property(readonly, copy, nonatomic) NSString *firstUseLearnMoreURL;
@property(readonly, copy, nonatomic) NSString *firstUseLearnMoreText;
@property(readonly, copy, nonatomic) NSString *firstUseDescriptionText;
@property(readonly, copy, nonatomic) NSArray *enabledDomains;
@property(readonly, copy, nonatomic) NSArray *recentlyUsedAppIdentifierWhitelist;
@property(readonly, nonatomic) BOOL imageTimingFeedbackEnabled;
@property(readonly, nonatomic) BOOL feedbackEnabled;
@property(readonly, nonatomic) long long abTest2WeekZoneSize;
@property(readonly, nonatomic) unsigned long long maximumCachedQueriesToSend;
@property(readonly, nonatomic) unsigned long long maximumCachedResultsToSend;
@property(readonly, nonatomic) unsigned long long minimumQueryLength;
@property(readonly, copy, nonatomic) NSString *customFlight;
@property(readonly, nonatomic) NSURL *flightURL;
- (id)personalizationParameters;
@property(readonly, nonatomic) NSURL *crowdsourcingURL;
@property(readonly, nonatomic) NSURL *feedbackURL;
@property(readonly, nonatomic) NSURL *searchURL;
@property(readonly, nonatomic) NSURL *warmURL;
@property(readonly, nonatomic) double minimumIntervalBetweenQueriesFromBag;
@property(readonly, nonatomic) double subscriptionTTL;
@property(readonly, nonatomic) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property(readonly, nonatomic) NSArray *subscriptionProviderDomainWhitelist;
@property(readonly, nonatomic) BOOL sendGeoEnvironmentHeader;
@property(readonly, nonatomic) NSArray *downloadResourcesList;
@property(readonly, nonatomic) NSArray *supportedGeoLocationSources;
@property(readonly, nonatomic) NSNumber *minSuggestionRenderTimeout;
@property(readonly, nonatomic) NSNumber *otherRenderTimeout;
@property(readonly, nonatomic) NSNumber *minSearchRenderTimeout;
@property(readonly, nonatomic) NSNumber *searchRenderTimeout;
@property(readonly, copy, nonatomic) NSDictionary *resources;
@property(readonly, copy, nonatomic) NSString *releaseTag;
@property(readonly, copy, nonatomic) NSString *version;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (double)expirationDate;
- (id)bagURL;
- (BOOL)isRefreshDisabled;
- (id)_bag_objectOfClass:(Class)arg1 forKey:(id)arg2 override:(BOOL)arg3;
- (id)valueForKey:(id)arg1 override:(BOOL)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithData:(id)arg1 userAgent:(id)arg2 userDefaults:(id)arg3;
- (id)initWithBag:(id)arg1 userAgent:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 userAgent:(id)arg2;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 userDefaults:(id)arg3;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2;
- (id)initWithURL:(id)arg1 userDefaults:(id)arg2;

@end


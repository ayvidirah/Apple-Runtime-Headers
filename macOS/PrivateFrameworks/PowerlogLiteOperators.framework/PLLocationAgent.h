//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSNumber, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLLocationAgent : PLAgent
{
    PLCFNotificationOperatorComposition *_appStatusChangedNotification;
    NSDate *_lastAppStatusNotificationDate;
    NSNumber *_appStatusLimiterIsActive;
    PLCFNotificationOperatorComposition *_techStatusChangedNotification;
    NSDate *_lastTechStatusNotificationDate;
    NSNumber *_techStatusLimiterIsActive;
    PLXPCListenerOperatorComposition *_logLevelNotification;
    PLXPCListenerOperatorComposition *_statusBarNotification;
    PLXPCListenerOperatorComposition *_clientStatusNotification;
    PLXPCListenerOperatorComposition *_locationGPSListener;
    PLEntryNotificationOperatorComposition *_sbcLevelChanged;
    NSMutableDictionary *_clientStatusTypeStrings;
    NSMutableSet *_processes;
    NSMutableDictionary *_bundleIDToWeightUsingGPSCache;
    NSMutableDictionary *_bundleIDToWeightUsingWiFiCache;
    NSMutableDictionary *_bundleIDToWeightUsingLocationCache;
    NSMutableDictionary *_activeClients;
    NSDate *_lastResyncActiveClientsDate;
    double _gps_segment_power;
    NSDate *_gps_segment_lastWrittenDate;
    double _gps_segment_lastWrittenTimestamp;
    NSDate *_gps_segment_date;
    double _gps_segment_timestamp;
}

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitionClientStatusDebug;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionStatusBar;
+ (id)entryEventForwardDefinitionLogLevel;
+ (id)entryEventForwardDefinitionClientStatus;
+ (id)entryEventForwardDefinitionTechStatus;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionClientStatus;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
@property double gps_segment_timestamp; // @synthesize gps_segment_timestamp=_gps_segment_timestamp;
@property(retain) NSDate *gps_segment_date; // @synthesize gps_segment_date=_gps_segment_date;
@property double gps_segment_lastWrittenTimestamp; // @synthesize gps_segment_lastWrittenTimestamp=_gps_segment_lastWrittenTimestamp;
@property(retain) NSDate *gps_segment_lastWrittenDate; // @synthesize gps_segment_lastWrittenDate=_gps_segment_lastWrittenDate;
@property double gps_segment_power; // @synthesize gps_segment_power=_gps_segment_power;
@property(retain) NSDate *lastResyncActiveClientsDate; // @synthesize lastResyncActiveClientsDate=_lastResyncActiveClientsDate;
@property(retain) NSMutableDictionary *activeClients; // @synthesize activeClients=_activeClients;
@property(retain) NSMutableDictionary *bundleIDToWeightUsingLocationCache; // @synthesize bundleIDToWeightUsingLocationCache=_bundleIDToWeightUsingLocationCache;
@property(retain) NSMutableDictionary *bundleIDToWeightUsingWiFiCache; // @synthesize bundleIDToWeightUsingWiFiCache=_bundleIDToWeightUsingWiFiCache;
@property(retain) NSMutableDictionary *bundleIDToWeightUsingGPSCache; // @synthesize bundleIDToWeightUsingGPSCache=_bundleIDToWeightUsingGPSCache;
@property(retain) NSMutableSet *processes; // @synthesize processes=_processes;
@property(retain) NSMutableDictionary *clientStatusTypeStrings; // @synthesize clientStatusTypeStrings=_clientStatusTypeStrings;
@property(retain) PLEntryNotificationOperatorComposition *sbcLevelChanged; // @synthesize sbcLevelChanged=_sbcLevelChanged;
@property(retain) PLXPCListenerOperatorComposition *locationGPSListener; // @synthesize locationGPSListener=_locationGPSListener;
@property(retain) PLXPCListenerOperatorComposition *clientStatusNotification; // @synthesize clientStatusNotification=_clientStatusNotification;
@property(retain) PLXPCListenerOperatorComposition *statusBarNotification; // @synthesize statusBarNotification=_statusBarNotification;
@property(retain) PLXPCListenerOperatorComposition *logLevelNotification; // @synthesize logLevelNotification=_logLevelNotification;
@property(retain) NSNumber *techStatusLimiterIsActive; // @synthesize techStatusLimiterIsActive=_techStatusLimiterIsActive;
@property(retain) NSDate *lastTechStatusNotificationDate; // @synthesize lastTechStatusNotificationDate=_lastTechStatusNotificationDate;
@property(retain) PLCFNotificationOperatorComposition *techStatusChangedNotification; // @synthesize techStatusChangedNotification=_techStatusChangedNotification;
@property(retain) NSNumber *appStatusLimiterIsActive; // @synthesize appStatusLimiterIsActive=_appStatusLimiterIsActive;
@property(retain) NSDate *lastAppStatusNotificationDate; // @synthesize lastAppStatusNotificationDate=_lastAppStatusNotificationDate;
@property(retain) PLCFNotificationOperatorComposition *appStatusChangedNotification; // @synthesize appStatusChangedNotification=_appStatusChangedNotification;
- (void).cxx_destruct;
- (void)UpdateGnssPowerMetric:(id)arg1;
- (void)updateLocationDistributionEvents;
- (void)logEventNoneClientStatusDebugWithClients:(id)arg1;
- (void)logEventNoneClientStatus;
- (void)updateClientsLocationInfo:(id)arg1;
- (void)closeOpenEntryForClient:(id)arg1 withOpenEntry:(id)arg2 withTimeStopped:(id)arg3;
- (id)getOpenEntryForClientSettings:(id)arg1 withTimeStarted:(id)arg2 withClient:(id)arg3 withType:(id)arg4 withEntryKey:(id)arg5;
- (void)logEventForwardClientStatuswithPayload:(id)arg1;
- (void)resyncActiveClients;
- (id)lastEntryWithClient:(id)arg1 withType:(id)arg2 withEntryKey:(id)arg3;
- (void)updateLocalCacheWithClient:(id)arg1 withType:(id)arg2 withEntry:(id)arg3;
- (void)logEventForwardTechStatus;
- (void)logEventForwardTechStatus_withLimiter;
- (void)logEventForwardClientStatus_withLimiter;
- (BOOL)shouldRateLimitAppStatus;
- (BOOL)shouldRateLimitTechStatus;
- (void)logEventPointClientStatus;
- (void)log;
- (id)humanReadableNameForTechnology:(id)arg1;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)arg1;
- (id)init;

@end


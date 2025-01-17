//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerlogCore/PLService.h>

@class PLEntryNotificationOperatorComposition, PLSemaphore, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLDebugService : PLService
{
    PLXPCListenerOperatorComposition *_xpcListenerPLLog;
    PLXPCResponderOperatorComposition *_xpcResponderPLLog;
    PLXPCResponderOperatorComposition *_xpcResponderPLAPITest;
    PLXPCListenerOperatorComposition *_aggregateTestListener;
    PLXPCResponderOperatorComposition *_aggregateTestResponder;
    PLXPCListenerOperatorComposition *_schemaTestListener;
    PLEntryNotificationOperatorComposition *_assertionListener;
    PLEntryNotificationOperatorComposition *_assertionNewListener;
    PLEntryNotificationOperatorComposition *_assertionUpdateListener;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLSemaphore *_canSleepSemaphore;
    PLEntryNotificationOperatorComposition *_sleepNotification;
    PLEntryNotificationOperatorComposition *_wakeNotification;
}

+ (id)entryEventNoneDefinitionFastInsertTest;
+ (id)entryEventNoneDefinitionSleepNotificationTest;
+ (id)entryEventNoneDefinitionArrayTest;
+ (id)entryEventNoneDefinitionPLAPITest;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitionAggregateTestSplitAndBucket;
+ (id)entryAggregateDefinitionAggregateTestVerySmall;
+ (id)entryAggregateDefinitionAggregateTestSmall;
+ (id)entryAggregateDefinitionAggregateTest;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionTest;
+ (id)entryEventPointDefinitions;
+ (void)load;
@property(retain) PLEntryNotificationOperatorComposition *wakeNotification; // @synthesize wakeNotification=_wakeNotification;
@property(retain) PLEntryNotificationOperatorComposition *sleepNotification; // @synthesize sleepNotification=_sleepNotification;
@property(retain) PLSemaphore *canSleepSemaphore; // @synthesize canSleepSemaphore=_canSleepSemaphore;
@property(retain) PLEntryNotificationOperatorComposition *canSleepNotification; // @synthesize canSleepNotification=_canSleepNotification;
@property(retain) PLEntryNotificationOperatorComposition *assertionUpdateListener; // @synthesize assertionUpdateListener=_assertionUpdateListener;
@property(retain) PLEntryNotificationOperatorComposition *assertionNewListener; // @synthesize assertionNewListener=_assertionNewListener;
@property(retain) PLEntryNotificationOperatorComposition *assertionListener; // @synthesize assertionListener=_assertionListener;
@property(retain) PLXPCListenerOperatorComposition *schemaTestListener; // @synthesize schemaTestListener=_schemaTestListener;
@property(retain) PLXPCResponderOperatorComposition *aggregateTestResponder; // @synthesize aggregateTestResponder=_aggregateTestResponder;
@property(retain) PLXPCListenerOperatorComposition *aggregateTestListener; // @synthesize aggregateTestListener=_aggregateTestListener;
@property(retain) PLXPCResponderOperatorComposition *xpcResponderPLAPITest; // @synthesize xpcResponderPLAPITest=_xpcResponderPLAPITest;
@property(retain) PLXPCResponderOperatorComposition *xpcResponderPLLog; // @synthesize xpcResponderPLLog=_xpcResponderPLLog;
@property(retain) PLXPCListenerOperatorComposition *xpcListenerPLLog; // @synthesize xpcListenerPLLog=_xpcListenerPLLog;
- (void).cxx_destruct;
- (void)testProportionateAggregateEntries;
- (void)testMonotonicAggregateEntriesExtendedTime;
- (void)testMonotonicAggregateEntries;
- (void)testEntryQueries;
- (void)testEntryDelete;
- (void)testEntryApplicationAgent;
- (void)testEntryLogRequestedForEntryKey:(id)arg1;
- (void)testEntryWake;
- (void)testEntrySleep;
- (void)testAllEntryKeyRequests;
- (void)testFastInserts;
- (void)stressTaskingSubmission;
- (void)testGenerateOTASubmission;
- (void)testArray;
- (id)filledTestArrayEntry;
- (void)testArchive;
- (void)testDailyTasks;
- (void)stressTimer;
- (void)stressPLEntry;
- (void)stressObjectForKey;
- (void)stressSetObjectForKey;
- (void)stressCache;
- (void)stressCacheSmall;
- (void)stressMidnightCalculation;
- (void)currentBasebandTime;
- (void)stressActivityScheduler;
- (void)testMonotonicTimerThroughSleep;
- (void)stressMonotonicTimer3;
- (void)stressMonotonicTimer2;
- (void)stressMonotonicTimer;
- (void)testBlockingFlushCaches;
- (void)testExit;
- (void)stressAggregateVerySmall;
- (void)stressAggregateSmall;
- (void)testUTF8;
- (void)testCompression;
- (void)fireSignificantBatteryChangeNotification;
- (id)testPLAPICore_LastEntryForKeyWC:(id)arg1;
- (id)testPLAPICore_LastEntryForKeyWSEK:(id)arg1;
- (id)testPLAPICore_EntriesForKeyBeforeTICWF:(id)arg1;
- (id)testPLAPICore_EntriesForKeyInTimeRange:(id)arg1;
- (id)testPLAPICore_EntriesForKeyWithProperties:(id)arg1;
- (id)testPLAPICore_DeleteAllEntriesForKeyBTWF:(id)arg1;
- (id)testPLAPICore_DeleteAllEntriesForKeyWF:(id)arg1;
- (id)testPLAPICore_DeleteAllEntriesForKey:(id)arg1;
- (id)testPLAPICore_DeleteEntryForKey:(id)arg1;
- (id)testPLAPICore_DeleteEntry:(id)arg1;
- (id)testPLAPICore_UpdateEntry:(id)arg1;
- (id)testPLAPICore_WriteEntries:(id)arg1;
- (id)testPLAPICore_WriteEntry:(id)arg1;
- (_Bool)rawWrite:(id)arg1;
- (_Bool)rawRead:(id)arg1;
- (id)test_LogPass:(id)arg1 str:(id)arg2;
- (id)test_LogErr:(id)arg1 str:(id)arg2;
- (void)initOperatorDependancies;
- (void)printNullTestResultsForEntry:(id)arg1 withDescription:(id)arg2;
- (id)init;

@end


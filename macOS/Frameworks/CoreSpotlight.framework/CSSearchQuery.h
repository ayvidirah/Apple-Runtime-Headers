//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/MDSearchQueryResultProcessor-Protocol.h>

@class CSSearchQueryContext, NSArray, NSKnownKeysMappingStrategy, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor>
{
    unsigned long long _foundItemCount;
    short _requestedAttributeCount;
    short _attrInfo[12];
    BOOL _started;
    BOOL _finished;
    BOOL _cancelled;
    BOOL _gatherEnded;
    struct os_unfair_lock_s _liveItemLock;
    NSKnownKeysMappingStrategy *_mappingStrategy;
    unsigned long long *_attrKeys;
    BOOL _privateIndex;
    BOOL _userFSIndex;
    BOOL _suspended;
    CDUnknownBlockType _foundItemsHandler;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queryString;
    CSSearchQueryContext *_queryContext;
    NSMapTable *_liveIndexBundleIDToIndexItemIDMap;
    NSMapTable *_liveIndexBundleIDToBundleString;
    NSMapTable *_liveIndexUserFSOIDTOIdentifierMap;
    double _liveAttributeChangeHWM;
    NSMapTable *_suspendedLiveIndexBundleIDToIndexItemIDMap;
    NSMapTable *_suspendedLiveIndexUserFSOIDTOIdentifierMap;
    double _suspendedLiveAttributeChangeHWM;
    CDUnknownBlockType _gatherEndedHandler;
    CDUnknownBlockType _changedItemsHandler;
    CDUnknownBlockType _removedItemsHandler;
    CDUnknownBlockType _foundAttributesHandler;
    CDUnknownBlockType _changedAttributesHandler;
    CDUnknownBlockType _countChangedHandler;
    CDUnknownBlockType _resolvedAttributeNamesHandler;
    CDUnknownBlockType _completionsHandler;
    CDUnknownBlockType _foundItemHandler;
    CDUnknownBlockType _interruptedHandler;
    CDUnknownBlockType _restartedHandler;
    CDUnknownBlockType _restartGatherEndedHandler;
    NSString *_privateBundleID;
}

+ (void)userEngagedWithUniqueIdentifier:(id)arg1 bundleId:(id)arg2 forUserQuery:(id)arg3 interactionType:(int)arg4;
+ (id)_makeQueryErrorWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (void)restartNextSuspendedQuery;
+ (void)queueSuspendedQuery:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *privateBundleID; // @synthesize privateBundleID=_privateBundleID;
@property(nonatomic) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) BOOL userFSIndex; // @synthesize userFSIndex=_userFSIndex;
@property(nonatomic) BOOL privateIndex; // @synthesize privateIndex=_privateIndex;
@property(copy) CDUnknownBlockType restartGatherEndedHandler; // @synthesize restartGatherEndedHandler=_restartGatherEndedHandler;
@property(copy) CDUnknownBlockType restartedHandler; // @synthesize restartedHandler=_restartedHandler;
@property(copy) CDUnknownBlockType interruptedHandler; // @synthesize interruptedHandler=_interruptedHandler;
@property(copy) CDUnknownBlockType foundItemHandler; // @synthesize foundItemHandler=_foundItemHandler;
@property(copy) CDUnknownBlockType completionsHandler; // @synthesize completionsHandler=_completionsHandler;
@property(copy) CDUnknownBlockType resolvedAttributeNamesHandler; // @synthesize resolvedAttributeNamesHandler=_resolvedAttributeNamesHandler;
@property(copy) CDUnknownBlockType countChangedHandler; // @synthesize countChangedHandler=_countChangedHandler;
@property(copy) CDUnknownBlockType changedAttributesHandler; // @synthesize changedAttributesHandler=_changedAttributesHandler;
@property(copy) CDUnknownBlockType foundAttributesHandler; // @synthesize foundAttributesHandler=_foundAttributesHandler;
@property(copy) CDUnknownBlockType removedItemsHandler; // @synthesize removedItemsHandler=_removedItemsHandler;
@property(copy) CDUnknownBlockType changedItemsHandler; // @synthesize changedItemsHandler=_changedItemsHandler;
@property(copy) CDUnknownBlockType gatherEndedHandler; // @synthesize gatherEndedHandler=_gatherEndedHandler;
@property(nonatomic) double suspendedLiveAttributeChangeHWM; // @synthesize suspendedLiveAttributeChangeHWM=_suspendedLiveAttributeChangeHWM;
@property(retain, nonatomic) NSMapTable *suspendedLiveIndexUserFSOIDTOIdentifierMap; // @synthesize suspendedLiveIndexUserFSOIDTOIdentifierMap=_suspendedLiveIndexUserFSOIDTOIdentifierMap;
@property(retain, nonatomic) NSMapTable *suspendedLiveIndexBundleIDToIndexItemIDMap; // @synthesize suspendedLiveIndexBundleIDToIndexItemIDMap=_suspendedLiveIndexBundleIDToIndexItemIDMap;
@property(nonatomic) double liveAttributeChangeHWM; // @synthesize liveAttributeChangeHWM=_liveAttributeChangeHWM;
@property(retain, nonatomic) NSMapTable *liveIndexUserFSOIDTOIdentifierMap; // @synthesize liveIndexUserFSOIDTOIdentifierMap=_liveIndexUserFSOIDTOIdentifierMap;
@property(retain, nonatomic) NSMapTable *liveIndexBundleIDToBundleString; // @synthesize liveIndexBundleIDToBundleString=_liveIndexBundleIDToBundleString;
@property(retain, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap; // @synthesize liveIndexBundleIDToIndexItemIDMap=_liveIndexBundleIDToIndexItemIDMap;
@property(retain, nonatomic) CSSearchQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
- (void).cxx_destruct;
- (void)didFinishWithError:(id)arg1;
- (void)didReturnResults:(long long)arg1 resultsData:(id)arg2 oidData:(id)arg3 protectionClass:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)processLiveResultsData:(id)arg1 oidData:(id)arg2 protectionClass:(id)arg3;
- (void)processCompletionsResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)processResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)handleFoundItems:(id)arg1;
- (id)copyResultFromPlist:(id)arg1 protectionClass:(id)arg2;
- (void)processResultFromPlist:(id)arg1 atIndex:(unsigned long long)arg2 protectionClass:(id)arg3 oids:(long long *)arg4 oidCount:(unsigned int)arg5 addItems:(id *)arg6 updateItems:(id *)arg7;
- (BOOL)removeUserFSLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (void)addOrUpdateUserFSLiveOID:(long long)arg1 userFSDomain:(id)arg2 identifier:(id)arg3;
- (BOOL)addOrUpdateLiveOID:(long long)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (BOOL)removeLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (void)processRemoveResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)_removeIdentifiers:(id)arg1 withBundleID:(id)arg2 andQueryID:(long long)arg3;
- (void)processAttributesData:(id)arg1 update:(BOOL)arg2 protectionClass:(id)arg3;
- (void)didResolveFriendlyAttributeNames:(id)arg1 fromFetchAttributes:(id)arg2;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;
@property(readonly) unsigned long long foundItemCount;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (BOOL)_resume;
- (void)start;
- (void)handleError:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)handleCompletion:(id)arg1;
- (BOOL)isTopHitQuery;
- (void)setupFetchAttributesForSearch;
- (id)debugDescription;
- (id)description;
- (id)connection;
- (double)currentTime;
- (BOOL)attribute;
- (BOOL)counting;
- (BOOL)live;
- (BOOL)grouped;
- (BOOL)internal;
- (void)setScopes:(id)arg1;
- (id)scopes;
- (id)options;
@property(readonly, nonatomic) NSArray *fetchAttributes;
- (void)setBundleIDs:(id)arg1;
- (id)bundleIDs;
@property(copy) NSArray *protectionClasses;
- (void)dealloc;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)initWithQueryString:(id)arg1 attributes:(id)arg2;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)init;
- (id)copyCSSearchableItemWithValues:(id *)arg1 valueCount:(unsigned long long)arg2 attrKeys:(unsigned long long *)arg3 protectionClass:(id)arg4 mappingStrategy:(id)arg5 attrInfo:(short *)arg6 requestedAttributeCount:(unsigned long long)arg7 unpackInfo:(struct CSUnpackInfo)arg8 userFSDomain:(id)arg9;

@end


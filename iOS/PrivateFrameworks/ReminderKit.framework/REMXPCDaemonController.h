//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDaemonController-Protocol.h>
#import <ReminderKit/REMXPCClient-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;
@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

@interface REMXPCDaemonController : NSObject <REMDaemonController, REMXPCClient>
{
    struct os_unfair_lock_s _ivarLock;
    id <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> _cloudKitNetworkActivityDelegate;
    NSMutableDictionary *_l_performersByName;
    NSString *_serviceName;
    NSXPCConnection *_xpcConnection;
    REMStoreContainerToken *_storeContainerToken;
}

+ (id)userInteractiveDaemonController;
+ (id)weakSharedInstance;
@property(retain, nonatomic) REMStoreContainerToken *storeContainerToken; // @synthesize storeContainerToken=_storeContainerToken;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSMutableDictionary *l_performersByName; // @synthesize l_performersByName=_l_performersByName;
@property(nonatomic) struct os_unfair_lock_s ivarLock; // @synthesize ivarLock=_ivarLock;
@property(nonatomic) __weak id <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate; // @synthesize cloudKitNetworkActivityDelegate=_cloudKitNetworkActivityDelegate;
- (void).cxx_destruct;
- (void)cloudKitNetworkActivityDidUpdate:(id)arg1;
- (void)_xpcConnectionDidInvalidate;
- (void)_xpcConnectionDidInterrupt;
- (id)_xpcConnectionReconnectingIfNecessary;
- (id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)syncStorePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithStoreContainerToken:(id)arg1;
- (id)initWithStoreContainerToken:(id)arg1 userInteractive:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject
{
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_daemonName;
    struct __CFDictionary *_runningQueries;
}

+ (id)sharedBackgroundConnection;
+ (id)sharedConnection;
@property(nonatomic) struct __CFDictionary *runningQueries; // @synthesize runningQueries=_runningQueries;
@property(retain, nonatomic) NSString *daemonName; // @synthesize daemonName=_daemonName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDaemonName:(id)arg1 qos:(unsigned int)arg2;
- (void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;
- (void)requestParsecParametersWithReply:(CDUnknownBlockType)arg1;
- (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;
- (void)clearInput:(id)arg1;
- (void)preheat;
- (void)deactivate;
- (void)sendApps:(id)arg1;
- (void)activate:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)cancelQuery:(id)arg1;
- (id)startQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)sendMessageForToken:(id)arg1;
- (void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_connection;
- (void)_resetConnection;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, VSAccountStore, VSIdentityProvider, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject
{
    VSPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_privateQueue;
    VSAccountStore *_accountStore;
    VSIdentityProvider *_cachedIdentityProvider;
    NSString *_cachedDesignatedAppBundleIdentifier;
}

+ (id)sharedCenter;
@property(retain, nonatomic) NSString *cachedDesignatedAppBundleIdentifier; // @synthesize cachedDesignatedAppBundleIdentifier=_cachedDesignatedAppBundleIdentifier;
@property(retain, nonatomic) VSIdentityProvider *cachedIdentityProvider; // @synthesize cachedIdentityProvider=_cachedIdentityProvider;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (id)_value:(id)arg1 withDefault:(id)arg2;
- (void)_accountStoreDidChange;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueInfoQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end


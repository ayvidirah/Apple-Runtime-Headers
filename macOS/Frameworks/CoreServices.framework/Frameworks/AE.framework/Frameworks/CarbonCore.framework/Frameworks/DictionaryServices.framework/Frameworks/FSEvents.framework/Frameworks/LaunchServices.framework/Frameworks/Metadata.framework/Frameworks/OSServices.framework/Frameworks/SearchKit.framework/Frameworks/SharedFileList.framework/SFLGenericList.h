//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedFileList/SFLInsertOrderedSet-Protocol.h>
#import <SharedFileList/SFLList-Protocol.h>
#import <SharedFileList/SFLOrderedSet-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString, _SFLList;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFLGenericList : NSObject <SFLList, SFLOrderedSet, SFLInsertOrderedSet>
{
    struct os_unfair_lock_s _internalObserverLock;
    NSString *_identifier;
    _SFLList *_internalList;
    id _notifyToken;
    NSHashTable *_internalObservers;
    NSArray *_internalItems;
    NSMutableDictionary *_itemsByIdentifier;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_group> *_internalInitializeGroup;
}

@property(retain) NSObject<OS_dispatch_group> *internalInitializeGroup; // @synthesize internalInitializeGroup=_internalInitializeGroup;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSMutableDictionary *itemsByIdentifier; // @synthesize itemsByIdentifier=_itemsByIdentifier;
@property(copy, nonatomic) NSArray *internalItems; // @synthesize internalItems=_internalItems;
@property(readonly) NSHashTable *internalObservers; // @synthesize internalObservers=_internalObservers;
@property(retain) id notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain) _SFLList *internalList; // @synthesize internalList=_internalList;
@property(readonly, retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)resolveItemWithIdentifier:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3;
- (void)resolveItemWithIdentifier:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_notifyObserversListDidChange;
- (void)_notifyObserverListInitialize:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1;
- (BOOL)_setPropertyValuesForKeysWithDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)_updateItem:(id)arg1 error:(id *)arg2;
- (void)_removeAllItems;
- (BOOL)_removeItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)_moveItem:(id)arg1 toIndex:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_moveItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (unsigned long long)_indexForInsertOfItems:(id)arg1 afterItem:(id)arg2;
- (BOOL)_insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (BOOL)_addItem:(id)arg1 error:(id *)arg2;
- (id)_fetchList;
- (id)_items;
- (BOOL)moveItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (BOOL)insertItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (void)removeAllItems;
@property(readonly) unsigned long long seed; // @dynamic seed;
- (BOOL)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (BOOL)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id *)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (BOOL)updateItem:(id)arg1 error:(id *)arg2;
- (BOOL)removeItem:(id)arg1 error:(id *)arg2;
- (BOOL)addItem:(id)arg1 error:(id *)arg2;
- (BOOL)setPropertyValuesForKeysWithDictionary:(id)arg1 error:(id *)arg2;
@property(copy) NSDictionary *properties;
@property(readonly, copy) NSArray *snapshotItems;
@property(readonly, copy) NSArray *allItems; // @dynamic allItems;
@property(readonly, copy) NSString *description;
- (void)handleListChangeNotification:(id)arg1;
- (BOOL)_originatorAuditTokenMatchesThisProcess:(id)arg1;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


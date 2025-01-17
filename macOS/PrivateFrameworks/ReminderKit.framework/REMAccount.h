//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMExternalSyncMetadataProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSOrderedSet, NSSet, NSString, REMAccountCapabilities, REMAccountGroupContext, REMAccountStorage, REMCRMergeableOrderedSet, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMAccount : NSObject <REMObjectIDProviding, REMExternalSyncMetadataProviding>
{
    BOOL _markedForRemoval;
    REMStore *_store;
    REMAccountStorage *_storage;
    REMAccountCapabilities *_capabilities;
}

+ (id)_accountTypeMaskWithBitMask:(long long)arg1;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (id)localAccountID;
+ (id)localInternalAccountID;
@property(nonatomic) BOOL markedForRemoval; // @synthesize markedForRemoval=_markedForRemoval;
@property(retain, nonatomic) REMAccountCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, copy, nonatomic) REMAccountStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)externalIdentifierForMarkedForDeletionObject;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, nonatomic) BOOL daSupportsPhoneNumbers;
@property(readonly, nonatomic) NSOrderedSet *listIDsOrdering;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchListsIncludingSpecialContainersWithError:(id *)arg1;
- (BOOL)isConsideredEmptyWithResultPtr:(char *)arg1 withError:(id *)arg2;
- (BOOL)canCopyReminderLosslesslyToAccount:(id)arg1;
- (id)fetchListsWithError:(id *)arg1;
@property(readonly, nonatomic) REMAccountGroupContext *groupContext;
@property(readonly, nonatomic) BOOL supportsSharingLists;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithStore:(id)arg1 storage:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL daAllowsCalendarAddDeleteModify; // @dynamic daAllowsCalendarAddDeleteModify;
@property(readonly, nonatomic) NSString *daConstraintsDescriptionPath; // @dynamic daConstraintsDescriptionPath;
@property(readonly, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(readonly, nonatomic) BOOL daSupportsSharedCalendars; // @dynamic daSupportsSharedCalendars;
@property(readonly, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, nonatomic) BOOL daWasMigrated; // @dynamic daWasMigrated;
@property(readonly, nonatomic) BOOL didChooseToMigrate; // @dynamic didChooseToMigrate;
@property(readonly, nonatomic) BOOL didFinishMigration; // @dynamic didFinishMigration;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(readonly, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly, nonatomic) BOOL inactive; // @dynamic inactive;
@property(readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering; // @dynamic listIDsMergeableOrdering;
@property(readonly, nonatomic) NSSet *listIDsToUndelete; // @dynamic listIDsToUndelete;
@property(readonly, nonatomic) BOOL listsDADisplayOrderChanged; // @dynamic listsDADisplayOrderChanged;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(readonly, nonatomic) long long type; // @dynamic type;

@end


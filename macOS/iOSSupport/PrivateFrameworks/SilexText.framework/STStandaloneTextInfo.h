//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexText/TSDContainerInfo-Protocol.h>

@class NSString, STTextTangierStorage, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface STStandaloneTextInfo : NSObject <TSDContainerInfo>
{
    BOOL floatingAboveText;
    BOOL anchoredToText;
    BOOL inlineWithText;
    BOOL attachedToBodyText;
    TSDInfoGeometry *geometry;
    TSPObject<TSDOwningAttachment> *owningAttachment;
    NSObject<TSDContainerInfo> *parentInfo;
    STTextTangierStorage *_storage;
}

@property(readonly, nonatomic) STTextTangierStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText; // @synthesize attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @synthesize inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @synthesize anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @synthesize floatingAboveText;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)childInfos;
- (BOOL)isThemeContent;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (BOOL)inlineWithText;
- (BOOL)floatingAboveText;
- (BOOL)attachedToBodyText;
- (BOOL)anchoredToText;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end


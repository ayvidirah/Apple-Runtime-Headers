//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTMatchingElementIterator-Protocol.h>

@class NSSet, NSString, XCElementSnapshot, XCTElementIndexingTransformer;
@protocol XCTElementSetTransformer;

__attribute__((visibility("hidden")))
@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator>
{
    BOOL _hasMatched;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    XCTElementIndexingTransformer *_indexingTransformer;
    unsigned long long _count;
}

@property(readonly) BOOL hasMatched; // @synthesize hasMatched=_hasMatched;
@property unsigned long long count; // @synthesize count=_count;
@property(readonly) XCTElementIndexingTransformer *indexingTransformer; // @synthesize indexingTransformer=_indexingTransformer;
@property(retain) XCElementSnapshot *currentMatch; // @synthesize currentMatch=_currentMatch;
@property(readonly) id <XCTElementSetTransformer> transformer; // @synthesize transformer=_transformer;
@property(retain) XCElementSnapshot *input; // @synthesize input=_input;
- (void).cxx_destruct;
@property(readonly) NSSet *currentRelatedElements;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI2/SXConditionalComponentProperties-Protocol.h>

@class NSString, SXComponentClassification, SXComponentConditions;

@protocol SXComponentProperties <SXConditionalComponentProperties>
@property(nonatomic, readonly) id additions;
@property(nonatomic, readonly) SXComponentClassification *classification;
@property(nonatomic, readonly) id analytics;
@property(nonatomic, readonly) unsigned long long contentRelevance;
@property(nonatomic, readonly) SXComponentConditions *conditions;
@property(nonatomic, readonly) unsigned long long traits;
@property(nonatomic, readonly) int role;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, readonly) NSString *identifier;
@end


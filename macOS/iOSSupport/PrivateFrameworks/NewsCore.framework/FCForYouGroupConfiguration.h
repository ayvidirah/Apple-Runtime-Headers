//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCForYouGroupConfiguration : NSObject <NSCopying>
{
    BOOL _allowsNativeAds;
    long long _groupType;
    NSString *_identifier;
    unsigned long long _groupPosition;
    unsigned long long _precedingGroupsCountForFirstGroup;
    unsigned long long _precedingGroupsCount;
}

@property(nonatomic) unsigned long long precedingGroupsCount; // @synthesize precedingGroupsCount=_precedingGroupsCount;
@property(nonatomic) unsigned long long precedingGroupsCountForFirstGroup; // @synthesize precedingGroupsCountForFirstGroup=_precedingGroupsCountForFirstGroup;
@property(nonatomic) unsigned long long groupPosition; // @synthesize groupPosition=_groupPosition;
@property(nonatomic) BOOL allowsNativeAds; // @synthesize allowsNativeAds=_allowsNativeAds;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (long long)compareGroupPosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


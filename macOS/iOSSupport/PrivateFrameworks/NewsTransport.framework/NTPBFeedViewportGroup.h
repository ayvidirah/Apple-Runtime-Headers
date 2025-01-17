//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBColor, NTPBColorGradient, NTPBDate, NTPBDiscoverMoreVideosInfo;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying>
{
    unsigned long long _mergeID;
    unsigned long long _options;
    NTPBColorGradient *_backgroundGradient;
    NTPBColor *_cardBackgroundColor;
    NTPBDate *_creationDate;
    int _ctaTextRef;
    NTPBColorGradient *_darkStyleBackgroundGradient;
    NTPBColor *_darkStyleCardBackgroundColor;
    NTPBColorGradient *_darkStyleSauceGradient;
    NTPBColor *_darkStyleTitleColor;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NTPBDate *_editionFeedEndDate;
    NTPBDate *_editionFeedStartDate;
    NTPBDate *_editionKeyDate;
    int _eyebrowTextRef;
    NSMutableArray *_headlines;
    NSString *_identifier;
    NSMutableArray *_issueIDs;
    int _l2TagIDRef;
    NSString *_magazineGroupIdentifier;
    NTPBColorGradient *_sauceGradient;
    int _sourceIdentifierRef;
    int _subtitleRef;
    NTPBColor *_titleColor;
    int _titleRef;
    int _type;
    NSMutableArray *_videoPlaylistHeadlines;
    BOOL _isFirstFromEdition;
    struct {
        unsigned int mergeID:1;
        unsigned int options:1;
        unsigned int ctaTextRef:1;
        unsigned int eyebrowTextRef:1;
        unsigned int l2TagIDRef:1;
        unsigned int sourceIdentifierRef:1;
        unsigned int subtitleRef:1;
        unsigned int titleRef:1;
        unsigned int type:1;
        unsigned int isFirstFromEdition:1;
    } _has;
}

+ (Class)issueIDsType;
+ (Class)videoPlaylistHeadlinesType;
+ (Class)headlinesType;
@property(retain, nonatomic) NTPBColorGradient *darkStyleSauceGradient; // @synthesize darkStyleSauceGradient=_darkStyleSauceGradient;
@property(retain, nonatomic) NTPBColor *darkStyleCardBackgroundColor; // @synthesize darkStyleCardBackgroundColor=_darkStyleCardBackgroundColor;
@property(retain, nonatomic) NTPBColorGradient *darkStyleBackgroundGradient; // @synthesize darkStyleBackgroundGradient=_darkStyleBackgroundGradient;
@property(retain, nonatomic) NTPBColor *darkStyleTitleColor; // @synthesize darkStyleTitleColor=_darkStyleTitleColor;
@property(retain, nonatomic) NTPBColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(retain, nonatomic) NTPBColorGradient *sauceGradient; // @synthesize sauceGradient=_sauceGradient;
@property(nonatomic) int ctaTextRef; // @synthesize ctaTextRef=_ctaTextRef;
@property(nonatomic) int eyebrowTextRef; // @synthesize eyebrowTextRef=_eyebrowTextRef;
@property(retain, nonatomic) NSString *magazineGroupIdentifier; // @synthesize magazineGroupIdentifier=_magazineGroupIdentifier;
@property(retain, nonatomic) NSMutableArray *issueIDs; // @synthesize issueIDs=_issueIDs;
@property(retain, nonatomic) NSMutableArray *videoPlaylistHeadlines; // @synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines;
@property(retain, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(nonatomic) BOOL isFirstFromEdition; // @synthesize isFirstFromEdition=_isFirstFromEdition;
@property(retain, nonatomic) NTPBDate *editionFeedEndDate; // @synthesize editionFeedEndDate=_editionFeedEndDate;
@property(retain, nonatomic) NTPBDate *editionFeedStartDate; // @synthesize editionFeedStartDate=_editionFeedStartDate;
@property(retain, nonatomic) NTPBDate *editionKeyDate; // @synthesize editionKeyDate=_editionKeyDate;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long mergeID; // @synthesize mergeID=_mergeID;
@property(retain, nonatomic) NSMutableArray *headlines; // @synthesize headlines=_headlines;
@property(nonatomic) int l2TagIDRef; // @synthesize l2TagIDRef=_l2TagIDRef;
@property(retain, nonatomic) NTPBColorGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) NTPBColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) int subtitleRef; // @synthesize subtitleRef=_subtitleRef;
@property(nonatomic) int titleRef; // @synthesize titleRef=_titleRef;
@property(retain, nonatomic) NTPBDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) int sourceIdentifierRef; // @synthesize sourceIdentifierRef=_sourceIdentifierRef;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDarkStyleSauceGradient;
@property(readonly, nonatomic) BOOL hasDarkStyleCardBackgroundColor;
@property(readonly, nonatomic) BOOL hasDarkStyleBackgroundGradient;
@property(readonly, nonatomic) BOOL hasDarkStyleTitleColor;
@property(readonly, nonatomic) BOOL hasCardBackgroundColor;
@property(readonly, nonatomic) BOOL hasSauceGradient;
@property(nonatomic) BOOL hasCtaTextRef;
@property(nonatomic) BOOL hasEyebrowTextRef;
@property(readonly, nonatomic) BOOL hasMagazineGroupIdentifier;
- (id)issueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)issueIDsCount;
- (void)addIssueIDs:(id)arg1;
- (void)clearIssueIDs;
- (id)videoPlaylistHeadlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPlaylistHeadlinesCount;
- (void)addVideoPlaylistHeadlines:(id)arg1;
- (void)clearVideoPlaylistHeadlines;
@property(readonly, nonatomic) BOOL hasDiscoverMoreVideosInfo;
@property(nonatomic) BOOL hasIsFirstFromEdition;
@property(readonly, nonatomic) BOOL hasEditionFeedEndDate;
@property(readonly, nonatomic) BOOL hasEditionFeedStartDate;
@property(readonly, nonatomic) BOOL hasEditionKeyDate;
@property(nonatomic) BOOL hasOptions;
@property(nonatomic) BOOL hasMergeID;
- (id)headlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)headlinesCount;
- (void)addHeadlines:(id)arg1;
- (void)clearHeadlines;
@property(nonatomic) BOOL hasL2TagIDRef;
@property(readonly, nonatomic) BOOL hasBackgroundGradient;
@property(readonly, nonatomic) BOOL hasTitleColor;
@property(nonatomic) BOOL hasSubtitleRef;
@property(nonatomic) BOOL hasTitleRef;
@property(readonly, nonatomic) BOOL hasCreationDate;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL hasSourceIdentifierRef;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)dealloc;

@end


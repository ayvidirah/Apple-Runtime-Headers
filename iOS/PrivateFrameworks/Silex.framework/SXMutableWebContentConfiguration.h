//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXWebContentConfiguration.h>

@class NSDictionary, NSLocale, NSString;

@interface SXMutableWebContentConfiguration : SXWebContentConfiguration
{
    NSString *storeFront;
    NSLocale *locale;
    NSString *contentSizeCategory;
    NSDictionary *dataSources;
    struct CGSize canvasSize;
    struct CGRect contentFrame;
}

@property(copy, nonatomic) NSDictionary *dataSources; // @synthesize dataSources;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale;
@property(copy, nonatomic) NSString *storeFront; // @synthesize storeFront;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidationContext-Protocol.h>

@class NSString, SXLayoutOptions;

@interface SXConditionValidationContext : NSObject <SXConditionValidationContext>
{
    SXLayoutOptions *_layoutOptions;
}

@property(readonly, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic) double contentScaleFactor;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic, getter=isChannelSubscriber) BOOL channelSubscriber;
@property(readonly, nonatomic, getter=isBundleSubscriber) BOOL bundleSubscriber;
@property(readonly, nonatomic) unsigned long long viewingLocation;
@property(readonly, nonatomic) BOOL testing;
@property(readonly, nonatomic) struct CGSize viewportSize;
@property(readonly, nonatomic) long long verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass;
@property(readonly, nonatomic) NSString *contentSizeCategory;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
- (id)initWithLayoutOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


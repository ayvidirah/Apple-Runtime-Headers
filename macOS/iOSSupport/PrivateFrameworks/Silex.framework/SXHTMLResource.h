//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXResource.h>

#import <Silex/SXHTMLResource-Protocol.h>

@class NSString, NSURL;

@interface SXHTMLResource : SXResource <SXHTMLResource>
{
}

- (id)baseURLWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *HTML; // @dynamic HTML;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSURL *baseURL; // @dynamic baseURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end


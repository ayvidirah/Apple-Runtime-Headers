//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentScript-Protocol.h>

@class NSString, WKUserScript;

@interface SXWebContentPresentationStateScript : NSObject <SXWebContentScript>
{
    WKUserScript *userScript;
    unsigned long long _presentationState;
}

@property(readonly, nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(readonly, nonatomic) WKUserScript *userScript; // @synthesize userScript;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) BOOL queueable;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithPresentationState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


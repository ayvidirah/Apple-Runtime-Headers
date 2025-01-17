//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMVIPManager-Protocol.h>

@class EAEmailAddressSet, NSSet, NSString;

@interface EMFakeVIPManager : NSObject <EMVIPManager>
{
}

- (id)vipWithIdentifier:(id)arg1;
- (BOOL)isVIPAddress:(id)arg1;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (void)cancelObservation:(id)arg1;
- (void)registerObserver:(id)arg1 observationIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPs;
@property(readonly, nonatomic) BOOL hasVIPs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID, SFBLEDevice;

@interface SFDevice : NSObject <NSSecureCoding>
{
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    unsigned char _deviceActionType;
    unsigned char _deviceClassCode;
    unsigned char _deviceModelCode;
    BOOL _duetSync;
    BOOL _hasProblem;
    BOOL _needsAWDL;
    BOOL _needsKeyboard;
    BOOL _needsSetup;
    BOOL _wakeDevice;
    BOOL _watchLocked;
    BOOL _wifiP2P;
    unsigned char _osVersion;
    BOOL _paired;
    unsigned int _deviceFlags;
    unsigned int _hotspotInfo;
    unsigned int _systemPairState;
    NSString *_accountID;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    NSString *_contactIdentifier;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_idsIdentifier;
    NSString *_mediaRemoteID;
    NSString *_mediaRouteID;
    NSString *_model;
    NSString *_name;
    unsigned long long _problemFlags;
    NSString *_rapportIdentifier;
    NSString *_requestSSID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(nonatomic) unsigned char osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) BOOL wifiP2P; // @synthesize wifiP2P=_wifiP2P;
@property(nonatomic) BOOL watchLocked; // @synthesize watchLocked=_watchLocked;
@property(nonatomic) BOOL wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property(nonatomic) unsigned int systemPairState; // @synthesize systemPairState=_systemPairState;
@property(copy, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property(readonly, nonatomic) NSString *rapportIdentifier; // @synthesize rapportIdentifier=_rapportIdentifier;
@property(readonly, nonatomic) unsigned long long problemFlags; // @synthesize problemFlags=_problemFlags;
@property(nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property(readonly, nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(readonly, nonatomic) BOOL needsAWDL; // @synthesize needsAWDL=_needsAWDL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *mediaRouteID; // @synthesize mediaRouteID=_mediaRouteID;
@property(readonly, copy, nonatomic) NSString *mediaRemoteID; // @synthesize mediaRemoteID=_mediaRemoteID;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property(readonly, nonatomic) BOOL duetSync; // @synthesize duetSync=_duetSync;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) unsigned char deviceModelCode; // @synthesize deviceModelCode=_deviceModelCode;
@property(nonatomic) unsigned int deviceFlags; // @synthesize deviceFlags=_deviceFlags;
@property(nonatomic) unsigned char deviceClassCode; // @synthesize deviceClassCode=_deviceClassCode;
@property(nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(copy, nonatomic) NSArray *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property(nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)updateWithRPIdentity:(id)arg1;
- (void)updateWithPairedPeer:(id)arg1;
- (void)updateWithBLEDevice:(id)arg1;
@property(readonly, nonatomic) BOOL needsKeyboardOnly;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


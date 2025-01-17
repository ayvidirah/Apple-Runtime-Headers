//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSCopying-Protocol.h>
#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSDictionary, NSString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldCache;
    _Bool _disableCompactVoiceFallback;
    _Bool _forceServerTTS;
    _Bool _canUseServerTTS;
    _Bool _retryDeviceOnNetworkStall;
    _Bool _useCustomVoice;
    _Bool _audioSessionIDIsValid;
    _Bool _maintainsInput;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSString *_languageCode;
    long long _footprint;
    long long _voiceType;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    NSDictionary *_contextInfo;
    NSURL *_resourceListURL;
    NSURL *_resourceSearchPathURL;
    NSAttributedString *_attributedText;
    NSString *_utterance;
    NSString *_clientBundleIdentifier;
    unsigned long long _requestCreatedTimestamp;
    CDUnknownBlockType _stopHandler;
    CDUnknownBlockType _pauseHandler;
    long long _pointer;
    NSString *_voiceName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(nonatomic) long long pointer; // @synthesize pointer=_pointer;
@property(copy, nonatomic) CDUnknownBlockType pauseHandler; // @synthesize pauseHandler=_pauseHandler;
@property(copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property(nonatomic) unsigned long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) _Bool useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSURL *resourceSearchPathURL; // @synthesize resourceSearchPathURL=_resourceSearchPathURL;
@property(copy, nonatomic) NSURL *resourceListURL; // @synthesize resourceListURL=_resourceListURL;
@property(nonatomic) _Bool retryDeviceOnNetworkStall; // @synthesize retryDeviceOnNetworkStall=_retryDeviceOnNetworkStall;
@property(nonatomic) _Bool canUseServerTTS; // @synthesize canUseServerTTS=_canUseServerTTS;
@property(nonatomic) _Bool forceServerTTS; // @synthesize forceServerTTS=_forceServerTTS;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool disableCompactVoiceFallback; // @synthesize disableCompactVoiceFallback=_disableCompactVoiceFallback;
@property(copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)contextInfoString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSimilarTo:(id)arg1;
- (id)description;
- (id)init;

@end


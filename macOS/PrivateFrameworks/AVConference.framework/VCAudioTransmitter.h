//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCConnectionChangedHandler-Protocol.h>

@class AVCStatisticsCollector, NSArray, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject <VCAudioIOSink, VCConnectionChangedHandler>
{
    VCPacketBundler *_audioBundler;
    VCAudioRedBuilder *_redBuilder;
    VCRedundancyControllerAudio *_redundancyController;
    struct opaqueVCAudioBufferList *_encodeBuffer;
    BOOL _lastIsTalking;
    double _lastTierSwitch;
    double _audioInterval;
    int _audioTierChangeRequestCount;
    int _audioTxBitrate;
    int _actualAudioSendingBitrate;
    unsigned int _lastSentAudioSampleTime;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    unsigned char _inputMeter;
    long long _blockSize;
    float _blockSeconds;
    double _lastUpdateQualityIndicator;
    int _qualityIndicator;
    VCAudioTierPicker *_audioTierPicker;
    VCAudioTier *_currentAudioTier;
    VCAudioTier *_requestedAudioTier;
    char *_lastInputSampleBuffer;
    unsigned int _lastInputSampleBufferSize;
    int _audioHeaderSize;
    BOOL _audioTierHysteresis;
    void *_packetThread;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int _currentTargetBitrate;
    unsigned int _currentDuplication;
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _redundancyControllerNumPayloads;
    unsigned int _redundancyControllerMaxDelay20ms;
    AVCStatisticsCollector *_statisticsCollector;
    BOOL _isAudioStalled;
    unsigned int _sentAudioBytes;
    unsigned int _encodedBytes;
    unsigned int _totalTxAudioBytes;
    unsigned int _estimateTxAudioBytes;
    unsigned int _audioFrameCounter;
    unsigned int _silenceFrameCounter;
    unsigned int _vadSegmentCounter;
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_afrc;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_rtpVideo;
    void *_controlInfoGenerator;
    BOOL _useRateControl;
    BOOL _isUseCaseWatchContinuity;
    BOOL _allowAudioSwitching;
    BOOL _supportsAdaptation;
    BOOL _needsPacketThread;
    BOOL _isLocalCellular_LowestConnectionQuality;
    BOOL _isRemoteCellular_LowestConnectionQuality;
    BOOL _isConnectedOnIPv6_LowestConnectionQuality;
    BOOL _isRedEnabled;
    BOOL _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    BOOL _transmitROC;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_currentDTXPayload;
    VCAudioPayload *_currentAudioPayload;
    int _currentRedPayloadType;
    unsigned int _currentAudioCap;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingModuleID;
    int _operatingMode;
    VCTransportSession *_transportSession;
    id _delegate;
    BOOL _ignoreSilence;
    unsigned int _tierNetworkBitrate;
    BOOL _sendActiveVoiceOnly;
    double _lastReportingCallbackTime;
    CDStruct_3ab08b48 _currentChannelMetrics;
    CDStruct_94aa5fb4 _idsChannelDataFormat;
    unsigned int _maxIDSStreamIdCount;
    NSArray *_supportedNumRedundantPayload;
    BOOL _currentDTXEnable;
    unsigned char _mediaControlInfoVersion;
    BOOL _alwaysOnAudioRedundancyEnabled;
    BOOL _cellularAllowRedLowBitratesEnabled;
    BOOL _wifiAllowRedLowBitratesEnabled;
}

@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) BOOL sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(nonatomic) CDStruct_3ab08b48 currentChannelMetrics; // @synthesize currentChannelMetrics=_currentChannelMetrics;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property(nonatomic) BOOL isAudioStalled; // @synthesize isAudioStalled=_isAudioStalled;
@property(nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) BOOL ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(readonly, nonatomic) BOOL isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property(readonly, nonatomic) int actualAudioSendingBitrate; // @synthesize actualAudioSendingBitrate=_actualAudioSendingBitrate;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property(readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property(readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)setStreamIDs:(id)arg1;
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2;
- (void)logTierInfo:(int)arg1;
@property(readonly, nonatomic) unsigned int redMaxDelay20ms;
@property(readonly, nonatomic) unsigned int redNumPayloads;
@property(readonly, nonatomic) unsigned int encodedBytes;
@property(readonly, nonatomic) unsigned int sentAudioBytes;
- (int)sendAudioPacket:(char *)arg1 payloadLength:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 priority:(unsigned char)arg5 marker:(int)arg6 nextInterval:(float)arg7 padding:(char *)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10;
- (int)sendAudioPacket:(struct tagAudioPacketData)arg1;
- (void *)generateControlInfo;
- (BOOL)sendAudioPacketImpl:(struct tagAudioPacketData *)arg1 bytesSent:(int *)arg2;
- (void)stop;
- (void)start;
- (void)useAudioTier:(id)arg1;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)updateAudioTxBitrate;
- (BOOL)setupAudioTierPicker;
- (void)setupAudioHeaderSize;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6 voiceActivity:(BOOL)arg7 priority:(unsigned char)arg8;
- (int)sendAudioBundle:(BOOL)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (BOOL)chooseAudioNetworkBitrate;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(BOOL)arg6;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)encodeBundleAndSendAudio:(struct opaqueVCAudioBufferList *)arg1 sampleCount:(unsigned int)arg2;
- (unsigned int)maximumSamplesPerFrame;
- (BOOL)allocateLastInputSampleBuffer:(unsigned int)arg1;
- (BOOL)setupAudioEncoders;
- (void)removeUnusedAudioPayloads;
- (id)usedAudioPayloadForType:(int)arg1;
- (BOOL)shouldUseDtx;
- (float)nextAudioInterval:(int)arg1;
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
- (void)reportRedundancyConfigChange;
- (void)registerReportingTask;
- (BOOL)setupAudio:(id *)arg1;
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;
- (BOOL)handleCodecRateModeChange:(unsigned char)arg1 withBitrate:(unsigned int)arg2;
- (BOOL)isLocalOrRemoteOnCellular;
@property id <VCAudioTransmitterDelegate> delegate;
@property(readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
- (void)dealloc;
- (void)initAudioValues;
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(BOOL)arg2;
- (id)initWithConfig:(id)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


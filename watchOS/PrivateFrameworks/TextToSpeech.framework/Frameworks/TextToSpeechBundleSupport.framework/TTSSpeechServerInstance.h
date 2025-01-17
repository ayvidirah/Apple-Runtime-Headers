//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, TTSSpeechServer, TTSTimer, TTSVocalizer;

@interface TTSSpeechServerInstance : NSObject
{
    NSLock *_speechLock;
    NSMutableArray *_speechRequestQueue;
    unsigned char _speechActive;
    unsigned char _speechThreadActive;
    struct __CFRunLoop *_speechThreadRunLoop;
    struct __CFRunLoopSource *_speechActivitySignal;
    CDStruct_347baace *_speechActiveContext;
    unsigned char _newVoiceInstalled;
    unsigned char _speechThreadPriorityIsHigh;
    unsigned char _shouldTerminateThread;
    unsigned long long _synthesizerId;
    TTSTimer *_wordCallbackTimer;
    TTSSpeechServer *_speechService;
    TTSVocalizer *_vocalizer;
}

@property(nonatomic) unsigned long long synthesizerId; // @synthesize synthesizerId=_synthesizerId;
@property(retain, nonatomic) TTSVocalizer *vocalizer; // @synthesize vocalizer=_vocalizer;
@property(nonatomic) TTSSpeechServer *speechService; // @synthesize speechService=_speechService;
@property(retain, nonatomic) TTSTimer *wordCallbackTimer; // @synthesize wordCallbackTimer=_wordCallbackTimer;
- (id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg1 playback:(struct __TTSPlayback *)arg2 inContext:(void *)arg3;
- (struct __CFArray *)loadedVoiceResources;
- (_Bool)_defaultVoiceIsFallback;
- (void)_ttsLogSpeechForServerRequest:(id)arg1;
- (void)_uninitializeSpeech:(CDStruct_347baace *)arg1;
- (void)_loadVoiceResource:(CDStruct_347baace *)arg1 voiceResource:(id)arg2;
- (void)_setParameters:(CDStruct_347baace *)arg1 rate:(float)arg2 pitch:(float)arg3 volume:(float)arg4 footprint:(long)arg5;
- (void)_initializeSpeech:(CDStruct_347baace *)arg1;
- (void)_initializeSpeechEngine:(CDStruct_347baace *)arg1;
- (_Bool)_footprintOrVoiceNameHasChanged:(CDStruct_347baace *)arg1;
- (id)_ttSSpeechServerCopyVoiceNamesForLanguage:(id)arg1 voiceType:(long)arg2;
- (void)_newVoiceInstalled;
- (void)processMarker:(int)arg1 withByteOffset:(unsigned long)arg2 markerPosition:(unsigned long)arg3 markerLength:(unsigned long)arg4 context:(CDStruct_347baace *)arg5 currentTime:(unsigned long long)arg6;
- (unsigned char)_shouldContinueSpeechGivenMark:(CDStruct_347baace *)arg1 markType:(int)arg2 blockIfPaused:(unsigned char)arg3;
- (unsigned char)_needsParameterChange:(CDStruct_347baace *)arg1 lock:(unsigned char)arg2 rate:(float *)arg3 pitch:(float *)arg4 volume:(float *)arg5 footprint:(long *)arg6 voiceType:(long *)arg7;
- (void)_handleSpeechThread;
- (unsigned int)_vocalizerMessageBufferDone:(struct _VE_HSAFE)arg1 context:(CDStruct_b823fdf7 *)arg2 outData:(CDStruct_ef07e5a0 *)arg3;
- (void)_terminateThread;
- (unsigned char)_activeRequestShouldPauseImmediately:(CDStruct_347baace *)arg1;
- (unsigned char)_activeRequestShouldStopImmediately:(CDStruct_347baace *)arg1;
- (unsigned char)_activeRequestShouldStopAtAnyMark:(CDStruct_347baace *)arg1;
- (unsigned char)_activeRequestShouldContinue:(CDStruct_347baace *)arg1;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_speechThreadSignal;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(int)arg2;
- (oneway void)continueSpeechRequest:(id)arg1;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(int)arg2;
- (unsigned char)_setActiveRequestActionForMark:(int)arg1 clientRequest:(id)arg2 markType:(int)arg3;
- (void)_cleanupAfterRequest:(CDStruct_347baace *)arg1;
- (void)_processCurrentRequest:(CDStruct_347baace *)arg1;
- (void)_startSpeechThread;
- (void)_appendSpeechRequestAndStart:(id)arg1;
- (oneway void)startSpeechRequest:(id)arg1;
- (id)_getAvailableVoiceForVoice:(id)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

#import <ScreenReader/SCRText-Protocol.h>
#import <ScreenReader/SCRTextDelayedWordEchoHelperDataSource-Protocol.h>
#import <ScreenReader/SCRTextDelayedWordEchoHelperDelegate-Protocol.h>

@class NSString, SCRElement, SCRTextAreaChange, SCRTextDelayedWordEchoHelper, SCRTextMarkerRange, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRTextArea : SCRMapElement <SCRTextDelayedWordEchoHelperDataSource, SCRTextDelayedWordEchoHelperDelegate, SCRText>
{
    struct {
        double time;
        long long count;
    } _selectionThrottling;
    BOOL _observingSelectedTextChangedNotification;
    BOOL _observingTextValueChangedNotification;
    SCRTextAreaChange *__lastValueChange;
    SCRUIElement *__lastValueChangeUIElement;
    long long __lastValueChangeCharCount;
    SCRTextDelayedWordEchoHelper *__wordEchoHelper;
    SCRElement *_magicPressElement;
    CDStruct_97f7034d _command;
}

@property(retain, nonatomic) SCRElement *magicPressElement; // @synthesize magicPressElement=_magicPressElement;
@property(nonatomic) CDStruct_97f7034d command; // @synthesize command=_command;
@property(retain, nonatomic, setter=_setWordEchoHelper:) SCRTextDelayedWordEchoHelper *_wordEchoHelper; // @synthesize _wordEchoHelper=__wordEchoHelper;
@property(nonatomic, setter=_setLastValueChangeCharCount:) long long _lastValueChangeCharCount; // @synthesize _lastValueChangeCharCount=__lastValueChangeCharCount;
@property(retain, nonatomic, setter=_setLastValueChangeUIElement:) SCRUIElement *_lastValueChangeUIElement; // @synthesize _lastValueChangeUIElement=__lastValueChangeUIElement;
@property(retain, nonatomic, setter=_setLastValueChange:) SCRTextAreaChange *_lastValueChange; // @synthesize _lastValueChange=__lastValueChange;
@property(nonatomic, getter=isObservingTextValueChangedNotification) BOOL observingTextValueChangedNotification; // @synthesize observingTextValueChangedNotification=_observingTextValueChangedNotification;
@property(nonatomic, getter=isObservingSelectedTextChangedNotification) BOOL observingSelectedTextChangedNotification; // @synthesize observingSelectedTextChangedNotification=_observingSelectedTextChangedNotification;
- (void).cxx_destruct;
- (BOOL)textSelectionUpdateInProgress;
- (BOOL)advanceInsertionPointWithDirection:(long long)arg1 granularity:(long long)arg2 uiElement:(id)arg3 outputRequest:(id)arg4;
- (BOOL)_advanceInsertionPointWithDirection:(long long)arg1 granularity:(long long)arg2 uiElement:(id)arg3 outputRequest:(id)arg4;
- (void)_moveToSelectedTextMarkerRange:(id)arg1 command:(CDStruct_97f7034d)arg2 uiElement:(id)arg3 outputRequest:(id)arg4;
- (id)selectedTextMarkerRangeWithFallbackToHitTesting:(id)arg1;
- (id)rotorIdentifiers;
- (BOOL)moveToNextParagraphWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToPreviousParagraphWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToNextLineWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToPreviousLineWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToNextSentenceWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToPreviousSentenceWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToNextWordWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)moveToPreviousWordWithOutputRequest:(id)arg1 event:(id)arg2;
- (void)addLastWordToOutputRequest:(id)arg1;
- (void)addFirstWordToOutputRequest:(id)arg1;
- (void)addReachedEndOfTextDescriptionToOutputRequest:(id)arg1;
- (void)addReachedBeginningOfTextDescriptionToOutputRequest:(id)arg1;
- (void)addReachedBoundarySoundToOutputRequest:(id)arg1;
- (void)addTextBoundaryToOutputRequest:(id)arg1 uiElement:(id)arg2 edge:(long long)arg3;
- (BOOL)isSelectedTextRangeSettable;
- (BOOL)isTextElement;
- (BOOL)moveToLastElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstElementWithEvent:(id)arg1 request:(id)arg2;
@property(retain, nonatomic) SCRTextMarkerRange *lastSelectedTextMarkerRange;
- (void)setSelectedTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)selectedTextMarkerRangeWithUIElement:(id)arg1;
- (id)markerRangeWithUIElement:(id)arg1;
- (BOOL)shouldHandleTextChanges;
- (BOOL)shouldHandleTextSelection;
- (BOOL)shouldHandleTextNavigation;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (id)newOutputRequestForTextMarkerRange:(id)arg1 withUIElement:(id)arg2 command:(CDStruct_97f7034d)arg3 lastSelectedTextMarkerRange:(id)arg4 selectedTextMarkerRange:(id)arg5 variants:(id)arg6;
- (id)newOutputRequest;
- (void)moveInsertionToElement:(id)arg1 affinity:(long long)arg2;
- (id)validatedTextMarkerRangeForUIElement:(id)arg1;
- (void)handleTextChangesWithUIElement:(id)arg1 changes:(struct NSArray *)arg2 secure:(BOOL)arg3;
- (void)handleTextSelectionWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4;
- (void)handleTextNavigationWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4 outputRequest:(id)arg5;
- (void)handleTextBoundaryWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 outputRequest:(id)arg3;
- (void)_handleTextBoundaryWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2;
- (id)navigationTextMarkerRangeForDiscontiguousNavigationWithUIElement:(id)arg1 lastSelectedTextMarkerRange:(id)arg2 selectedTextMarkerRange:(id)arg3;
- (BOOL)interactPageDownCommandWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpCommandWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleOptionRightArrowEvent;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (BOOL)wordEchoHelper:(id)arg1 echoTextMarkerRangeForWord:(id)arg2 additionalContent:(id)arg3;
- (BOOL)wordEchoHelper:(id)arg1 textMarkerPrecedesOrEquals:(id)arg2 textMarker:(id)arg3;
- (id)wordEchoHelper:(id)arg1 wordTextMarkerRangeForTextMarker:(id)arg2;
@property(readonly, nonatomic) double wordEchoDelay;
- (void)dealloc;
- (id)_navigationTextMarkerRangeWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4;
- (id)_lineTextMarkerRangeWithUIElement:(id)arg1 command:(CDStruct_97f7034d)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4;
- (void)_prepareForKeyboardSyncWithTextMarkerRange:(id)arg1 targetUIElement:(id)arg2;
- (void)sendOutputRequest:(id)arg1;
- (void)_sendOutputRequest:(id)arg1 processCursorMovement:(BOOL)arg2 updateBraille:(BOOL)arg3;
- (void)_addLastGranularTextSegment:(long long)arg1 uiElement:(id)arg2 forEdge:(long long)arg3 withRequest:(id)arg4;
- (void)_syncVOCursorWithElementIfNeeded:(id)arg1 bounds:(struct CGRect)arg2 moveInsertionPoint:(BOOL)arg3 request:(id)arg4;
- (BOOL)_focusChangeIsLikelyDuringMove:(id)arg1 targetFocusedElement:(id)arg2;
- (CDStruct_d7010776)shouldMoveFocusFromElement:(id)arg1 toElement:(id)arg2;
- (void)_updateCommandWithEvent:(id)arg1;
- (id)_outputRequestComponentsForAttributedString:(id)arg1;
- (void)_unregisterSelectedTextChangedObserverIfNeeded;
- (void)_registerSelectedTextChangedObserverIfNeeded;
@property(readonly, nonatomic) SCRElement *elementToObserveForTextChanges;
- (id)currentBrailleLineWithEchoRange:(id)arg1;
- (id)_lineFeedCharacterAttributedString;
- (void)_handleTextValueChangedNotification:(id)arg1;
- (void)__setCommandAndLastSelectedTextMarkerRange:(CDStruct_97f7034d)arg1 textMarkerRange:(id)arg2;
- (void)__handleSelectedTextChangedNotification:(id)arg1;
- (void)_handleSelectedTextChangedNotification:(id)arg1;
- (id)_firstNavigableElementForTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)_firstLinkForTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (unsigned long long)_clampedLengthForTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)_attachmentCharacterAttributedString;
- (void)addStringOutputToOutputRequest:(id)arg1 string:(id)arg2 variants:(id)arg3;
- (void)addAttributedStringOutputToOutputRequest:(id)arg1 attributedString:(id)arg2 variants:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


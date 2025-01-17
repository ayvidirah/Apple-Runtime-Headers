//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>
#import <QuickLook/QLPreviewItemPrivateProtocol-Protocol.h>
#import <QuickLook/QLTExtensionThumbnailItem-Protocol.h>

@class FPItem, FPSandboxingURLWrapper, NSData, NSDictionary, NSItemProvider, NSNumber, NSString, NSURL, NSUUID, QLItemFetcher, QLPreviewItemEditedCopy, QLUTIAnalyzer, UIColor;
@protocol QLItemThumbnailGeneratorProtocolInternal, QLPreviewItemDataProvider, QLPreviewItemPrivateProtocol;

@interface QLItem : NSObject <QLTExtensionThumbnailItem, QLPreviewItemPrivateProtocol, NSSecureCoding>
{
    long long _editedFileExtensionHandle;
    _Bool _useAVPlayerViewController;
    _Bool _useFullPDFTransition;
    _Bool _useLoadingTimeout;
    _Bool _wantsPreviewInDebugViewController;
    _Bool _isPromisedItem;
    _Bool _canBeEdited;
    _Bool _canHandleEditedCopy;
    _Bool _originalContentWasUpdated;
    _Bool _canBeShared;
    _Bool _hasDeterminedShouldUseExtensionPreview;
    _Bool _shouldUseExtensionPreview;
    _Bool _hasDeterminedShouldUseExtensionThumbnail;
    _Bool _shouldUseExtensionThumbnail;
    _Bool _needsAccessToExternalResources;
    NSNumber *_previewItemProviderProgress;
    FPItem *_fpItem;
    id <QLPreviewItemPrivateProtocol> _originalPreviewItem;
    NSURL *_previewItemURL;
    NSData *_previewItemData;
    id <QLPreviewItemDataProvider> _previewItemDataProvider;
    NSString *_searchableItemIdentifier;
    NSString *_spotlightQueryString;
    NSString *_searchableItemApplicationBundleIdentifier;
    NSString *_relativePath;
    NSItemProvider *_previewItemProvider;
    NSNumber *_itemSize;
    QLItemFetcher *_fetcher;
    id <QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
    QLUTIAnalyzer *_UTIAnalyzer;
    NSString *_previewItemContentType;
    UIColor *_backgroundColorOverride;
    NSString *_previewItemTitle;
    QLPreviewItemEditedCopy *_editedCopy;
    QLPreviewItemEditedCopy *_lastSavedEditedCopy;
    NSString *_password;
    NSUUID *_uuid;
    unsigned long long _previewItemType;
    long long _processIdentifier;
    long long _editingMode;
    unsigned long long _editedFileBehavior;
    FPSandboxingURLWrapper *_sandboxingURLWrapper;
    NSDictionary *_clientPreviewOptions;
}

+ (id)encodedClasses;
+ (id)customExtensionCommunicationEncodedClasses;
+ (_Bool)supportsSecureCoding;
+ (id)itemWithPreviewItem:(id)arg1;
+ (_Bool)shouldUseRemoteCollection:(id)arg1;
+ (id)contentTypesToPreviewTypes;
+ (_Bool)contentTypeConformsToRTFD:(id)arg1;
+ (id)rtfContentTypes;
+ (id)webContentTypes;
+ (id)supportedContentTypes;
@property _Bool needsAccessToExternalResources; // @synthesize needsAccessToExternalResources=_needsAccessToExternalResources;
@property(copy, nonatomic) NSDictionary *clientPreviewOptions; // @synthesize clientPreviewOptions=_clientPreviewOptions;
@property(retain, nonatomic) FPSandboxingURLWrapper *sandboxingURLWrapper; // @synthesize sandboxingURLWrapper=_sandboxingURLWrapper;
@property(nonatomic) _Bool shouldUseExtensionThumbnail; // @synthesize shouldUseExtensionThumbnail=_shouldUseExtensionThumbnail;
@property(nonatomic) _Bool hasDeterminedShouldUseExtensionThumbnail; // @synthesize hasDeterminedShouldUseExtensionThumbnail=_hasDeterminedShouldUseExtensionThumbnail;
@property(nonatomic) _Bool shouldUseExtensionPreview; // @synthesize shouldUseExtensionPreview=_shouldUseExtensionPreview;
@property(nonatomic) _Bool hasDeterminedShouldUseExtensionPreview; // @synthesize hasDeterminedShouldUseExtensionPreview=_hasDeterminedShouldUseExtensionPreview;
@property(nonatomic) unsigned long long editedFileBehavior; // @synthesize editedFileBehavior=_editedFileBehavior;
@property(nonatomic) _Bool canBeShared; // @synthesize canBeShared=_canBeShared;
@property(nonatomic) long long editingMode; // @synthesize editingMode=_editingMode;
@property(nonatomic) _Bool originalContentWasUpdated; // @synthesize originalContentWasUpdated=_originalContentWasUpdated;
@property(nonatomic) _Bool canHandleEditedCopy; // @synthesize canHandleEditedCopy=_canHandleEditedCopy;
@property(nonatomic) _Bool canBeEdited; // @synthesize canBeEdited=_canBeEdited;
@property(nonatomic) _Bool isPromisedItem; // @synthesize isPromisedItem=_isPromisedItem;
@property long long processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(nonatomic) unsigned long long previewItemType; // @synthesize previewItemType=_previewItemType;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) QLPreviewItemEditedCopy *lastSavedEditedCopy; // @synthesize lastSavedEditedCopy=_lastSavedEditedCopy;
@property(retain, nonatomic) QLPreviewItemEditedCopy *editedCopy; // @synthesize editedCopy=_editedCopy;
@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain, nonatomic) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property(retain, nonatomic) NSString *previewItemContentType; // @synthesize previewItemContentType=_previewItemContentType;
@property(retain, nonatomic) QLUTIAnalyzer *UTIAnalyzer; // @synthesize UTIAnalyzer=_UTIAnalyzer;
@property(retain, nonatomic) id <QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
@property(retain, nonatomic) QLItemFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) NSNumber *itemSize; // @synthesize itemSize=_itemSize;
@property(retain) NSItemProvider *previewItemProvider; // @synthesize previewItemProvider=_previewItemProvider;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(retain) NSString *searchableItemApplicationBundleIdentifier; // @synthesize searchableItemApplicationBundleIdentifier=_searchableItemApplicationBundleIdentifier;
@property(retain) NSString *spotlightQueryString; // @synthesize spotlightQueryString=_spotlightQueryString;
@property(retain) NSString *searchableItemIdentifier; // @synthesize searchableItemIdentifier=_searchableItemIdentifier;
@property(retain) id <QLPreviewItemDataProvider> previewItemDataProvider; // @synthesize previewItemDataProvider=_previewItemDataProvider;
@property(retain) NSData *previewItemData; // @synthesize previewItemData=_previewItemData;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;
@property(retain, nonatomic) id <QLPreviewItemPrivateProtocol> originalPreviewItem; // @synthesize originalPreviewItem=_originalPreviewItem;
@property(retain) FPItem *fpItem; // @synthesize fpItem=_fpItem;
@property _Bool wantsPreviewInDebugViewController; // @synthesize wantsPreviewInDebugViewController=_wantsPreviewInDebugViewController;
@property(copy, nonatomic) NSNumber *previewItemProviderProgress; // @synthesize previewItemProviderProgress=_previewItemProviderProgress;
@property(nonatomic) _Bool useLoadingTimeout; // @synthesize useLoadingTimeout=_useLoadingTimeout;
@property(nonatomic) _Bool useFullPDFTransition; // @synthesize useFullPDFTransition=_useFullPDFTransition;
@property _Bool useAVPlayerViewController; // @synthesize useAVPlayerViewController=_useAVPlayerViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *editedFileURL;
- (void)_removeEditedCopyIfExists;
- (id)saveURL;
- (void)prepareSaveURL:(CDUnknownBlockType)arg1;
- (id)shareableURL;
- (void)prepareShareableURL:(CDUnknownBlockType)arg1;
@property(readonly) NSString *MIMEType;
- (_Bool)canBePreviewed;
- (id)createPreviewContext;
@property(copy, nonatomic) NSDictionary *previewOptions;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)internalCopy;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1 applicationBundleIdentifier:(id)arg2;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3 previewTitle:(id)arg4;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2;
- (id)initWithURLSandboxWrapper:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;
- (id)initWithFPItem:(id)arg1;
- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4;
- (void)_commonInit;
@property(readonly, copy, nonatomic) NSString *contentType;
- (void)provideURLWrapper:(CDUnknownBlockType)arg1;
- (_Bool)canBePrintedWithCustomPrinter;
- (_Bool)shouldUseRemoteViewController;
- (struct CGSize)previewSizeForItemViewControllerSize:(struct CGSize)arg1;
- (unsigned long long)maximumNumberOfCachedPreviews;
- (long long)defaultWhitePointAdaptivityStyle;
- (double)maxLoadingTime;
- (_Bool)useExtensionThumbnail;
- (_Bool)useExtensionPreview;
- (id)previewItemViewControllerClassName;
- (id)previewItemPrintingViewControllerClassName;
- (Class)transformerClass;
- (_Bool)isStandardQuickLookType;
- (unsigned long long)_getPreviewItemType;
- (unsigned long long)_uncachedPreviewItemType;
- (unsigned long long)_uncachedExtensionPreviewItemType;

// Remaining properties
@property(readonly) double autoPlaybackPosition;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSURL *previewItemURLForDisplay;
@property(readonly) Class superclass;
@property(readonly) _Bool wantsDefaultMediaPlayer;

@end


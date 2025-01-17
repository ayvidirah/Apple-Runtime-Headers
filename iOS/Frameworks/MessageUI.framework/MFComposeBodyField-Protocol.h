//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class EFFuture, MFAttachment, NSArray, NSData, NSDictionary, NSString, NSURL;
@protocol MFMailComposeViewDelegate;

@protocol MFComposeBodyField <NSObject>
@property(readonly, nonatomic) _Bool allowsAttachmentElements;
@property(nonatomic) __weak NSString *compositionContextID;
@property(nonatomic, getter=isDirty) _Bool dirty;
@property(nonatomic) __weak id <MFMailComposeViewDelegate> mailComposeViewDelegate;
- (void)releaseFocusAfterDismissing;
- (void)retainFocusAfterPresenting;
- (void)markupSelectedAttachment;
- (NSArray *)contentIDsForMediaAttachments;
- (void)insertScannedDocumentWithData:(NSData *)arg1;
- (NSString *)nextAttachmentName;
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentData:(NSData *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentAtURL:(NSURL *)arg2 completion:(void (^)(MFAttachment *))arg3;
- (void)insertDocumentWithData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 contentID:(NSString *)arg4;
- (void)insertDocumentWithURL:(NSURL *)arg1 isDrawingFile:(_Bool)arg2;
- (void)removeMediaWithAssetIdentifier:(NSString *)arg1;
- (void)insertPhotoOrVideoWithAssetIdentifier:(NSString *)arg1 infoDictionary:(NSDictionary *)arg2;
- (void)changeQuoteLevel:(long long)arg1;
- (void)layoutWithMinimumSize;
- (void)updateInputAssistantItem;
- (void)endPreventingLayout;
- (void)beginPreventingLayout;
- (void)showOriginalAttachments;
- (void)setOriginalAttachmentInfo:(NSArray *)arg1;
- (void)removeDropPlaceholders;
- (void)replaceImagesIfNecessary;
- (void)setCaretPosition:(unsigned long long)arg1;
- (struct _NSRange)selectedRange;
- (struct CGRect)rectOfElementWithID:(NSString *)arg1;
- (EFFuture *)htmlString;
- (void)getHTMLStringsAttachmentsAndPlainTextAlternative:(void (^)(ECHTMLStringAndMIMECharset *, NSArray *, MFPlainTextDocument *))arg1;
- (EFFuture *)plainTextContent;
- (EFFuture *)containsRichText;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(_Bool)arg1;
- (void)appendOrReplace:(NSString *)arg1 withMarkupString:(NSString *)arg2 quote:(_Bool)arg3;
- (void)appendMarkupString:(NSString *)arg1 quote:(_Bool)arg2;
- (void)prependMarkupString:(NSString *)arg1 quote:(_Bool)arg2;
- (void)prependPreamble:(NSString *)arg1 quote:(_Bool)arg2;
- (void)prependString:(NSString *)arg1;
- (void)setReplacementFilenamesByContentID:(NSDictionary *)arg1;
- (void)unscaleImages;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (void)setPrefersFirstLineSelection;
- (void)setMarkupString:(NSString *)arg1 quote:(_Bool)arg2;
- (void)setMarkupString:(NSString *)arg1;

@optional
- (void)compositionDidFailToFinish;
- (void)compositionWillFinish;
@end


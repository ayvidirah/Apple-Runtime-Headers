//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FCPurchase, NSError, NSString;
@protocol FCPurchaseManagerDelegate;

@protocol FCPurchaseManagerType
- (BOOL)anyOngoingPurchases;
- (BOOL)isPurchaseOngoingForTagID:(NSString *)arg1;
- (void)authenticateAppleIDWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)simulateFailurePurchaseWithProductID:(NSString *)arg1 transactionState:(long long)arg2 error:(NSError *)arg3;
- (void)simulateSuccessfulPurchaseWithProductID:(NSString *)arg1 tagID:(NSString *)arg2 purchaseID:(NSString *)arg3;
- (void)startPurchaseWithTagID:(NSString *)arg1 purchase:(FCPurchase *)arg2 webAccessOptIn:(BOOL)arg3 error:(id *)arg4;
- (void)startBundlePurchaseWithPurchase:(FCPurchase *)arg1 error:(id *)arg2;
- (id)fetchPurchaseMetadataForPurchaseID:(NSString *)arg1 restorePurcase:(BOOL)arg2;
@property(nonatomic) __weak id <FCPurchaseManagerDelegate> delegate;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemCollectionViewController.h>

#import <HomeUI/HUQuickControlCollectionViewDelegateLayout-Protocol.h>
#import <HomeUI/HUQuickControlContentCharacteristicWriting-Protocol.h>
#import <HomeUI/HUQuickControlInteractiveContentContaining-Protocol.h>
#import <HomeUI/HUQuickControlItemUpdating-Protocol.h>
#import <HomeUI/HUQuickControlTouchContinuing-Protocol.h>

@class HUQuickControlCollectionItemManager, HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlCollectionViewLayout, HUQuickControlContentCharacteristicWritingUpdateAdapter, NSMapTable, NSSet, NSString;
@protocol HULayoutAnchorProviding, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting;

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing>
{
    BOOL _userInteractionEnabled;
    BOOL _disableItemUpdatesForOverrideCharacteristicValueChanges;
    id <HUQuickControlContentCharacteristicWritingDelegate> _characteristicWritingDelegate;
    id <HUQuickControlContentHosting> _quickControlHost;
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    HUQuickControlCollectionViewControllerLayoutOptions *_layoutOptions;
    NSMapTable *_viewControllersKeyedByItem;
    HUQuickControlContentCharacteristicWritingUpdateAdapter *_characteristicWritingAdapter;
}

@property(readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter; // @synthesize characteristicWritingAdapter=_characteristicWritingAdapter;
@property(readonly, nonatomic) NSMapTable *viewControllersKeyedByItem; // @synthesize viewControllersKeyedByItem=_viewControllersKeyedByItem;
@property(nonatomic) BOOL disableItemUpdatesForOverrideCharacteristicValueChanges; // @synthesize disableItemUpdatesForOverrideCharacteristicValueChanges=_disableItemUpdatesForOverrideCharacteristicValueChanges;
@property(retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide; // @synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) __weak id <HUQuickControlContentHosting> quickControlHost; // @synthesize quickControlHost=_quickControlHost;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate; // @synthesize characteristicWritingDelegate=_characteristicWritingDelegate;
- (void).cxx_destruct;
- (id)overrideValueForCharacteristic:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *affectedCharacteristics;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)quickControlItemHost:(id)arg1 didUpdateVisibility:(BOOL)arg2;
- (double)heightForSupplementaryViewAtIndexPath:(id)arg1;
- (id)intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (id)viewForTouchContinuation;
- (id)_allContentViewControllers;
- (id)_allViewControllers;
- (void)_propagateInteractiveContentStateForChildViewControllers:(id)arg1;
- (id)_createCellContainerForViewController:(id)arg1 forItem:(id)arg2;
- (id)_viewControllerForItem:(id)arg1;
- (unsigned long long)_titlePositionForItem:(id)arg1;
- (void)_reconfigureLayoutOptions;
- (id)_controlItemsForItem:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithItemManager:(id)arg1;

// Remaining properties
@property(retain, nonatomic) HUQuickControlCollectionViewLayout *collectionViewLayout; // @dynamic collectionViewLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUQuickControlCollectionItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end


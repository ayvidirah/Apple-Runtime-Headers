//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_NSCollectionLayoutVisibleItem-Protocol.h>

@class NSCollectionLayoutItem, NSIndexPath, NSString, UIBezierPath, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem>
{
    BOOL _dirty;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSCollectionLayoutItem *_layoutItem;
}

@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSCollectionLayoutItem *layoutItem; // @synthesize layoutItem=_layoutItem;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *representedElementKind;
@property(readonly, nonatomic) unsigned long long representedElementCategory;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) long long zIndex;
@property(nonatomic) double alpha;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CATransform3D transform3D;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionView, NSMutableDictionary, UICollectionViewLayout;

@interface UICollectionViewData : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int contentSizeIsValid : 1; 
        unsigned int itemCountsAreValid : 1; 
        unsigned int layoutIsPrepared : 1; 
    UICollectionView *_collectionView;
    } _collectionViewDataFlags;
    } _contentSize;
    NSMutableDictionary *_decorationLayoutAttributes;
    id *_globalItems;
    UICollectionViewLayout *_layout;
    int _numItems;
    int _numSections;
    NSMutableDictionary *_screenPageDict;
    int *_sectionItemCounts;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    } _validLayoutRect;
}

@property(readonly) BOOL layoutIsPrepared;

+ (void)initialize;

- (void)_loadEverything;
- (void)_prepareToLoadData;
- (id)_screenPageForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (void)_setupMutableIndexPath:(id*)arg1 forGlobalItemIndex:(int)arg2;
- (void)_updateItemCounts;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collectionViewContentRect;
- (void)dealloc;
- (id)existingSupplementaryLayoutAttributesInSection:(int)arg1;
- (int)globalIndexForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtGlobalIndex:(int)arg1;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;
- (void)invalidate:(BOOL)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInSection:(int)arg1;
- (id)layoutAttributesForGlobalItemIndex:(int)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)layoutIsPrepared;
- (int)numberOfItems;
- (int)numberOfItemsBeforeSection:(int)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForGlobalItemIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:42:15).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@interface NSOutlineView (DVTAdditions)
- (double)dvt_widthForCellAtColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)dvt_isViewBased;
- (void)dvt_expandRowAndPossiblySiblings:(id)arg1;
- (BOOL)dvt_interceptDisclosureButtonAction:(id)arg1;
- (void)dvt_setExpansionState:(BOOL)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)dvt_toggleExpansionItem:(id)arg1 animated:(BOOL)arg2;
- (id)dvt_childrenOfItem:(id)arg1;
- (void)dvt_cusotmizeDisclosureButtonToAllowDisclosingSiblings:(id)arg1;
- (id)dvt_rowIndexesOfVisibleItems:(id)arg1;
- (id)dvt_contextMenuSelectedItems;
- (id)dvt_selectedItems;
- (id)dvt_allItems;
- (id)dvt_itemsAtRowIndexes:(id)arg1;
- (void)dvt_enumerateExpandedItemsUsingBlock:(CDUnknownBlockType)arg1;
@end


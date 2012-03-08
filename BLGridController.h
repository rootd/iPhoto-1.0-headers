/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class BLViewerController, NSArray, NSDictionary, UITableView, UIView;

@interface BLGridController : _ACAccountTypeIdentifierTwitter <UIGestureRecognizerDelegate>
{
    UITableView *m_tableView;
    UIView *m_tableWrapper;
    BLViewerController *m_viewerController;
    int m_numColumns;
    BOOL m_horizontal;
    NSArray *m_rowData;
    NSDictionary *m_borderViewCache;
    BOOL m_selectionChangeInProgress;
    BOOL m_ignoreSelectionChanges;
    BOOL m_bestOf;
    BOOL m_flagged;
    BOOL m_inUse;
    BOOL m_isJournal;
    int m_rangeSelectStartIndex;
    unsigned int m_maxMarkingCount;
    BOOL m_maxMarkingLimitReached;
}

- (void)setMaxMarkingLimitReached:(BOOL)fp8;
- (BOOL)maxMarkingLimitReached;
- (unsigned int)maxMarkingCount;
- (void)setRangeSelectStartIndex:(int)fp8;
- (int)rangeSelectStartIndex;
- (BOOL)isJournal;
- (BOOL)inUse;
- (BOOL)flagged;
- (BOOL)bestOf;
- (void)setRowData:(id)fp8;
- (BOOL)horizontal;
- (void)setViewerController:(id)fp8;
- (id)viewerController;
- (void)setM_tableWrapper:(id)fp8;
- (id)m_tableWrapper;
- (void)setM_tableView:(id)fp8;
- (id)m_tableView;
- (void)dealloc;
- (void)awakeFromNib;
- (void)userTwoFingerTapped:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (int)indexAtLocation:(struct CGPoint)fp8;
- (void)albumContentsChanged:(id)fp8;
- (void)primarySelectionChanged;
- (void)tableViewDidResize;
- (void)selectionChanged;
- (void)selectionChanged:(BOOL)fp8;
- (int)rowForIndex:(int)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (int)startIndexForRow:(int)fp8;
- (int)numberOfColumnsForRow:(int)fp8;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (struct CGRect)frameForPhoto:(id)fp8 inView:(id)fp12;
- (void)setHorizontal:(BOOL)fp8;
- (void)setNumberOfColumns:(int)fp8;
- (int)numberOfColumns;
- (void)reloadData:(BOOL)fp8;
- (id)rowData;
- (void)moveAllCells;
- (void)releaseExtraViews;
- (void)releaseCachedViews;
- (void)cacheViews;
- (id)borderViewCache;
- (id)album;
- (id)photos;
- (void)setUserInteractionEnabled:(BOOL)fp8;
- (BOOL)userInteractionEnabled;
- (BOOL)includedStateForPhoto:(id)fp8;
- (int)selectionStateForPhoto:(id)fp8;
- (void)removePhotoFromSelection:(id)fp8;
- (void)addPhotoToSelection:(id)fp8 imageView:(id)fp12;
- (void)longPressedPhoto:(id)fp8;
- (void)beginThumbnailCompare:(id)fp8;
- (id)sortPhotos:(id)fp8;
- (void)tappedOnPhoto:(id)fp8;
- (void)setMaxMarkingCount:(unsigned int)fp8;
- (void)beginSelectionChange;
- (void)endSelectionChange;

@end


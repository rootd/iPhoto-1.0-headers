/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BLAlbum, BLDBRequest, BLJournalAddItemsViewController, BLJournalEditor, BLJournalElementView, BLJournalPageListViewController, BLJournalScrollView, BLSharingNavigationController, NSArray, NSDictionary, NSMutableArray, NSTimer, UIActionSheet, UIButton, UILongPressGestureRecognizer, UINavigationController, UIPanGestureRecognizer, UIPopoverController, UITapGestureRecognizer, UIView, UIViewController;

@interface BLJournalController : _ACAccountTypeIdentifierTwitter <UIScrollViewDelegate, UITextFieldDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate>
{
    BLJournalScrollView *m_scrollView;
    UIView *m_overlayView;
    BLJournalEditor *m_journalEditor;
    BLAlbum *m_album;
    BLDBRequest *m_photosRequest;
    NSArray *m_photos;
    int m_currentPageIndex;
    NSMutableArray *m_pageViews;
    BLJournalElementView *m_longPressedElementView;
    struct CGPoint m_longPressedCenterOffset;
    BLJournalElementView *m_draggedElementView;
    BLJournalElementView *m_selectedElementView;
    BLJournalElementView *m_editedElementView;
    BLJournalElementView *m_pinchedElementView;
    BLJournalElementView *m_addedElementView;
    BLJournalElementView *m_resizedElementView;
    BOOL m_changingEditedView;
    unsigned int m_pageBreakIndex;
    BOOL m_willGoToNextPage;
    BOOL m_willGoToPreviousPage;
    UITapGestureRecognizer *m_singleTapRecognizer;
    BOOL m_waitForSingleTap;
    BOOL m_showMenu;
    BOOL m_showMenuAfterRotate;
    struct CGSize m_keyboardSize;
    struct CGRect m_textSelectionRect;
    NSDictionary *m_initialState;
    UIActionSheet *m_photosActionSheet;
    UIPopoverController *m_addItemsPopoverController;
    UINavigationController *m_addItemsNavigationController;
    BLJournalAddItemsViewController *m_addItemsViewController;
    unsigned int m_addItemsInsertionIndex;
    UIPopoverController *m_pageListPopoverController;
    UINavigationController *m_pageListNavigationController;
    BLJournalPageListViewController *m_pageListViewController;
    UIPanGestureRecognizer *m_panGestureRecognizer;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    int m_resizeOperation;
    struct CGRect m_resizeStartFrame;
    struct CGPoint m_resizeStartLocation;
    struct CGSize m_resizeStartSizeInGrid;
    struct CGSize m_resizeMinSizeInGrid;
    struct CGSize m_resizeMaxSizeInGrid;
    struct CGSize m_resizeMinFrameSize;
    struct CGSize m_resizeMaxFrameSize;
    UIButton *m_actionButton;
    UIPopoverController *m_sharePopoverController;
    BLSharingNavigationController *m_sharingNavigationController;
    UIPopoverController *m_settingsPopoverController;
    UINavigationController *m_settingsNavigationController;
    UIViewController *m_settingsViewController;
    UIPopoverController *m_actionPopoverController;
    BOOL m_ignoreDatabaseUpdate;
    int m_suspendImageFetching;
    BOOL m_handledDidScroll;
    struct CGSize m_viewSize;
    float m_initZoomScale;
    NSTimer *m_scrollTimer;
}

+ (id)journalController;
- (void)setSharePopoverController:(id)fp8;
- (id)sharePopoverController;
- (void)setPhotosActionSheet:(id)fp8;
- (id)photosActionSheet;
- (void)setPhotos:(id)fp8;
- (id)photos;
- (void)setPhotosRequest:(id)fp8;
- (id)photosRequest;
- (id)album;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (void)scrollViewDidScroll:(id)fp8;
- (void)handleScrollViewDidScroll:(id)fp8;
- (void)dealloc;
- (id)undoManager;
- (void)viewDidUnload;
- (void)awakeFromNib;
- (void)viewDidDisappear;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)willUndo:(id)fp8;
- (void)mediaChanged:(id)fp8;
- (void)editModeChanged;
- (void)selectionRectChanged:(id)fp8;
- (void)keyboardDidHide:(id)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)setupGestureRecognizers;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)a_showPhotosActionSheet:(id)fp8;
- (void)presentPopover:(id)fp8 fromElementView:(id)fp12;
- (void)performResetLayout;
- (void)performAutoLayout;
- (void)restoreLayout:(id)fp8 page:(id)fp12;
- (void)performToggleShowPinsForMapElement:(id)fp8;
- (void)performResetForMapElement:(id)fp8;
- (void)performSetData:(id)fp8 forMapElement:(id)fp12;
- (void)performSetData:(id)fp8 automatic:(BOOL)fp12 forMapElement:(id)fp16;
- (void)performSetTemperature:(float)fp8 forWeatherElement:(id)fp12;
- (void)performSetCondition:(int)fp8 forWeatherElement:(id)fp12;
- (void)performSetAutomatic:(BOOL)fp8 forWeatherElement:(id)fp12;
- (void)doSetValue:(id)fp8 forSetting:(id)fp12;
- (void)doSetCountryName:(id)fp8 forElement:(id)fp12;
- (void)doSetCalendarAutomatic:(BOOL)fp8 forCalendarElement:(id)fp12;
- (void)doSetCalendarDate:(id)fp8 forCalendarElement:(id)fp12;
- (void)undoableSetPageTitle:(id)fp8 atIndex:(unsigned int)fp12;
- (void)undoableCombinePagesAtIndexes:(id)fp8;
- (void)uncombinePages:(id)fp8 atIndexes:(id)fp12;
- (void)undoableRemovePagesAtIndexes:(id)fp8;
- (void)insertPages:(id)fp8 atIndexes:(id)fp12;
- (void)undoableMovePageFromRow:(unsigned int)fp8 toRow:(unsigned int)fp12;
- (id)didDrag:(id)fp8;
- (void)continueDragging:(id)fp8;
- (void)willDrag:(id)fp8 addOperation:(int)fp12;
- (void)undoableSplitPage:(id)fp8 atIndex:(unsigned int)fp12;
- (void)undoableUnsplitPage:(id)fp8 atIndex:(unsigned int)fp12;
- (void)finishAddOperation:(int)fp8 elementView:(id)fp12;
- (id)performAddOperation:(int)fp8;
- (void)doAddPageAtIndex:(unsigned int)fp8;
- (void)undoAddPageAtIndex:(unsigned int)fp8;
- (void)a_showNextPage:(id)fp8;
- (void)a_showPreviousPage:(id)fp8;
- (void)a_showPageList:(id)fp8;
- (void)a_showSettings:(id)fp8;
- (void)a_addItems:(id)fp8;
- (void)showAddItemsPanelInIPhone;
- (id)createTitle:(id)fp8;
- (void)journalPageChanged:(id)fp8;
- (void)journalElementChanged:(id)fp8;
- (void)journalGoToPage:(id)fp8;
- (void)journalPageUnsplit:(id)fp8;
- (void)journalPageSplit:(id)fp8;
- (void)journalPagesUncombined:(id)fp8;
- (void)journalPagesCombined:(id)fp8;
- (void)journalPagesAdded:(id)fp8;
- (void)journalPagesRemoved:(id)fp8;
- (void)removePageViewsAtIndexes:(id)fp8;
- (void)removePageViewAtIndex:(unsigned int)fp8;
- (void)journalPageMoved:(id)fp8;
- (void)journalPageCreated:(id)fp8;
- (void)journalElementRemoved:(id)fp8;
- (void)journalElementAdded:(id)fp8;
- (void)journalSettingChanged:(id)fp8;
- (void)journalStyleChanged:(id)fp8;
- (void)setAlbum:(id)fp8;
- (void)userSwipedLeft:(id)fp8;
- (void)userSwipedRight:(id)fp8;
- (void)userDoubleTapped:(id)fp8;
- (void)userSingleTapped:(id)fp8;
- (void)userTapped:(id)fp8;
- (void)handleTapRecognizer:(id)fp8;
- (void)userPanned:(id)fp8;
- (int)resizeOperationAtLocation:(struct CGPoint)fp8;
- (void)resetZoom;
- (void)userPinched:(id)fp8;
- (void)userLongPressed:(id)fp8;
- (void)scrollTimer;
- (void)updateDragElementLocation;
- (void)userLongPressedNextPage:(id)fp8;
- (void)userLongPressedPreviousPage:(id)fp8;
- (void)dismissAddItemsPopover;
- (void)dismissActionPopover;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)showAddItemsPanelInView:(id)fp8 rect:(struct CGRect)fp12;
- (void)deselectAll;
- (void)setSelectedElementView:(id)fp8;
- (id)viewForZoomingInScrollView:(id)fp8;
- (void)setEditedElementView:(id)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)showDetailViewForElement:(id)fp8;
- (void)setupPageViews;
- (void)deletePageViews;
- (void)setCurrentPageIndex:(int)fp8;
- (void)setCurrentPageIndex:(int)fp8 transitionType:(int)fp12;
- (void)resumeImageFetching;
- (void)suspendImageFetching;
- (void)unloadInactivePageViews;
- (void)loadActivePageViews;
- (int)currentPageIndex;
- (void)updateLayout:(BOOL)fp8;
- (void)updateContentSize;
- (BOOL)editMode;
- (id)scrollView;
- (id)headerView;
- (id)overlayView;
- (id)currentPage;
- (id)currentPageView;
- (id)pageViewAtIndex:(int)fp8;
- (BOOL)hasChanges;
- (id)journal;
- (void)updateScrollViewOffsetsForKeyboard;

@end


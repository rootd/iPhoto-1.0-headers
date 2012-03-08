/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, UILabel, UIPopoverController, UITableView, UITapGestureRecognizer, UIToolbar;

@interface BLJournalPageListViewController : _ACAccountTypeIdentifierTwitter <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    UIPopoverController *m_popoverController;
    UIToolbar *m_lowerToolbar;
    UITableView *m_pageList;
    NSMutableArray *m_pageListCells;
    UITapGestureRecognizer *m_doubleTapRecognizer;
    int m_initialPage;
    int m_prevPage;
    int m_numberOfOperations;
    UILabel *m_titleLabel;
    struct CGSize m_keyboardSize;
}

- (void)setPageList:(id)fp8;
- (id)pageList;
- (void)setLowerToolbar:(id)fp8;
- (id)lowerToolbar;
- (void)setPopoverController:(id)fp8;
- (id)popoverController;
- (void)tableView:(id)fp8 didDeselectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 moveRowAtIndexPath:(id)fp12 toIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canMoveRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)textFieldDidEndEditing:(id)fp8;
- (void)userDoubleTapped:(id)fp8;
- (void)a_save:(id)fp8;
- (void)a_cancel:(id)fp8;
- (void)a_showPage:(id)fp8;
- (void)hide;
- (void)a_combine:(id)fp8;
- (void)a_remove:(id)fp8;
- (BOOL)editMode;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)updateIPhoneHeaderRotation:(int)fp8;
- (void)dealloc;
- (void)releaseUI;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)fp8;
- (void)updateForEditMode:(BOOL)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)updateScrollViewOffsetsForKeyboard;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (void)updateCurrentPage;
- (void)updateLowerToolbar;
- (id)selectedRows;
- (void)showLowerToolbar:(BOOL)fp8 animated:(BOOL)fp12;
- (id)combineButton;
- (id)showPageButton;
- (id)removeButton;
- (id)journal;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLSharingServiceViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BLAlbum, BLJournalPage, BLJournalThemePickerView, NSIndexPath, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface BLJournalSharingViewController : BLSharingServiceViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIScrollViewDelegate>
{
    UITableView *m_tableView;
    BOOL m_hasJournals;
    BOOL m_creatingNewJournal;
    NSString *m_journalName;
    BLAlbum *m_journalToAddTo;
    int m_pageType;
    NSString *m_pageName;
    BLJournalPage *m_pageToAddTo;
    NSIndexPath *m_editingIndexPath;
    BLJournalThemePickerView *m_themePicker;
    BLJournalThemePickerView *m_themePickerPortrait;
    BLJournalThemePickerView *m_themePickerLandscape;
    UIView *m_themePickerContainer;
    UIButton *m_popoverShareButton;
    NSMutableArray *m_includedPhotos;
}

- (void)setPageToAddTo:(id)fp8;
- (id)pageToAddTo;
- (void)setPageName:(id)fp8;
- (id)pageName;
- (int)pageType;
- (id)journalToAddTo;
- (void)setJournalName:(id)fp8;
- (id)journalName;
- (BOOL)creatingNewJournal;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)textFieldDidEndEditing:(id)fp8;
- (void)textFieldDidBeginEditing:(id)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardDidShow:(id)fp8;
- (void)updateScrollViewOffsetsForKeyboard:(struct CGSize)fp8;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)a_share:(id)fp8;
- (struct CGSize)requiredPopoverSize;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)setCreatingNewJournal:(BOOL)fp8;
- (void)setJournalToAddTo:(id)fp8;
- (void)setPageType:(int)fp8;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (id)includedPhotos;
- (void)setIncludedPhotos:(id)fp8;

@end


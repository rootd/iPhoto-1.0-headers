/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLSharingServiceViewController.h"

#import "BLDatePickerViewDelegate-Protocol.h"
#import "BLViewAnimatorDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BLJournalCalendarElement, UITableView, UIViewController;

@interface BLJournalCalendarSettingsViewController : BLSharingServiceViewController <UITableViewDelegate, UITableViewDataSource, BLDatePickerViewDelegate, BLViewAnimatorDelegate>
{
    BLJournalCalendarElement *m_element;
    UITableView *m_tableView;
    UIViewController *m_currentPicker;
}

- (void)setTableView:(id)fp8;
- (id)tableView;
- (BOOL)canDismiss;
- (void)didSelectDate:(id)fp8;
- (void)switchChanged:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)removeViewController:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (struct CGSize)requiredPopoverSize;
- (void)setPopoverDelegate:(id)fp8;
- (void)dealloc;
- (id)initWithCalendarElement:(id)fp8;

@end


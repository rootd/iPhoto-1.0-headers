/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLSharingServiceViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView;

@interface BLSlideshowStylePicker : BLSharingServiceViewController <UITableViewDelegate, UITableViewDataSource>
{
    int m_selectedStyle;
    UITableView *m_tableView;
}

- (void)setSelectedStyle:(int)fp8;
- (int)selectedStyle;
- (void)dealloc;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (struct CGSize)requiredPopoverSize;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end


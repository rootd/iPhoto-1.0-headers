/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLSharingServiceViewController.h"

@class BLJournalController, UIButton;

@interface BLJournalActionsViewController : BLSharingServiceViewController
{
    UIButton *m_slideshowButton;
    BLJournalController *journalController;
}

- (void)setSlideshowButton:(id)fp8;
- (id)slideshowButton;
- (void)setJournalController:(id)fp8;
- (id)journalController;
- (void)a_dismiss:(id)fp8;
- (void)a_itunes:(id)fp8;
- (void)a_slideshow:(id)fp8;
- (void)a_icloud:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (struct CGSize)requiredPopoverSize;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

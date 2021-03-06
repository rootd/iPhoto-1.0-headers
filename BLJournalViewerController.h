/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "BLInfoControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BLJournal, NSMutableArray, UIButton, UILabel, UIPopoverController, UIScrollView, UIView, UIWindow;

@interface BLJournalViewerController : _ACAccountTypeIdentifierTwitter <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, BLInfoControllerDelegate>
{
    UIScrollView *m_scrollView;
    UIView *m_headerView;
    UIButton *m_backButton;
    UIButton *m_infoButton;
    UILabel *m_caption;
    UIPopoverController *m_infoPopover;
    UIWindow *m_window;
    UIWindow *m_originalWindow;
    BLJournal *m_journal;
    NSMutableArray *m_items;
    int m_currentIndex;
}

+ (BOOL)isViewerActive;
+ (id)sharedInstance;
- (void)setM_caption:(id)fp8;
- (id)m_caption;
- (void)setM_infoButton:(id)fp8;
- (id)m_infoButton;
- (void)setM_backButton:(id)fp8;
- (id)m_backButton;
- (void)setM_headerView:(id)fp8;
- (id)m_headerView;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)userDoubleTapped:(id)fp8;
- (void)userTapped:(id)fp8;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)updateCurrentIndex;
- (void)dealloc;
- (id)scrollView;
- (void)a_showInfo:(id)fp8;
- (void)dismissInfoController;
- (void)a_done:(id)fp8;
- (void)a_nextPhoto:(id)fp8;
- (void)a_previousPhoto:(id)fp8;
- (void)dismissWindow;
- (BOOL)isActive;
- (void)showPhotos:(id)fp8 startIndex:(int)fp12 journal:(id)fp16;
- (void)setCurrentIndex:(int)fp8 visibility:(int)fp12;
- (void)deleteItems;
- (id)viewerItemAtIndex:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end


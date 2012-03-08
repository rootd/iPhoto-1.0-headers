/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLSharingServiceViewController.h"

#import "MPMediaPickerControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UISegmentedControl, UITableView;

@interface BLSlideshowMusicPicker : BLSharingServiceViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate>
{
    int m_type;
    UITableView *m_tableView;
    UISegmentedControl *m_segmentedControl;
    int m_selectedSong;
    BOOL m_defaultSong;
}

- (void)setDefaultSong:(BOOL)fp8;
- (BOOL)defaultSong;
- (void)setSelectedType:(int)fp8;
- (int)selectedType;
- (void)setSelectedSong:(int)fp8;
- (int)selectedSong;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (struct CGSize)requiredPopoverSize;
- (void)mediaPickerDidCancel:(id)fp8;
- (void)mediaPicker:(id)fp8 didPickMediaItems:(id)fp12;
- (void)didChooseThemeMusic:(id)fp8;
- (void)_showMediaPicker;
- (void)_typeDidChange:(id)fp8;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

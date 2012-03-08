/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLJournalElementView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, UITableView;

@interface BLJournalFacebookView : BLJournalElementView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *m_comments;
    UITableView *m_tableView;
}

- (int)tableView:(id)fp8 indentationLevelForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)facebookElement;
- (id)initWithFrame:(struct CGRect)fp8 element:(id)fp24;

@end


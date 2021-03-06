/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLAndNMoreView, NSArray, NSDictionary;

@interface BLViewerScrollView : _ACAccountTypeIdentifierTwitter
{
    NSArray *m_pageViews;
    NSDictionary *m_multiViews;
    int m_pageCount;
    int m_currentPage;
    id <UIScrollViewDelegate> m_delegateStorage;
    int m_suspendCount;
    BLAndNMoreView *m_andNMoreView;
}

- (void)setAndNMoreView:(id)fp8;
- (id)andNMoreView;
- (void)setCurrentPage:(int)fp8;
- (int)currentPage;
- (int)pageCount;
- (void)setMultiViews:(id)fp8;
- (id)multiViews;
- (void)setPageViews:(id)fp8;
- (id)pageViews;
- (void)setFrame:(struct CGRect)fp8;
- (void)resetSubviewPositions;
- (void)setPageCount:(int)fp8;
- (void)updateContentSize;
- (void)resumeMessages;
- (void)suspendMessages;
- (id)framesForPhotos:(id)fp8 inRect:(struct CGRect)fp12;
- (struct CGRect)viewerRectForPage:(int)fp8;
- (struct CGRect)viewerRectForRect:(struct CGRect)fp8;
- (struct CGRect)pageRectForPage:(int)fp8;

@end


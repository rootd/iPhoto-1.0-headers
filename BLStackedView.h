/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class UIView;

@interface BLStackedView : _ACAccountTypeIdentifierTwitter
{
    UIView *m_viewToMove;
    UIView *m_viewToResize;
}

- (void)setViewToResize:(id)fp8;
- (id)viewToResize;
- (void)setViewToMove:(id)fp8;
- (id)viewToMove;
- (void)awakeFromNib;
- (void)setHidden:(BOOL)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)updateAttachedViews;

@end

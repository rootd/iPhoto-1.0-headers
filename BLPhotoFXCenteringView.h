/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLEditBottomBar.h"

@class UIView;

@interface BLPhotoFXCenteringView : BLEditBottomBar
{
    UIView *m_viewToCenter;
}

- (void)setViewToCenter:(id)fp8;
- (id)viewToCenter;
- (void)dealloc;
- (void)awakeFromNib;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)fp8;
- (void)centerUnderViewer;

@end


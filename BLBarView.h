/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class UIView;

@interface BLBarView : _ACAccountTypeIdentifierTwitter
{
    UIView *m_leftEnd;
    UIView *m_rightEnd;
    UIView *m_viewToCenter;
    int m_state;
    int m_swapState;
}

- (int)state;
- (void)setM_viewToCenter:(id)fp8;
- (id)m_viewToCenter;
- (void)setM_rightEnd:(id)fp8;
- (id)m_rightEnd;
- (void)setM_leftEnd:(id)fp8;
- (id)m_leftEnd;
- (void)setFrame:(struct CGRect)fp8;
- (void)setState:(int)fp8;
- (BOOL)swapForLeftHandLayout;

@end

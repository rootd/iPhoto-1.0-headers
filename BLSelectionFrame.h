/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLThumbView;

@interface BLSelectionFrame : _ACAccountTypeIdentifierTwitter
{
    int m_selectionState;
    struct CGRect m_customFrame;
    BLThumbView *m_thumbView;
}

- (void)setThumbView:(id)fp8;
- (id)thumbView;
- (int)selectionState;
- (void)setSelectionState:(int)fp8;
- (void)sizeToFit;
- (void)setCustomFrame:(struct CGRect)fp8;
- (id)initWithCustomFrame:(struct CGRect)fp8;

@end

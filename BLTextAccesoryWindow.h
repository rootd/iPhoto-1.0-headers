/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLTextView;

@interface BLTextAccesoryWindow : _ACAccountTypeIdentifierTwitter
{
    int m_orientation;
    BLTextView *m_textView;
}

+ (id)sharedInstance;
- (void)willRemoveSubview:(id)fp8;
- (void)addSubview:(id)fp8 withTextView:(id)fp12;
- (void)update;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (id)initWithFrame:(struct CGRect)fp8;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLTextView, UIImageView;

@interface BLEmptyMessageContainer : _ACAccountTypeIdentifierTwitter
{
    BLTextView *m_landscapeLabel;
    BLTextView *m_portraitLabel;
    UIImageView *m_imageView;
    UIImageView *m_tackView;
    float m_imageRotation;
}

- (id)initWithFrame:(struct CGRect)fp8 message:(id)fp24 imageKey:(id)fp28;
- (void)setFrame:(struct CGRect)fp8;
- (void)updateSubviews;
- (float)imageRotation;
- (void)setImageRotation:(float)fp8;

@end


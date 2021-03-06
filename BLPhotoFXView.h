/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableDictionary, UIImage, UIImageView, UIPanGestureRecognizer;

@interface BLPhotoFXView : _ACAccountTypeIdentifierTwitter <UIGestureRecognizerDelegate>
{
    NSMutableDictionary *m_valueDict;
    UIImage *m_image;
    UIImage *m_imageWithEffect;
    int m_effectGroupIndex;
    float m_effectValue;
    int m_numberOfTouches;
    UIPanGestureRecognizer *m_panRecognizer;
    UIImageView *m_upperLine;
    UIImageView *m_lowerLine;
}

- (float)effectValue;
- (int)effectGroupIndex;
- (id)imageWithEffect;
- (void)setImage:(id)fp8;
- (id)image;
- (void)dealloc;
- (void)willMoveToWindow:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)drawRect:(struct CGRect)fp8;
- (void)userPanned:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)setEffectValue:(float)fp8;
- (void)setEffectGroupIndex:(int)fp8;
- (float)defaultEffectValue;
- (void)setImageWithEffect:(id)fp8;

@end


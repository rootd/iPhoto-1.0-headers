/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLPhotoFXCardView, BLPhotoFXThumbView, NSMutableDictionary, UIImageView;

@interface BLPhotoFXRangeView : _ACAccountTypeIdentifierTwitter
{
    NSMutableDictionary *m_valueDict;
    BLPhotoFXCardView *m_cardView;
    BLPhotoFXThumbView *m_defaultThumb;
    int m_effectGroupIndex;
    float m_effectValue;
    float m_rotation;
    UIImageView *m_highlightLine;
    BOOL m_holdUpdate;
    BOOL m_changeInProgess;
}

- (float)effectValue;
- (int)effectGroupIndex;
- (void)setDefaultThumb:(id)fp8;
- (id)defaultThumb;
- (void)setCardView:(id)fp8;
- (id)cardView;
- (void)dealloc;
- (void)willMoveToWindow:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)a_removeEffect:(id)fp8;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)setValueFromTouches:(id)fp8;
- (void)finishUpdate;
- (void)setEffectValue:(float)fp8;
- (void)setEffectGroupIndex:(int)fp8;
- (void)updateHighlight;

@end


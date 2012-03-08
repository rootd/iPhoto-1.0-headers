/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLHistogramAnalysis, BLTouchRecognizer, NSMutableDictionary, NSString, UIImageView, UIView;

@interface BLHistogramView : _ACAccountTypeIdentifierTwitter
{
    NSMutableDictionary *m_valueDict;
    BLHistogramAnalysis *m_histogram;
    float m_blackLevel;
    float m_whiteLevel;
    float m_brightness;
    float m_contrast;
    float m_blackLevelRed;
    float m_whiteLevelRed;
    float m_blackLevelGreen;
    float m_whiteLevelGreen;
    float m_blackLevelBlue;
    float m_whiteLevelBlue;
    struct CGPoint m_startLocation;
    BOOL m_leftHandLayout;
    UIView *m_blackPointHolder;
    UIImageView *m_blackPointView;
    UIView *m_midPointHolder;
    UIImageView *m_midPointView;
    UIView *m_whitePointHolder;
    UIImageView *m_whitePointView;
    UIView *m_contrastPoint1Holder;
    UIImageView *m_contrastPoint1View;
    UIView *m_contrastPoint2Holder;
    UIImageView *m_contrastPoint2View;
    UIView *m_lineViewLeft;
    UIView *m_lineViewRight;
    UIView *m_blackEndView;
    UIView *m_whiteEndView;
    int m_dragType;
    BOOL m_dragging;
    NSString *m_keySent;
    struct {
        unsigned int blackpoint:1;
        unsigned int whitepoint:1;
        unsigned int brightness:1;
        unsigned int contrast:1;
        unsigned int initializing:1;
        unsigned int padding:3;
    } m_flags;
    BLTouchRecognizer *m_recognizer;
}

- (float)whiteLevelBlue;
- (float)blackLevelBlue;
- (float)whiteLevelGreen;
- (float)blackLevelGreen;
- (float)whiteLevelRed;
- (float)blackLevelRed;
- (void)setLeftHandLayout:(BOOL)fp8;
- (BOOL)leftHandLayout;
- (float)contrast;
- (float)brightness;
- (float)whiteLevel;
- (float)blackLevel;
- (id)histogram;
- (void)setM_whiteEndView:(id)fp8;
- (id)m_whiteEndView;
- (void)setM_blackEndView:(id)fp8;
- (id)m_blackEndView;
- (void)setM_lineViewRight:(id)fp8;
- (id)m_lineViewRight;
- (void)setM_lineViewLeft:(id)fp8;
- (id)m_lineViewLeft;
- (void)setM_contrastPoint2View:(id)fp8;
- (id)m_contrastPoint2View;
- (void)setM_contrastPoint2Holder:(id)fp8;
- (id)m_contrastPoint2Holder;
- (void)setM_contrastPoint1View:(id)fp8;
- (id)m_contrastPoint1View;
- (void)setM_contrastPoint1Holder:(id)fp8;
- (id)m_contrastPoint1Holder;
- (void)setM_whitePointView:(id)fp8;
- (id)m_whitePointView;
- (void)setM_whitePointHolder:(id)fp8;
- (id)m_whitePointHolder;
- (void)setM_midPointView:(id)fp8;
- (id)m_midPointView;
- (void)setM_midPointHolder:(id)fp8;
- (id)m_midPointHolder;
- (void)setM_blackPointView:(id)fp8;
- (id)m_blackPointView;
- (void)setM_blackPointHolder:(id)fp8;
- (id)m_blackPointHolder;
- (void)dealloc;
- (void)willMoveToWindow:(id)fp8;
- (void)setUserInteractionEnabled:(BOOL)fp8;
- (void)removeObservers;
- (void)addObservers;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)effectDidChange:(id)fp8;
- (void)effectWillChange:(id)fp8;
- (void)userPanned:(id)fp8;
- (id)keyForType:(int)fp8;
- (void)panContrast:(id)fp8;
- (void)panMiddle:(id)fp8;
- (void)panWhite:(id)fp8;
- (void)panBlack:(id)fp8;
- (float)shiftAtLocation:(id)fp8;
- (float)valueAtLocation:(id)fp8;
- (void)setContrast:(float)fp8;
- (void)setBrightness:(float)fp8;
- (void)setWhiteLevelBlue:(float)fp8;
- (void)setBlackLevelBlue:(float)fp8;
- (void)setWhiteLevelGreen:(float)fp8;
- (void)setBlackLevelGreen:(float)fp8;
- (void)setWhiteLevelRed:(float)fp8;
- (void)setBlackLevelRed:(float)fp8;
- (void)setWhiteLevel:(float)fp8;
- (void)setBlackLevel:(float)fp8;
- (void)setHistogram:(id)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)updateKnobs;
- (void)layoutKnobs;
- (void)computeKnobLocationsBlack:(struct CGPoint *)fp8 contrast1:(struct CGPoint *)fp12 brightness:(struct CGPoint *)fp16 contrast2:(struct CGPoint *)fp20 white:(struct CGPoint *)fp24;
- (void)computeKnobValuesBlack:(float *)fp8 contrast1:(float *)fp12 brightness:(float *)fp16 contrast2:(float *)fp20 white:(float *)fp24;
- (float)currentWhitePoint;
- (void)setCurrentWhiteValue:(float)fp8;
- (float)currentWhiteValue;
- (float)currentBlackPoint;
- (void)setCurrentBlackValue:(float)fp8;
- (float)currentBlackValue;
- (id)whiteKey;
- (id)blackKey;
- (void)setView:(id)fp8 colorForOverLimit:(float)fp12;
- (void)setKnobEnable:(BOOL)fp8;
- (void)setKnobAlpha:(float)fp8;
- (struct CGPoint)locationForValue:(float)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)commonInit;

@end

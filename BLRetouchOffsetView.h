/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLEffectView.h"

@class BLBlurredLabel, UIImageView, UITapGestureRecognizer, UIView;

@interface BLRetouchOffsetView : BLEffectView
{
    UIImageView *m_glow;
    UIImageView *m_brush;
    UIView *m_middleBrush;
    struct CGPoint m_originalCenter;
    BOOL m_circle;
    BOOL m_selected;
    BOOL m_dontUpdateCircle;
    BLBlurredLabel *m_label;
    UITapGestureRecognizer *m_doubleTapRecognizer;
}

- (void)setM_middleBrush:(id)fp8;
- (id)m_middleBrush;
- (void)setM_brush:(id)fp8;
- (id)m_brush;
- (void)setM_glow:(id)fp8;
- (id)m_glow;
- (BOOL)selected;
- (BOOL)circle;
- (void)awakeFromNib;
- (void)setFrame:(struct CGRect)fp8;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)setCircle:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setCircle:(BOOL)fp8;
- (void)toggleLayerEnable;
- (void)willMoveToWindow:(id)fp8;
- (void)takeValue;
- (void)setValue:(float)fp8;
- (void)setCircle:(BOOL)fp8 brushType:(int)fp12;
- (void)setGroupCircle:(BOOL)fp8 brushType:(int)fp12;
- (void)setGroupCircle:(BOOL)fp8;
- (void)setSelected:(BOOL)fp8;
- (void)bounceBrush;
- (void)updatePositionAnimated;
- (void)updatePosition;
- (id)backGroundView;
- (id)label;
- (void)updateRecognizer;

@end


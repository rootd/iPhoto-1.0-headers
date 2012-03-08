/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLPromiseImage, UIActivityIndicatorView, UIBezierPath, UIImage;

@interface BLLoupeImageView : _ACAccountTypeIdentifierTwitter
{
    int m_loupeSize;
    UIImage *m_image;
    UIBezierPath *m_clippingPath;
    BLLoupeImageView *m_lowResView;
    UIActivityIndicatorView *m_activityView;
    struct CGPoint m_imagePoint;
    struct CGSize m_imageSize;
    BLPromiseImage *m_fullResPromiseImage;
    struct CGRect m_imageFrame;
    float m_magnification;
    BOOL m_fetchInProgress;
    BOOL m_didMoveDuringFetch;
}

- (float)magnification;
- (void)setActivityView:(id)fp8;
- (id)activityView;
- (id)lowResView;
- (void)setImageFrame:(struct CGRect)fp8;
- (struct CGRect)imageFrame;
- (id)fullResPromiseImage;
- (void)setImageSize:(struct CGSize)fp8;
- (struct CGSize)imageSize;
- (void)setClippingPath:(id)fp8;
- (id)clippingPath;
- (id)image;
- (void)setLoupeSize:(int)fp8;
- (int)loupeSize;
- (void)dealloc;
- (void)setPosition:(struct CGPoint)fp8 inView:(id)fp16;
- (void)drawRect:(struct CGRect)fp8;
- (void)setMagnification:(float)fp8;
- (void)setImage:(id)fp8;
- (void)setFullResPromiseImage:(id)fp8;
- (void)updateDisplay:(BOOL)fp8;
- (void)setLowResView:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end


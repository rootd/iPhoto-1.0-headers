/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLHistogramAnalysis, NSMutableDictionary, UIBezierPath;

@interface BLHistogramSubview : _ACAccountTypeIdentifierTwitter
{
    NSMutableDictionary *m_valueDict;
    BLHistogramAnalysis *m_outputHistogram;
    int m_histogramVariant;
    UIBezierPath *m_bezierPath;
}

- (void)setBezierPath:(id)fp8;
- (int)histogramVariant;
- (id)outputHistogram;
- (void)dealloc;
- (void)willMoveToWindow:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)drawRect:(struct CGRect)fp8;
- (void)setOutputHistogram:(id)fp8;
- (id)fillColor;
- (id)strokeColor;
- (id)bezierPath;
- (id)bezierForHistogramArray:(float *)fp8;
- (void)setHistogramVariant:(int)fp8;
- (void)setFrame:(struct CGRect)fp8;

@end


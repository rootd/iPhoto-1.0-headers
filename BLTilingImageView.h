/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLAnnotationView, BLTilingImageTiledView;

@interface BLTilingImageView : _ACAccountTypeIdentifierTwitter
{
    BLTilingImageTiledView *m_tiledView;
    float m_tiledScale;
    BLAnnotationView *m_annnotationView;
}

- (id)annotationView;
- (id)promiseImage;
- (void)setPromiseImage:(id)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)setAnnotationView:(id)fp8;
- (void)setBounds:(struct CGRect)fp8;
- (void)dealloc;

@end


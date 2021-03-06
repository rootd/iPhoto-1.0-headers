/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class BLJournalPhotoElement, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface BLJournalPhotoThumbView : _ACAccountTypeIdentifierTwitter <UIGestureRecognizerDelegate>
{
    BLJournalPhotoElement *m_photoElement;
    unsigned int m_imageRequestID;
    BOOL m_needsHighResThumb;
    BOOL m_suspendedImageRequest;
    float m_previousScale;
    CDAnonymousStruct7 m_oldCropInfo;
    UIImageView *m_imageView;
    UIImageView *m_panIconView;
    UIPinchGestureRecognizer *m_pinchRecognizer;
    UIPanGestureRecognizer *m_panRecognizer;
    UITapGestureRecognizer *m_doubleTapRecognizer;
}

- (void)dealloc;
- (void)resumeImageFetching;
- (void)suspendImageFetching;
- (void)removeFromSuperview;
- (void)userPinched:(id)fp8;
- (void)userPanned:(id)fp8;
- (void)userDoubleTapped:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (id)initWithFrame:(struct CGRect)fp8 photoElement:(id)fp24;
- (void)unload;
- (void)loadImage:(BOOL)fp8 highRes:(BOOL)fp12 force:(BOOL)fp16;
- (id)image;
- (void)setImage:(id)fp8;
- (void)cancelImageRequest;
- (void)sizeChanged;
- (id)imageView;
- (void)endEditing;
- (void)beginEditing;
- (id)panIconImage;

@end


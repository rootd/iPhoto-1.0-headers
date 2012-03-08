/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLTilingImageView.h"

@class BLMedia;

@interface BLViewerItemWrapper : BLTilingImageView
{
    unsigned int m_imageRequestID;
    unsigned int m_fullImageRequestID;
    BLMedia *m_photo;
    struct CGSize m_alternatePixelSize;
}

- (void)setAlternatePixelSize:(struct CGSize)fp8;
- (struct CGSize)alternatePixelSize;
- (id)photo;
- (void)setFullImageRequestID:(unsigned int)fp8;
- (unsigned int)fullImageRequestID;
- (void)setImageRequestID:(unsigned int)fp8;
- (unsigned int)imageRequestID;
- (void)dealloc;
- (void)setImage:(id)fp8;
- (void)photoImageChanged:(id)fp8;
- (void)setPhoto:(id)fp8;

@end

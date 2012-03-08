/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLJournalElementView.h"

@class BLMapView, BLResizableImageView;

@interface BLJournalMapView : BLJournalElementView
{
    BLMapView *m_mapView;
    BLResizableImageView *m_borderView;
    BLResizableImageView *m_shadowView;
    BOOL m_hasAdditionalScale;
}

+ (void)deleteTiles;
- (void)updateLastViewData:(id)fp8;
- (id)forceImage;
- (id)image;
- (id)location;
- (void)toggleShowPins:(id)fp8;
- (void)resetMap:(id)fp8;
- (BOOL)canPerformAction:(SEL)fp8 withSender:(id)fp12;
- (id)menuItems;
- (void)setAdditionalScale:(float)fp8 atLocation:(CDAnonymousStruct10)fp12;
- (BOOL)collectTiles;
- (void)elementContentChanged;
- (id)mapElement;
- (void)endEditing;
- (void)beginEditing;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 element:(id)fp24;
- (void)setupMap;

@end

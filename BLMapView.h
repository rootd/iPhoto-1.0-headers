/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIScrollViewDelegate-Protocol.h"

@class BLTiledMapView, NSMutableArray, NSMutableSet, UIImageView, UIScrollView, UITextView, UIView;

@interface BLMapView : _ACAccountTypeIdentifierTwitter <UIScrollViewDelegate>
{
    UIScrollView *m_scrollView;
    BLTiledMapView *m_mapView;
    UIView *m_noConnectionView;
    UITextView *m_noConnectionTextView;
    UIImageView *m_editIconView;
    BOOL m_editIconHidden;
    BOOL m_editMode;
    BOOL m_showEditIndicator;
    BOOL m_allowDelete;
    NSMutableArray *m_mapPins;
    NSMutableSet *m_geocoders;
    BOOL m_waitToSetup;
    float m_additionalScale;
}

+ (void)deleteTiles;
+ (id)locationFromMapPoint:(struct CGPoint)fp8;
- (void)setAdditionalScale:(float)fp8;
- (float)additionalScale;
- (id)mapTileView;
- (void)setNoConnectionTextView:(id)fp8;
- (id)noConnectionTextView;
- (void)setNoConnectionView:(id)fp8;
- (void)setAllowDelete:(BOOL)fp8;
- (BOOL)allowDelete;
- (BOOL)showEditIndicator;
- (BOOL)editMode;
- (BOOL)tileRequestFailed;
- (void)scrollViewDidEndZooming:(id)fp8 withView:(id)fp12 atScale:(float)fp16;
- (void)scrollViewWillBeginZooming:(id)fp8 withView:(id)fp12;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)fadeInEditIcon;
- (void)fadeOutEditIcon;
- (id)noConnectionView;
- (void)setUseLastScale:(BOOL)fp8;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)setup;
- (void)setFrame:(struct CGRect)fp8;
- (unsigned int)pinCount;
- (void)removeAllPins;
- (void)selectFirstPin;
- (void)zoomToScale:(float)fp8;
- (void)zoomToFit;
- (void)zoomToFit:(float)fp8;
- (void)zoomToFit:(float)fp8 scale:(float)fp12;
- (void)setLastViewData:(id)fp8;
- (void)setHasInternet:(BOOL)fp8;
- (void)setShowEditIndicator:(BOOL)fp8;
- (void)setShowPins:(BOOL)fp8;
- (void)setEditMode:(BOOL)fp8;
- (void)updateEditIndicator;
- (void)setDictionary:(id)fp8;
- (BOOL)collectTiles;
- (void)setAdditionalScale:(float)fp8 atLocation:(CDAnonymousStruct10)fp12;
- (void)setMapZoomScale:(float)fp8 center:(struct CGPoint)fp12;
- (id)location;
- (id)dictionary;
- (float)mapSize;
- (void)addPinWithDictionary:(id)fp8;
- (void)addPinAtLatitude:(float)fp8 longitude:(float)fp12;
- (void)addLocations:(id)fp8;
- (void)addPinIfNotPresent:(id)fp8;
- (void)addPin:(id)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (void)scrollViewDidZoom:(id)fp8;
- (id)viewForZoomingInScrollView:(id)fp8;
- (void)updatePins;

@end

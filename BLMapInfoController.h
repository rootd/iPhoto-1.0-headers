/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLInfoViewController.h"

#import "MKMapViewDelegate-Protocol.h"

@class BLMapView;

@interface BLMapInfoController : BLInfoViewController <MKMapViewDelegate>
{
    BLMapView *m_mapView;
}

- (void)setMapView:(id)fp8;
- (id)mapView;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGSize)contentSizeForViewInPopover;
- (void)updateForCurrentSelection;
- (void)dealloc;

@end

